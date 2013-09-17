$NetBSD$

--- src/plugins.pri.orig	2013-09-01 11:17:48.004456448 +0000
+++ src/plugins.pri
@@ -40,8 +40,8 @@ MOC_DIR = build
 RCC_DIR = build
 UI_DIR = build
 
-!unix|mac: LIBS += -L$$PWD/../bin -lQupZilla
-!mac:unix: LIBS += $$PWD/../bin/libQupZilla.so
+haiku:!unix|mac: LIBS += -L$$PWD/../bin -lQupZilla
+!haiku:!mac:unix: LIBS += $$PWD/../bin/libQupZilla.so
 
 !mac:unix {
     target.path = $$library_folder/qupzilla
