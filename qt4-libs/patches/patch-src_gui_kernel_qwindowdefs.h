$NetBSD$

--- src/gui/kernel/qwindowdefs.h.orig	2012-11-23 10:09:53.043778048 +0000
+++ src/gui/kernel/qwindowdefs.h
@@ -142,6 +142,10 @@ class CCoeControl;
 typedef CCoeControl * WId;
 #endif // Q_OS_SYMBIAN
 
+#ifdef Q_WS_HAIKU
+#include <QtGui/qwindowdefs_haiku.h>
+#endif
+
 QT_BEGIN_HEADER
 QT_BEGIN_NAMESPACE
 
