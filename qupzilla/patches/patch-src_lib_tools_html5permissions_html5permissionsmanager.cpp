$NetBSD$

--- src/lib/tools/html5permissions/html5permissionsmanager.cpp.orig	2013-09-13 16:34:09.230162432 +0000
+++ src/lib/tools/html5permissions/html5permissionsmanager.cpp
@@ -29,7 +29,7 @@ HTML5PermissionsManager::HTML5Permission
     loadSettings();
 }
 
-#if QTWEBKIT_FROM_2_2
+#ifdef QTWEBKIT_FROM_2_2
 void HTML5PermissionsManager::requestPermissions(WebPage* page, QWebFrame* frame, const QWebPage::Feature &feature)
 {
     if (!frame || !page) {
