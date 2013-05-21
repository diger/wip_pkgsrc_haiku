$NetBSD$

--- src/modeminit.c.orig	2010-09-20 09:31:43.000000000 +0000
+++ src/modeminit.c
@@ -40,6 +40,12 @@ Either version 2 of the License, or (at 
 // HG
 #include <sys/socket.h>
 #include <netinet/in.h>
+#include <sys/select.h>
+#endif
+
+#ifdef __HAIKU__
+#include <sys/select.h>
+#include <resolv.h>
 #include <netdb.h>
 #endif
 
