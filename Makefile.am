ACLOCAL_AMFLAGS = -I m4
EXTRA_DIST = m4/gnulib-cache.m4
AM_CPPFLAGS = -Ilib -Ilib -I.
LDADD = lib/libgnu.a

SUBDIRS = lib

bin_PROGRAMS = slow fast noop unroll
slow_SOURCES = slow.c
fast_SOURCES = fast.c
noop_SOURCES = noop.c
unroll_SOURCES = unroll.c
