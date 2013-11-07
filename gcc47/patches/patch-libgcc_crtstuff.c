$NetBSD$

--- libgcc/crtstuff.c.orig	2011-12-06 21:35:41.040370176 +0000
+++ libgcc/crtstuff.c
@@ -104,7 +104,9 @@ call_ ## FUNC (void)					\
     && defined(HAVE_LD_EH_FRAME_HDR) \
     && !defined(inhibit_libc) && !defined(CRTSTUFFT_O) \
     && defined(__GLIBC__) && __GLIBC__ >= 2
+#ifndef __HAIKU__
 #include <link.h>
+#endif
 /* uClibc pretends to be glibc 2.2 and DT_CONFIG is defined in its link.h.
    But it doesn't use PT_GNU_EH_FRAME ELF segment currently.  */
 # if !defined(__UCLIBC__) \
