$NetBSD$

--- src/gui/text/qfont.cpp.orig	2012-11-23 10:09:53.038797312 +0000
+++ src/gui/text/qfont.cpp
@@ -232,6 +232,8 @@ Q_GUI_EXPORT int qt_defaultDpiY()
     }
 #elif defined(Q_OS_SYMBIAN)
     dpi = S60->defaultDpiY;
+#elif defined(Q_WS_HAIKU)
+	dpi = 72;    
 #endif // Q_WS_X11
 
     return dpi;