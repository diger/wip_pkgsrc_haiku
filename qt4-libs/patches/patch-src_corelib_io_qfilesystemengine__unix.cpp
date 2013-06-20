$NetBSD$

--- src/corelib/io/qfilesystemengine_unix.cpp.orig	2012-11-23 10:09:55.050069504 +0000
+++ src/corelib/io/qfilesystemengine_unix.cpp
@@ -616,6 +616,9 @@ bool QFileSystemEngine::setPermissions(c
 QString QFileSystemEngine::homePath()
 {
     QString home = QFile::decodeName(qgetenv("HOME"));
+#ifdef Q_OS_HAIKU
+	home += QLatin1String("/config/settings/Qt");
+#endif    
     if (home.isNull())
         home = rootPath();
     return QDir::cleanPath(home);
