$NetBSD$

--- src/gui/kernel/qapplication.cpp.orig	2012-11-23 10:09:53.006553600 +0000
+++ src/gui/kernel/qapplication.cpp
@@ -4860,7 +4860,7 @@ bool QApplicationPrivate::notify_helper(
   Stubbed session management support
  *****************************************************************************/
 #ifndef QT_NO_SESSIONMANAGER
-#if defined(Q_WS_WIN) || defined(Q_WS_MAC) || defined(Q_WS_QWS)
+#if defined(Q_WS_WIN) || defined(Q_WS_MAC) || defined(Q_WS_QWS) || defined(Q_WS_HAIKU)
 
 #if defined(Q_OS_WINCE)
 HRESULT qt_CoCreateGuid(GUID* guid)
