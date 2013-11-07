$NetBSD$

--- gcc/defaults.h.orig	2012-08-14 13:59:04.063176704 +0000
+++ gcc/defaults.h
@@ -397,9 +397,13 @@ see the files COPYING3 and COPYING.RUNTI
    at program start-up time.  */
 #if defined (TARGET_ASM_NAMED_SECTION) && SUPPORTS_WEAK
 #ifndef JCR_SECTION_NAME
+/* Hack to remove _Jv crap on BeOS. i know it should be made somehow through
+	config files, but i don't know how (in which file ;) */
+#if !defined(__BEOS__) && !defined(__HAIKU__)
 #define JCR_SECTION_NAME ".jcr"
 #endif
 #endif
+#endif
 
 /* This decision to use a .jcr section can be overridden by defining
    USE_JCR_SECTION to 0 in target file.  This is necessary if target
