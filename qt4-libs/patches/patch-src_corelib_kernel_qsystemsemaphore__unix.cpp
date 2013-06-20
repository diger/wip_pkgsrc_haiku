$NetBSD$

--- src/corelib/kernel/qsystemsemaphore_unix.cpp.orig	2012-11-23 10:09:55.001310720 +0000
+++ src/corelib/kernel/qsystemsemaphore_unix.cpp
@@ -55,6 +55,9 @@
 #endif
 #include <fcntl.h>
 #include <errno.h>
+#if !defined(Q_OS_HAIKU)
+#include <sys/shm.h>
+#endif
 
 #include "private/qcore_unix_p.h"
 
