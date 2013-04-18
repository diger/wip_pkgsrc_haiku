$NetBSD$

--- src/declarative/util/qdeclarativefontloader.cpp.orig	2012-11-23 10:09:53.013631488 +0000
+++ src/declarative/util/qdeclarativefontloader.cpp
@@ -64,7 +64,7 @@ class QDeclarativeFontObject : public QO
 Q_OBJECT
 
 public:
-    QDeclarativeFontObject(int _id);
+    QDeclarativeFontObject(int _id = -1);
 
     void download(const QUrl &url, QNetworkAccessManager *manager);
 
@@ -84,7 +84,7 @@ private:
     Q_DISABLE_COPY(QDeclarativeFontObject)
 };
 
-QDeclarativeFontObject::QDeclarativeFontObject(int _id = -1)
+QDeclarativeFontObject::QDeclarativeFontObject(int _id)
     : QObject(0), id(_id), reply(0), redirectCount(0) {}
 
 
