$NetBSD$

--- processwrapper.cc.orig	2010-12-03 21:12:46.052428800 +0000
+++ processwrapper.cc
@@ -94,6 +94,10 @@ unsigned int ProcessWrapper::findProcess
 
 #else
 
+#ifdef Q_OS_HAIKU
+#include <unistd.h>
+#endif
+
 unsigned int ProcessWrapper::currentProcessId()
 {
     return getpid();
