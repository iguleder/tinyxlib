include	../standard_definitions.mk

#DEFS=-DX11_t -DTRANS_CLIENT

DEFS=-Dlinux -D_POSIX_C_SOURCE=199309L -D_POSIX_SOURCE -D_XOPEN_SOURCE	-D_BSD_SOURCE -D_SVID_SOURCE -D_GNU_SOURCE -DFUNCPROTO=15 -DNARROWPROTO -DXTHREADS -D_REENTRANT -DXUSE_MTSAFE_API -DMALLOC_0_RETURNS_NULL

CFLAGS= -I../include -I../include/X11 $(COMMONDEFS) $(DEFS)

OBJS=$(wildcard *.c)

all:	$(OBJS:.c=.o)
ifeq ($(STATIC),0)
	$(CC) $(LDFLAGS) -o libXinerama.so.1.0~ -shared -Wl,-soname,libXinerama.so.1 $(OBJS:.c=.o)
	mv -f libXinerama.so.1.0~ libXinerama.so.1.0
	ln -s libXinerama.so.1.0 libXinerama.so.1
	ln -s libXinerama.so.1.0 libXinerama.so
else
	ar cr libXinerama.a $(OBJS:.c=.o)
endif

clean:
	rm -f *.o *.a *.so*

install:
ifeq ($(STATIC),0)
	cp -af libXinerama.so.1.0 $(DESTDIR)/$(LIBDIR)
	cp -af libXinerama.so.1 $(DESTDIR)/$(LIBDIR)
	cp -af libXinerama.so $(DESTDIR)/$(LIBDIR)
else
	cp -af libXinerama.a $(DESTDIR)/$(LIBDIR)
endif

depend:
	gccmakedep -- $(CFLAGS) -- *.c
