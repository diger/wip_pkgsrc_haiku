$NetBSD$

--- src/lib/tools/html5permissions/html5permissionsmanager.h.orig	2013-09-13 16:34:49.418119680 +0000
+++ src/lib/tools/html5permissions/html5permissionsmanager.h
@@ -32,7 +32,7 @@ class QT_QUPZILLA_EXPORT HTML5Permission
 public:
     explicit HTML5PermissionsManager(QObject* parent);
 
-#if QTWEBKIT_FROM_2_2
+#ifdef QTWEBKIT_FROM_2_2
     void requestPermissions(WebPage* page, QWebFrame* frame, const QWebPage::Feature &feature);
     void rememberPermissions(const QString &host, const QWebPage::Feature &feature,
                              const QWebPage::PermissionPolicy &policy);
