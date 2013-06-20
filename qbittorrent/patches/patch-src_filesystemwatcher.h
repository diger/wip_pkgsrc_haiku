$NetBSD$

--- src/filesystemwatcher.h.orig	2013-03-16 19:31:19.049807360 +0000
+++ src/filesystemwatcher.h
@@ -17,9 +17,11 @@
 #include <sys/mount.h>
 #include <string.h>
 #else
+#ifndef Q_WS_HAIKU
 #include <sys/vfs.h>
 #endif
 #endif
+#endif
 
 #include "fs_utils.h"
 #include "misc.h"
@@ -56,7 +58,7 @@ private:
   QHash<QString, int> m_partialTorrents;
   QPointer<QTimer> m_partialTorrentTimer;
 
-#ifndef Q_WS_WIN
+#if !defined Q_WS_WIN && !defined Q_WS_HAIKU
 private:
   static bool isNetworkFileSystem(QString path) {
     QString file = path;
@@ -145,7 +147,7 @@ public:
   }
 
   void addPath(const QString & path) {
-#ifndef Q_WS_WIN
+#if !defined Q_WS_WIN && !defined Q_WS_HAIKU
     QDir dir(path);
     if (!dir.exists())
       return;
@@ -167,7 +169,7 @@ public:
       qDebug("FS Watching is watching %s in normal mode", qPrintable(path));
       QFileSystemWatcher::addPath(path);
       scanLocalFolder(path);
-#ifndef Q_WS_WIN
+#if !defined Q_WS_WIN && !defined Q_WS_HAIKU
     }
 #endif
   }
