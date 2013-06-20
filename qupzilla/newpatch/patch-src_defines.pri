$NetBSD$

--- src/defines.pri.orig	2013-05-10 10:10:45.024903680 +0000
+++ src/defines.pri
@@ -45,7 +45,7 @@ win32-msvc* {
 }
 else {
     isEqual(QT_VERSION, 4.8.0)|greaterThan(QT_VERSION, 4.8.0) {
-        DEFINES *= USE_QTWEBKIT_2_2
+#        DEFINES *= USE_QTWEBKIT_2_2
     }
 
     isEqual(QT_MAJOR_VERSION, 5) {
@@ -74,6 +74,28 @@ equals(d_use_webgl, "true") { DEFINES *=
 win32-msvc* {
     equals(d_w7api, "true") { DEFINES *= W7API }
 }
+
+haiku {
+    DEFINES *= NO_X11
+    DEFINES *= DISABLE_DBUS
+    DEFINES *= QUPZILLA_DEBUG_BUILD
+    d_prefix = $$(QUPZILLA_PREFIX)
+    binary_folder = "$$d_prefix"bin
+    library_folder = "$$d_prefix"lib
+    data_folder = $$(QUPZILLA_PREFIX)share/qupzilla
+    launcher_folder = $$(QUPZILLA_PREFIX)share/qupzilla/applications
+    icon_folder = $$(QUPZILLA_PREFIX)share/qupzilla/pixmaps
+    hicolor_folder = $$(QUPZILLA_PREFIX)share/qupzilla/icons/hicolor
+    
+    !equals(d_use_lib_path, ""):library_folder = $$d_use_lib_path
+
+    DEFINES *= USE_LIBPATH=\\\"""$$library_folder/"\\\""
+    DEFINES *= USE_DATADIR=\\\"""$$data_folder/"\\\""
+
+    # Git revision
+    rev = $$system(cd ../ && sh $$PWD/../scripts/getrevision.sh)
+    !equals(rev, ""): DEFINES *= GIT_REVISION=\\\"""$$rev"\\\""
+}
 equals(d_kde, "true") { DEFINES *= KDE }
 equals(d_nox11, "true") { DEFINES *= NO_X11 }
 equals(d_portable, "true") { DEFINES *= PORTABLE_BUILD }
@@ -81,7 +103,7 @@ equals(d_nonblock_dialogs, "true") { DEF
 equals(d_use_qtwebkit_2_2, "true") { DEFINES *= USE_QTWEBKIT_2_2 }
 equals(d_disable_dbus, "true") { DEFINES *= DISABLE_DBUS }
 
-!mac:unix {
+!haiku:!mac:unix {
     x86libpath = /usr/lib/i386-linux-gnu
     x64libpath = /usr/lib/x86_64-linux-gnu
     system_lib_path = /usr/lib
