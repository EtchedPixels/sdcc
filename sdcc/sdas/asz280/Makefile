#
#
#

VERSION         = 5.20.0
VERSIONHI       = 5
VERSIONLO       = 20
VERSIONP        = 0

SHELL           = /bin/sh
CC              = gcc
CPP             = gcc -E
INSTALL         = /usr/bin/install -c
STRIP           = strip
MAKEDEP         = gcc -MM

top_builddir    = ..
top_srcdir      = ..

srcdir          = .
prefix          = /usr/local
exec_prefix     = ${prefix}
bindir          = ${exec_prefix}/bin
libdir          = ${exec_prefix}/lib
datadir         = ${datarootdir}
datarootdir     = ${prefix}/share
includedir      = ${prefix}/include
mandir          = ${datarootdir}/man
man1dir         = $(mandir)/man1
man2dir         = $(mandir)/man2
infodir         = @info@

EXEEXT          = 



CPPFLAGS        =  -DSDCDB -DNOICE -DINDEXLIB -I. -I$(srcdir) -I$(srcdir)/../asxxsrc -I$(srcdir)/../../support/util
CFLAGS          = -funsigned-char -O3 -Wall $(CPPFLAGS)
LDFLAGS         = 
LIBS            = -lm

OBJDIR = obj

UTILLIB = $(srcdir)/../../support/util
UTILSRC = dbuf.c dbuf_string.c
UTILLIBOBJS = $(UTILSRC:%.c=$(OBJDIR)/%.o)

ASXXLIB = $(srcdir)/../asxxsrc
ASXXLIBSRC = asdbg.c asdata.c asexpr.c aslex.c aslist.c asmain.c asout.c assubr.c assym.c asmcro.c sdas.c # strcmpi.c
ASXXLIBOBJS = $(ASXXLIBSRC:%.c=$(OBJDIR)/%.o)

SRC = z280pst.c z280mch.c z280adr.c dbuf.c dbuf_string.c
INCL = z280def.h z280opcy.h z280ops.h
OBJS = $(SRC:%.c=$(OBJDIR)/%.o)

ASSOURCES = $(SRC) $(ASXXLIBSRC:%.c=$(ASXXLIB)/%.c) # $(UTILSRC:%.c=$(UTILLIB)/%.c)

ASOBJECTS = $(ASXXLIBOBJS) $(OBJS)   # $(UTILLIBOBJS)

###ASX = $(top_builddir)/bin/sdasz80$(EXEEXT)
ASX = sdasz280$(EXEEXT)
#DEST = $(DESTDIR)$(bindir)/sdasz80$(EXEEXT)
DEST = asz280
DESTPATH = $(DESTDIR)$(bindir)/

transform       = s,x,x,

# Compiling entire program or any subproject
# ------------------------------------------

#all:	make.incl
#	make -f make.incl

all:	local
	
local: checkconf $(ASX)


$(ASX): $(ASOBJECTS)
	echo $(ASOBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(ASOBJECTS) $(LIBS)

# Compiling and installing everything and running test
# ----------------------------------------------------
install: all installdirs
	$(INSTALL) $(ASX) $(DESTPATH)`echo $(DEST)|sed '$(transform)'`$(EXEEXT)
	$(STRIP) $(DESTPATH)`echo $(DEST)|sed '$(transform)'`$(EXEEXT)

$(OBJDIR)/z280adr.o:	z280adr.c $(INCL)
$(OBJDIR)/z280mch.o:	z280mch.c $(INCL)
$(OBJDIR)/z280pst.o:	z280pst.c $(INCL)
$(OBJDIR)/dbuf.o:	dbuf.c
$(OBJDIR)/dbuf_string.o:	dbuf_string.c


# Deleting all the installed files
# --------------------------------
uninstall:
	rm -f $(DESTPATH)`echo $(DEST)|sed '$(transform)'`$(EXEEXT)


# Performing self-test
# --------------------
check:


# Performing installation test
# ----------------------------
installcheck:


# Creating installation directories
# ---------------------------------
installdirs:
	$(INSTALL) -d $(DESTDIR)$(bindir)


# Creating dependencies
# ---------------------
dep: Makefile.dep

Makefile.dep: $(ASSOURCES) $(srcdir)/*.h
	$(MAKEDEP) $(CPPFLAGS) $(filter %.c,$^) >Makefile.dep

ifeq "$(findstring $(MAKECMDGOALS),uninstall check installcheck installdirs \
                                   clean distclean mostlyclean realclean)" ""
  -include Makefile.dep
endif
include $(srcdir)/clean.mk

# My rules
# --------
$(OBJDIR)/.stamp:
	mkdir -p $(OBJDIR)
	touch $(OBJDIR)/.stamp

$(OBJDIR)/%.o: %.c $(OBJDIR)/.stamp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(ASXXLIB)/%.c $(OBJDIR)/.stamp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(UTILLIB)/%.c $(OBJDIR)/.stamp
	$(CC) -c $(CFLAGS) -o $@ $<


# Remaking configuration
# ----------------------
checkconf:
	@if [ -f $(top_builddir)/devel ]; then\
          $(MAKE) -f ../conf.mk srcdir="$(srcdir)" top_builddir="$(top_builddir)" freshconf;\
        fi

# End of Makefile


tz280sub.rel:	all tz280sub.asm
	./$(ASX) -bclopswff tz280sub

tz280.rel:	all tz280.asm
	./$(ASX) -bclopswff tz280sub

# Add "make test"  -- jrc
test1:	all   # -y flag for SDCC stuff
	./$(ASX) -blopswff tz80.rel tz80.asm
	
test:	all tz280sub.rel
	./$(ASX) -bclopswff tz280
	aslink -xu -m tz280.map  tz280 tz280sub.rel
	asxscn tz280.lst | tee errs.lst
	asxscn tz280.rst | tee errs.rst

test2:	all
	./$(ASX) -bclopswff tz280sub
	aslink	-xu -m tz280.map tz280 tz280sub.rel
	asxscn tz280.lst | tee errs.lst
	asxscn tz280.rst | tee errs.rst
	
test3:	all
	./$(ASX) -blopswff tz180.rel tz180.asm
	
scan:	all
#	./$(ASX) -gloaxf tz80
	aslink -xu tz80
	asxscn tz80.lst | tee errs.lst
	asxscn tz80.rst | tee errs.rst


