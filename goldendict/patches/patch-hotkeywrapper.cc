$NetBSD$

--- hotkeywrapper.cc.orig	2010-12-03 21:12:46.038797312 +0000
+++ hotkeywrapper.cc
@@ -310,6 +310,26 @@ bool QHotkeyApplication::winEventFilter 
 
 //////////////////////////////////////////////////////////////////////////
 
+#elif defined(Q_WS_HAIKU)
+
+void HotkeyWrapper::init()
+{
+// ?
+}
+
+bool HotkeyWrapper::setGlobalKey( int key, int key2,
+                                  Qt::KeyboardModifiers modifier, int handle )
+{
+//?
+  return true;
+}
+
+void HotkeyWrapper::unregister()
+{
+//?
+}
+
+
 #else
 
 //////////////////////////////////////////////////////////////////////////
