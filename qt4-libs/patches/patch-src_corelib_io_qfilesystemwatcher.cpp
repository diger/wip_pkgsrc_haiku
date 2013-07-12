$NetBSD$

Use kqueue instead of fam to monitor the file system
--- src/corelib/io/qfilesystemwatcher.cpp.orig	2013-06-07 05:16:52.011272192 +0000
+++ src/corelib/io/qfilesystemwatcher.cpp
@@ -257,7 +257,7 @@ QFileSystemWatcherEngine *QFileSystemWat
     if(!eng)
         eng = QDnotifyFileSystemWatcherEngine::create();
     return eng;
-#elif defined(Q_OS_FREEBSD) || defined(Q_OS_MAC)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_MAC) || defined(Q_OS_NETBSD)
 #  if 0 && defined(Q_OS_MAC) && (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
     if (QSysInfo::MacintoshVersion >= QSysInfo::MV_10_5)
         return QFSEventsFileSystemWatcherEngine::create();
