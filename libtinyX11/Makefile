include	../standard_definitions.mk

#-DXOS_USE_MTSAFE_PWDAPI needed for GetDflt.c

DEFS=-Dlinux -DXTHREADS -D_POSIX_SOURCE -D_POSIX_C_SOURCE=2 -D_BSD_SOURCE -D_SVID_SOURCE -D_GNU_SOURCE -DX_LOCALE -DFUNCPROTO=15 -DNARROWPROTO -DMALLOC_0_RETURNS_NULL -DHAS_SNPRINTF -DLIBX11 -DUNIXCONN -DTCPCONN -DX11_t -DTRANS_CLIENT  -DKEYSYMDB=\"$(DATADIR)/X11/XKeysymDB\" -DERRORDB=\"$(DATADIR)/X11/XErrorDB\" -DXLOCALEDIR=\"$(DATADIR)/locale\" -DX_LOCALE -DTINY -DXOS_USE_MTSAFE_PWDAPI

CFLAGS= -I../include -I../include/X11 -I../libxtrans $(COMMONDEFS) $(DEFS)

OBJS=$(wildcard *.c)

#XAUOBJS=$(wildcard ../libXau/*.c)
XAUOBJS=../libXau/AuDispose.c ../libXau/AuFileName.c ../libXau/AuGetBest.c ../libXau/AuRead.c

all:	$(OBJS:.c=.o)
ifeq ($(STATIC),0)
	$(CC) $(LDFLAGS) -o libX11.so.6.2~ -shared -Wl,-soname,libX11.so.6.2 $(OBJS:.c=.o) $(XAUOBJS:.c=.o)
	mv -f libX11.so.6.2~ libX11.so.6.2
	ln -s libX11.so.6.2 libX11.so.6
	ln -s libX11.so.6.2 libX11.so
else
	ar cr libX11.a $(OBJS:.c=.o) $(XAUOBJS:.c=.o)
endif

#KeysymStr.o:	KeysymStr.c ks_tables.h
#makekeys:	makekeys.o
#	$(CC) $(LDFLAGS) -o makekeys makekeys.o
#ks_tables.h:	makekeys
#	./makekeys < ../include/X11/keysymdef.h >ks_tables.h

transport.o:	transport.c xtrans/Xtranssock.c
	$(CC) -c $(CFLAGS) transport.c

clean:
	rm -f *.o *.a *.so*
#rm -f makekeys

install:
ifeq ($(STATIC),0)
	cp -af libX11.so.6.2 $(DESTDIR)/$(LIBDIR)
	cp -af libX11.so.6 $(DESTDIR)/$(LIBDIR)
	cp -af libX11.so $(DESTDIR)/$(LIBDIR)
else
	cp -af libX11.a $(DESTDIR)/$(LIBDIR)
endif
	@echo "prefix=$(PREFIX)" > $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "exec_prefix=$(BINDIR)" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "libdir=$(LIBDIR)" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "includedir=$(INCDIR)" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "xthreadlib=-lpthread" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Name: X11" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Description: X Library" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Version: 1.1.3" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Requires: xau xdmcp " >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Requires.private: xau xdmcp " >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Cflags: -I$(INCDIR)" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Libs: -L$(LIBDIR) -lX11" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	@echo "Libs.private: -L$(LIBDIR) -lX11 -lpthread" >> $(DESTDIR)/$(LIBDIR)/pkgconfig/x11.pc
	cp -a XKeysymDB $(DESTDIR)$(DATADIR)/X11/XKeysymDB
	cp -a XErrorDB $(DESTDIR)$(DATADIR)/X11/XErrorDB

depend:
	gccmakedep -- $(CFLAGS) -- *.c
