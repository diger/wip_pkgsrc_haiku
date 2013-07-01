$NetBSD$

--- gencat/gencat.c.orig	2006-08-02 18:11:44.000000000 +0000
+++ gencat/gencat.c
@@ -53,6 +53,10 @@ up-to-date.  Many thanks.
 #include <string.h>
 #include <unistd.h>
 #endif
+#ifdef __HAIKU__
+#include <fcntl.h>
+#include <string.h>
+#endif
 #include <sys/file.h>
 #include <sys/stat.h>
 #include "gencat.h"
