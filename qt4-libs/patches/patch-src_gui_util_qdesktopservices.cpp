$NetBSD$

--- src/gui/util/qdesktopservices.cpp.orig	2012-11-23 10:09:53.054001664 +0000
+++ src/gui/util/qdesktopservices.cpp
@@ -57,6 +57,8 @@
 #include "qdesktopservices_mac.cpp"
 #elif defined(Q_OS_SYMBIAN)
 #include "qdesktopservices_s60.cpp"
+#elif defined(Q_WS_HAIKU)
+#include "qdesktopservices_haiku.cpp"
 #endif
 
 #include <qhash.h>
