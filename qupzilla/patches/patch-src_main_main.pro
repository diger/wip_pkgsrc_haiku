$NetBSD$

--- src/main/main.pro.orig	2013-09-01 11:17:48.004718592 +0000
+++ src/main/main.pro
@@ -9,8 +9,8 @@ mac: TARGET = QupZilla
 
 TEMPLATE = app
 
-!unix|mac: LIBS += -L../../bin -lQupZilla
-!mac:unix: LIBS += ../../bin/libQupZilla.so
+!unix|mac|haiku: LIBS += -L../../bin -lQupZilla
+!mac:unix:!haiku: LIBS += ../../bin/libQupZilla.so
 
 include(../defines.pri)
 include(../install.pri)
