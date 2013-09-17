$NetBSD$

--- src/lib/plugins/plugins.cpp.orig	2013-09-01 11:17:48.025690112 +0000
+++ src/lib/plugins/plugins.cpp
@@ -165,7 +165,7 @@ void Plugins::loadAvailablePlugins()
 
     QStringList dirs;
     dirs << mApp->DATADIR + "plugins/"
-#if defined(QZ_WS_X11) && !defined(NO_SYSTEM_DATAPATH)
+#if defined(QZ_WS_X11) && !defined(NO_SYSTEM_DATAPATH) || defined(Q_WS_HAIKU)
 #ifdef USE_LIBPATH
          << USE_LIBPATH "qupzilla/"
 #else
