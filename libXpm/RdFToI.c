/*
 * Copyright (C) 1989-95 GROUPE BULL
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * GROUPE BULL BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of GROUPE BULL shall not be
 * used in advertising or otherwise to promote the sale, use or other dealings
 * in this Software without prior written authorization from GROUPE BULL.
 */

/*****************************************************************************\
*  RdFToI.c:                                                                  *
*                                                                             *
*  XPM library                                                                *
*  Parse an XPM file and create the image and possibly its mask               *
*                                                                             *
*  Developed by Arnaud Le Hors                                                *
\*****************************************************************************/
/* $XFree86: xc/extras/Xpm/lib/RdFToI.c,v 1.4 2005/03/25 02:22:50 dawes Exp $ */

/* October 2004, source code review by Thomas Biege <thomas@suse.de> */

#include "XpmI.h"
#include <sys/stat.h>
#if !defined(NO_ZPIPE) && defined(WIN32)
# define popen _popen
# define pclose _pclose
# if defined(STAT_ZFILE)
#  include <io.h>
#  define stat _stat
#  define fstat _fstat
# endif
#endif

LFUNC(OpenReadFile, int, (char *filename, xpmData *mdata));
LFUNC(xpmDataClose, void, (xpmData *mdata));

#ifndef CXPMPROG
int
XpmReadFileToImage(display, filename,
		   image_return, shapeimage_return, attributes)
    Display *display;
    char *filename;
    XImage **image_return;
    XImage **shapeimage_return;
    XpmAttributes *attributes;
{
    XpmImage image;
    XpmInfo info;
    int ErrorStatus;
    xpmData mdata;

    xpmInitXpmImage(&image);
    xpmInitXpmInfo(&info);

    /* open file to read */
    if ((ErrorStatus = OpenReadFile(filename, &mdata)) != XpmSuccess)
	return (ErrorStatus);

    /* create the XImage from the XpmData */
    if (attributes) {
	xpmInitAttributes(attributes);
	xpmSetInfoMask(&info, attributes);
	ErrorStatus = xpmParseDataAndCreate(display, &mdata,
					    image_return, shapeimage_return,
					    &image, &info, attributes);
    } else
	ErrorStatus = xpmParseDataAndCreate(display, &mdata,
					    image_return, shapeimage_return,
					    &image, NULL, attributes);
    if (attributes) {
	if (ErrorStatus >= 0)		/* no fatal error */
	    xpmSetAttributes(attributes, &image, &info);
	XpmFreeXpmInfo(&info);
    }

    xpmDataClose(&mdata);
    /* free the XpmImage */
    XpmFreeXpmImage(&image);

    return (ErrorStatus);
}

int
XpmReadFileToXpmImage(filename, image, info)
    char *filename;
    XpmImage *image;
    XpmInfo *info;
{
    xpmData mdata;
    int ErrorStatus;

    /* init returned values */
    xpmInitXpmImage(image);
    xpmInitXpmInfo(info);

    /* open file to read */
    if ((ErrorStatus = OpenReadFile(filename, &mdata)) != XpmSuccess)
	return (ErrorStatus);

    /* create the XpmImage from the XpmData */
    ErrorStatus = xpmParseData(&mdata, image, info);

    xpmDataClose(&mdata);

    return (ErrorStatus);
}
#endif /* CXPMPROG */

/*
 * open the given file to be read as an xpmData which is returned.
 */
//#ifndef NO_ZPIPE
//#	define safe_popen s_popen
//#else
#	define safe_popen popen
//#endif

static int
OpenReadFile(filename, mdata)
    char *filename;
    xpmData *mdata;
{
#ifndef NO_ZPIPE
    char buf[BUFSIZ];
# ifdef STAT_ZFILE
    char *compressfile;
    struct stat status;
# endif
#endif

    if (!filename) {
	mdata->stream.file = (stdin);
	mdata->type = XPMFILE;
    } else {
#ifndef NO_ZPIPE
	size_t len = strlen(filename);

	if(len == 0                        ||
	   filename[len-1] == '/')
		return(XpmOpenFailed);
	if ((len > 2) && !strcmp(".Z", filename + (len - 2))) {
	    mdata->type = XPMPIPE;
	    snprintf(buf, sizeof(buf), "uncompress -c \"%s\"", filename);
	    if (!(mdata->stream.file = safe_popen(buf, "r")))
		return (XpmOpenFailed);

	} else if ((len > 3) && !strcmp(".gz", filename + (len - 3))) {
	    mdata->type = XPMPIPE;
	    snprintf(buf, sizeof(buf), "gunzip -qc \"%s\"", filename);
	    if (!(mdata->stream.file = safe_popen(buf, "r")))
		return (XpmOpenFailed);

	} else {
# ifdef STAT_ZFILE
	    if (!(compressfile = (char *) XpmMalloc(len + 4)))
		return (XpmNoMemory);

	    snprintf(compressfile, len+4, "%s.Z", filename);
	    if (!stat(compressfile, &status)) {
		snprintf(buf, sizeof(buf), "uncompress -c \"%s\"", compressfile);
		if (!(mdata->stream.file = safe_popen(buf, "r"))) {
		    XpmFree(compressfile);
		    return (XpmOpenFailed);
		}
		mdata->type = XPMPIPE;
	    } else {
		snprintf(compressfile, len+4, "%s.gz", filename);
		if (!stat(compressfile, &status)) {
		    snprintf(buf, sizeof(buf), "gunzip -c \"%s\"", compressfile);
		    if (!(mdata->stream.file = safe_popen(buf, "r"))) {
			XpmFree(compressfile);
			return (XpmOpenFailed);
		    }
		    mdata->type = XPMPIPE;
		} else {
# endif
#endif
		    if (!(mdata->stream.file = fopen(filename, "r"))) {
#if !defined(NO_ZPIPE) && defined(STAT_ZFILE)
			XpmFree(compressfile);
#endif
			return (XpmOpenFailed);
		    }
		    mdata->type = XPMFILE;
#ifndef NO_ZPIPE
# ifdef STAT_ZFILE
		}
	    }
	    XpmFree(compressfile);
# endif
	}
#endif
    }
    mdata->CommentLength = 0;
#ifdef CXPMPROG
    mdata->lineNum = 0;
    mdata->charNum = 0;
#endif
    return (XpmSuccess);
}

/*
 * close the file related to the xpmData if any
 */
static void
xpmDataClose(mdata)
    xpmData *mdata;
{
    switch (mdata->type) {
    case XPMFILE:
	if (mdata->stream.file != (stdin))
	    fclose(mdata->stream.file);
	break;
#ifndef NO_ZPIPE
    case XPMPIPE:
	fclose(mdata->stream.file);
	break;
#endif
    }
}
