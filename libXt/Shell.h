/***********************************************************

Copyright 1987, 1988, 1994, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.


Copyright 1987, 1988 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: xc/lib/Xt/util/Shell.ht,v 3.6 2006/01/09 14:59:25 dawes Exp $ */

#ifndef _XtShell_h
#define _XtShell_h

#include <X11/SM/SMlib.h>
#include <X11/Intrinsic.h>

/***********************************************************************
 *
 * Shell Widget
 *
 ***********************************************************************/
/*
 * Shell-specific resources names, classes, and a representation type.
 */

#ifndef XTSTRINGDEFINES
#define _XtShell_h_Const const
#endif

/* $XFree86: xc/config/util/makestrs.c,v 3.8 2005/10/14 15:15:53 tsi Exp $ */
/* This file is automatically generated. */
/* Default ABI version -- Do not edit */
/* XFree86: xc/lib/Xt/util/string.list,v 3.2 2006/01/09 14:59:26 dawes Exp */

#ifdef XTSTRINGDEFINES
#define XtNiconName "iconName"
#define XtCIconName "IconName"
#define XtNiconPixmap "iconPixmap"
#define XtCIconPixmap "IconPixmap"
#define XtNiconWindow "iconWindow"
#define XtCIconWindow "IconWindow"
#define XtNiconMask "iconMask"
#define XtCIconMask "IconMask"
#define XtNwindowGroup "windowGroup"
#define XtCWindowGroup "WindowGroup"
#define XtNvisual "visual"
#define XtCVisual "Visual"
#define XtNtitleEncoding "titleEncoding"
#define XtCTitleEncoding "TitleEncoding"
#define XtNsaveUnder "saveUnder"
#define XtCSaveUnder "SaveUnder"
#define XtNtransient "transient"
#define XtCTransient "Transient"
#define XtNoverrideRedirect "overrideRedirect"
#define XtCOverrideRedirect "OverrideRedirect"
#define XtNtransientFor "transientFor"
#define XtCTransientFor "TransientFor"
#define XtNiconNameEncoding "iconNameEncoding"
#define XtCIconNameEncoding "IconNameEncoding"
#define XtNallowShellResize "allowShellResize"
#define XtCAllowShellResize "AllowShellResize"
#define XtNcreatePopupChildProc "createPopupChildProc"
#define XtCCreatePopupChildProc "CreatePopupChildProc"
#define XtNtitle "title"
#define XtCTitle "Title"
#ifndef XtRAtom
#define XtRAtom "Atom"
#endif
#define XtNargc "argc"
#define XtCArgc "Argc"
#define XtNargv "argv"
#define XtCArgv "Argv"
#define XtNiconX "iconX"
#define XtCIconX "IconX"
#define XtNiconY "iconY"
#define XtCIconY "IconY"
#define XtNinput "input"
#define XtCInput "Input"
#define XtNiconic "iconic"
#define XtCIconic "Iconic"
#define XtNinitialState "initialState"
#define XtCInitialState "InitialState"
#define XtNgeometry "geometry"
#define XtCGeometry "Geometry"
#define XtNbaseWidth "baseWidth"
#define XtCBaseWidth "BaseWidth"
#define XtNbaseHeight "baseHeight"
#define XtCBaseHeight "BaseHeight"
#define XtNwinGravity "winGravity"
#define XtCWinGravity "WinGravity"
#define XtNminWidth "minWidth"
#define XtCMinWidth "MinWidth"
#define XtNminHeight "minHeight"
#define XtCMinHeight "MinHeight"
#define XtNmaxWidth "maxWidth"
#define XtCMaxWidth "MaxWidth"
#define XtNmaxHeight "maxHeight"
#define XtCMaxHeight "MaxHeight"
#define XtNwidthInc "widthInc"
#define XtCWidthInc "WidthInc"
#define XtNheightInc "heightInc"
#define XtCHeightInc "HeightInc"
#define XtNminAspectY "minAspectY"
#define XtCMinAspectY "MinAspectY"
#define XtNmaxAspectY "maxAspectY"
#define XtCMaxAspectY "MaxAspectY"
#define XtNminAspectX "minAspectX"
#define XtCMinAspectX "MinAspectX"
#define XtNmaxAspectX "maxAspectX"
#define XtCMaxAspectX "MaxAspectX"
#define XtNwmTimeout "wmTimeout"
#define XtCWmTimeout "WmTimeout"
#define XtNwaitForWm "waitforwm"
#define XtCWaitForWm "Waitforwm"
#define XtNwaitforwm "waitforwm"
#define XtCWaitforwm "Waitforwm"
#define XtNclientLeader "clientLeader"
#define XtCClientLeader "ClientLeader"
#define XtNwindowRole "windowRole"
#define XtCWindowRole "WindowRole"
#define XtNurgency "urgency"
#define XtCUrgency "Urgency"
#define XtNcancelCallback "cancelCallback"
#define XtNcloneCommand "cloneCommand"
#define XtCCloneCommand "CloneCommand"
#define XtNconnection "connection"
#define XtCConnection "Connection"
#define XtNcurrentDirectory "currentDirectory"
#define XtCCurrentDirectory "CurrentDirectory"
#define XtNdieCallback "dieCallback"
#define XtNdiscardCommand "discardCommand"
#define XtCDiscardCommand "DiscardCommand"
#define XtNenvironment "environment"
#define XtCEnvironment "Environment"
#define XtNinteractCallback "interactCallback"
#define XtNjoinSession "joinSession"
#define XtCJoinSession "JoinSession"
#define XtNprogramPath "programPath"
#define XtCProgramPath "ProgramPath"
#define XtNresignCommand "resignCommand"
#define XtCResignCommand "ResignCommand"
#define XtNrestartCommand "restartCommand"
#define XtCRestartCommand "RestartCommand"
#define XtNrestartStyle "restartStyle"
#define XtCRestartStyle "RestartStyle"
#define XtNsaveCallback "saveCallback"
#define XtNsaveCompleteCallback "saveCompleteCallback"
#define XtNsessionID "sessionID"
#define XtCSessionID "SessionID"
#define XtNshutdownCommand "shutdownCommand"
#define XtCShutdownCommand "ShutdownCommand"
#define XtNerrorCallback "errorCallback"
#else
extern _XtShell_h_Const char XtShellStrings[];
#ifndef XtNiconName
#define XtNiconName ((char*)&XtShellStrings[0])
#endif
#ifndef XtCIconName
#define XtCIconName ((char*)&XtShellStrings[9])
#endif
#ifndef XtNiconPixmap
#define XtNiconPixmap ((char*)&XtShellStrings[18])
#endif
#ifndef XtCIconPixmap
#define XtCIconPixmap ((char*)&XtShellStrings[29])
#endif
#ifndef XtNiconWindow
#define XtNiconWindow ((char*)&XtShellStrings[40])
#endif
#ifndef XtCIconWindow
#define XtCIconWindow ((char*)&XtShellStrings[51])
#endif
#ifndef XtNiconMask
#define XtNiconMask ((char*)&XtShellStrings[62])
#endif
#ifndef XtCIconMask
#define XtCIconMask ((char*)&XtShellStrings[71])
#endif
#ifndef XtNwindowGroup
#define XtNwindowGroup ((char*)&XtShellStrings[80])
#endif
#ifndef XtCWindowGroup
#define XtCWindowGroup ((char*)&XtShellStrings[92])
#endif
#ifndef XtNvisual
#define XtNvisual ((char*)&XtShellStrings[104])
#endif
#ifndef XtCVisual
#define XtCVisual ((char*)&XtShellStrings[111])
#endif
#ifndef XtNtitleEncoding
#define XtNtitleEncoding ((char*)&XtShellStrings[118])
#endif
#ifndef XtCTitleEncoding
#define XtCTitleEncoding ((char*)&XtShellStrings[132])
#endif
#ifndef XtNsaveUnder
#define XtNsaveUnder ((char*)&XtShellStrings[146])
#endif
#ifndef XtCSaveUnder
#define XtCSaveUnder ((char*)&XtShellStrings[156])
#endif
#ifndef XtNtransient
#define XtNtransient ((char*)&XtShellStrings[166])
#endif
#ifndef XtCTransient
#define XtCTransient ((char*)&XtShellStrings[176])
#endif
#ifndef XtNoverrideRedirect
#define XtNoverrideRedirect ((char*)&XtShellStrings[186])
#endif
#ifndef XtCOverrideRedirect
#define XtCOverrideRedirect ((char*)&XtShellStrings[203])
#endif
#ifndef XtNtransientFor
#define XtNtransientFor ((char*)&XtShellStrings[220])
#endif
#ifndef XtCTransientFor
#define XtCTransientFor ((char*)&XtShellStrings[233])
#endif
#ifndef XtNiconNameEncoding
#define XtNiconNameEncoding ((char*)&XtShellStrings[246])
#endif
#ifndef XtCIconNameEncoding
#define XtCIconNameEncoding ((char*)&XtShellStrings[263])
#endif
#ifndef XtNallowShellResize
#define XtNallowShellResize ((char*)&XtShellStrings[280])
#endif
#ifndef XtCAllowShellResize
#define XtCAllowShellResize ((char*)&XtShellStrings[297])
#endif
#ifndef XtNcreatePopupChildProc
#define XtNcreatePopupChildProc ((char*)&XtShellStrings[314])
#endif
#ifndef XtCCreatePopupChildProc
#define XtCCreatePopupChildProc ((char*)&XtShellStrings[335])
#endif
#ifndef XtNtitle
#define XtNtitle ((char*)&XtShellStrings[356])
#endif
#ifndef XtCTitle
#define XtCTitle ((char*)&XtShellStrings[362])
#endif
#ifndef XtRAtom
#define XtRAtom ((char*)&XtShellStrings[368])
#endif
#ifndef XtNargc
#define XtNargc ((char*)&XtShellStrings[373])
#endif
#ifndef XtCArgc
#define XtCArgc ((char*)&XtShellStrings[378])
#endif
#ifndef XtNargv
#define XtNargv ((char*)&XtShellStrings[383])
#endif
#ifndef XtCArgv
#define XtCArgv ((char*)&XtShellStrings[388])
#endif
#ifndef XtNiconX
#define XtNiconX ((char*)&XtShellStrings[393])
#endif
#ifndef XtCIconX
#define XtCIconX ((char*)&XtShellStrings[399])
#endif
#ifndef XtNiconY
#define XtNiconY ((char*)&XtShellStrings[405])
#endif
#ifndef XtCIconY
#define XtCIconY ((char*)&XtShellStrings[411])
#endif
#ifndef XtNinput
#define XtNinput ((char*)&XtShellStrings[417])
#endif
#ifndef XtCInput
#define XtCInput ((char*)&XtShellStrings[423])
#endif
#ifndef XtNiconic
#define XtNiconic ((char*)&XtShellStrings[429])
#endif
#ifndef XtCIconic
#define XtCIconic ((char*)&XtShellStrings[436])
#endif
#ifndef XtNinitialState
#define XtNinitialState ((char*)&XtShellStrings[443])
#endif
#ifndef XtCInitialState
#define XtCInitialState ((char*)&XtShellStrings[456])
#endif
#ifndef XtNgeometry
#define XtNgeometry ((char*)&XtShellStrings[469])
#endif
#ifndef XtCGeometry
#define XtCGeometry ((char*)&XtShellStrings[478])
#endif
#ifndef XtNbaseWidth
#define XtNbaseWidth ((char*)&XtShellStrings[487])
#endif
#ifndef XtCBaseWidth
#define XtCBaseWidth ((char*)&XtShellStrings[497])
#endif
#ifndef XtNbaseHeight
#define XtNbaseHeight ((char*)&XtShellStrings[507])
#endif
#ifndef XtCBaseHeight
#define XtCBaseHeight ((char*)&XtShellStrings[518])
#endif
#ifndef XtNwinGravity
#define XtNwinGravity ((char*)&XtShellStrings[529])
#endif
#ifndef XtCWinGravity
#define XtCWinGravity ((char*)&XtShellStrings[540])
#endif
#ifndef XtNminWidth
#define XtNminWidth ((char*)&XtShellStrings[551])
#endif
#ifndef XtCMinWidth
#define XtCMinWidth ((char*)&XtShellStrings[560])
#endif
#ifndef XtNminHeight
#define XtNminHeight ((char*)&XtShellStrings[569])
#endif
#ifndef XtCMinHeight
#define XtCMinHeight ((char*)&XtShellStrings[579])
#endif
#ifndef XtNmaxWidth
#define XtNmaxWidth ((char*)&XtShellStrings[589])
#endif
#ifndef XtCMaxWidth
#define XtCMaxWidth ((char*)&XtShellStrings[598])
#endif
#ifndef XtNmaxHeight
#define XtNmaxHeight ((char*)&XtShellStrings[607])
#endif
#ifndef XtCMaxHeight
#define XtCMaxHeight ((char*)&XtShellStrings[617])
#endif
#ifndef XtNwidthInc
#define XtNwidthInc ((char*)&XtShellStrings[627])
#endif
#ifndef XtCWidthInc
#define XtCWidthInc ((char*)&XtShellStrings[636])
#endif
#ifndef XtNheightInc
#define XtNheightInc ((char*)&XtShellStrings[645])
#endif
#ifndef XtCHeightInc
#define XtCHeightInc ((char*)&XtShellStrings[655])
#endif
#ifndef XtNminAspectY
#define XtNminAspectY ((char*)&XtShellStrings[665])
#endif
#ifndef XtCMinAspectY
#define XtCMinAspectY ((char*)&XtShellStrings[676])
#endif
#ifndef XtNmaxAspectY
#define XtNmaxAspectY ((char*)&XtShellStrings[687])
#endif
#ifndef XtCMaxAspectY
#define XtCMaxAspectY ((char*)&XtShellStrings[698])
#endif
#ifndef XtNminAspectX
#define XtNminAspectX ((char*)&XtShellStrings[709])
#endif
#ifndef XtCMinAspectX
#define XtCMinAspectX ((char*)&XtShellStrings[720])
#endif
#ifndef XtNmaxAspectX
#define XtNmaxAspectX ((char*)&XtShellStrings[731])
#endif
#ifndef XtCMaxAspectX
#define XtCMaxAspectX ((char*)&XtShellStrings[742])
#endif
#ifndef XtNwmTimeout
#define XtNwmTimeout ((char*)&XtShellStrings[753])
#endif
#ifndef XtCWmTimeout
#define XtCWmTimeout ((char*)&XtShellStrings[763])
#endif
#ifndef XtNwaitForWm
#define XtNwaitForWm ((char*)&XtShellStrings[773])
#endif
#ifndef XtCWaitForWm
#define XtCWaitForWm ((char*)&XtShellStrings[783])
#endif
#ifndef XtNwaitforwm
#define XtNwaitforwm ((char*)&XtShellStrings[793])
#endif
#ifndef XtCWaitforwm
#define XtCWaitforwm ((char*)&XtShellStrings[803])
#endif
#ifndef XtNclientLeader
#define XtNclientLeader ((char*)&XtShellStrings[813])
#endif
#ifndef XtCClientLeader
#define XtCClientLeader ((char*)&XtShellStrings[826])
#endif
#ifndef XtNwindowRole
#define XtNwindowRole ((char*)&XtShellStrings[839])
#endif
#ifndef XtCWindowRole
#define XtCWindowRole ((char*)&XtShellStrings[850])
#endif
#ifndef XtNurgency
#define XtNurgency ((char*)&XtShellStrings[861])
#endif
#ifndef XtCUrgency
#define XtCUrgency ((char*)&XtShellStrings[869])
#endif
#ifndef XtNcancelCallback
#define XtNcancelCallback ((char*)&XtShellStrings[877])
#endif
#ifndef XtNcloneCommand
#define XtNcloneCommand ((char*)&XtShellStrings[892])
#endif
#ifndef XtCCloneCommand
#define XtCCloneCommand ((char*)&XtShellStrings[905])
#endif
#ifndef XtNconnection
#define XtNconnection ((char*)&XtShellStrings[918])
#endif
#ifndef XtCConnection
#define XtCConnection ((char*)&XtShellStrings[929])
#endif
#ifndef XtNcurrentDirectory
#define XtNcurrentDirectory ((char*)&XtShellStrings[940])
#endif
#ifndef XtCCurrentDirectory
#define XtCCurrentDirectory ((char*)&XtShellStrings[957])
#endif
#ifndef XtNdieCallback
#define XtNdieCallback ((char*)&XtShellStrings[974])
#endif
#ifndef XtNdiscardCommand
#define XtNdiscardCommand ((char*)&XtShellStrings[986])
#endif
#ifndef XtCDiscardCommand
#define XtCDiscardCommand ((char*)&XtShellStrings[1001])
#endif
#ifndef XtNenvironment
#define XtNenvironment ((char*)&XtShellStrings[1016])
#endif
#ifndef XtCEnvironment
#define XtCEnvironment ((char*)&XtShellStrings[1028])
#endif
#ifndef XtNinteractCallback
#define XtNinteractCallback ((char*)&XtShellStrings[1040])
#endif
#ifndef XtNjoinSession
#define XtNjoinSession ((char*)&XtShellStrings[1057])
#endif
#ifndef XtCJoinSession
#define XtCJoinSession ((char*)&XtShellStrings[1069])
#endif
#ifndef XtNprogramPath
#define XtNprogramPath ((char*)&XtShellStrings[1081])
#endif
#ifndef XtCProgramPath
#define XtCProgramPath ((char*)&XtShellStrings[1093])
#endif
#ifndef XtNresignCommand
#define XtNresignCommand ((char*)&XtShellStrings[1105])
#endif
#ifndef XtCResignCommand
#define XtCResignCommand ((char*)&XtShellStrings[1119])
#endif
#ifndef XtNrestartCommand
#define XtNrestartCommand ((char*)&XtShellStrings[1133])
#endif
#ifndef XtCRestartCommand
#define XtCRestartCommand ((char*)&XtShellStrings[1148])
#endif
#ifndef XtNrestartStyle
#define XtNrestartStyle ((char*)&XtShellStrings[1163])
#endif
#ifndef XtCRestartStyle
#define XtCRestartStyle ((char*)&XtShellStrings[1176])
#endif
#ifndef XtNsaveCallback
#define XtNsaveCallback ((char*)&XtShellStrings[1189])
#endif
#ifndef XtNsaveCompleteCallback
#define XtNsaveCompleteCallback ((char*)&XtShellStrings[1202])
#endif
#ifndef XtNsessionID
#define XtNsessionID ((char*)&XtShellStrings[1223])
#endif
#ifndef XtCSessionID
#define XtCSessionID ((char*)&XtShellStrings[1233])
#endif
#ifndef XtNshutdownCommand
#define XtNshutdownCommand ((char*)&XtShellStrings[1243])
#endif
#ifndef XtCShutdownCommand
#define XtCShutdownCommand ((char*)&XtShellStrings[1259])
#endif
#ifndef XtNerrorCallback
#define XtNerrorCallback ((char*)&XtShellStrings[1275])
#endif
#endif /* XTSTRINGDEFINES */

#ifndef XTSTRINGDEFINES
#undef _XtShell_h_Const
#endif

/* Class record constants */

typedef struct _ShellClassRec *ShellWidgetClass;
typedef struct _OverrideShellClassRec *OverrideShellWidgetClass;
typedef struct _WMShellClassRec *WMShellWidgetClass;
typedef struct _TransientShellClassRec *TransientShellWidgetClass;
typedef struct _TopLevelShellClassRec *TopLevelShellWidgetClass;
typedef struct _ApplicationShellClassRec *ApplicationShellWidgetClass;
typedef struct _SessionShellClassRec *SessionShellWidgetClass;

#ifndef SHELL 
externalref WidgetClass shellWidgetClass;
externalref WidgetClass overrideShellWidgetClass;
externalref WidgetClass wmShellWidgetClass;
externalref WidgetClass transientShellWidgetClass;
externalref WidgetClass topLevelShellWidgetClass;
externalref WidgetClass applicationShellWidgetClass;
externalref WidgetClass sessionShellWidgetClass;
#endif

#endif /* _XtShell_h */
/* DON'T ADD STUFF AFTER THIS #endif */
