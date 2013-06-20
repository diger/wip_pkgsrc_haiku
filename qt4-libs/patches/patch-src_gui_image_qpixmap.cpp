$NetBSD$

--- src/gui/image/qpixmap.cpp.orig	2012-11-23 10:09:53.055574528 +0000
+++ src/gui/image/qpixmap.cpp
@@ -71,6 +71,10 @@
 # include "private/qpixmap_mac_p.h"
 #endif
 
+#ifdef Q_WS_HAIKU
+# include "private/qpixmap_haiku_p.h"
+#endif
+
 #ifdef Q_WS_QPA
 # include "qplatformintegration_qpa.h"
 #endif
@@ -1987,6 +1991,8 @@ int QPixmap::defaultDepth()
     return 32; // XXX
 #elif defined(Q_WS_MAC)
     return 32;
+#elif defined(Q_WS_HAIKU)
+    return 32;
 #elif defined(Q_OS_SYMBIAN)
     return S60->screenDepth;
 #elif defined(Q_WS_QPA)
