$NetBSD$

--- src/gui/image/qnativeimage_p.h.orig	2012-11-23 10:09:53.063700992 +0000
+++ src/gui/image/qnativeimage_p.h
@@ -64,6 +64,9 @@
 #elif defined(Q_WS_MAC)
 #include <private/qt_mac_p.h>
 
+#elif defined(Q_WS_HAIKU)
+#include <Bitmap.h>
+
 #endif
 
 QT_BEGIN_NAMESPACE
@@ -95,6 +98,10 @@ public:
 
 #elif defined(Q_WS_MAC)
     CGContextRef cg;
+	
+#elif defined(Q_WS_HAIKU)
+	BBitmap* bitmap;
+
 #endif
 
 private:
