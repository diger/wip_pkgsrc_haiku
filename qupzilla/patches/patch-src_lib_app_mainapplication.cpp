$NetBSD$

--- src/lib/app/mainapplication.cpp.orig	2013-09-01 11:17:48.061341696 +0000
+++ src/lib/app/mainapplication.cpp
@@ -118,7 +118,7 @@ MainApplication::MainApplication(int &ar
     , m_macDockMenu(0)
 #endif
 {
-#if defined(QZ_WS_X11) && !defined(NO_SYSTEM_DATAPATH)
+#if defined(QZ_WS_X11) && !defined(NO_SYSTEM_DATAPATH)  || defined(Q_WS_HAIKU)
     DATADIR = USE_DATADIR;
 #else
     DATADIR = qApp->applicationDirPath() + "/";
