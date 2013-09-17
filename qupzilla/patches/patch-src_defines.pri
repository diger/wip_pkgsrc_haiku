$NetBSD$

--- src/defines.pri.orig	2013-09-01 11:17:48.000524288 +0000
+++ src/defines.pri
@@ -74,6 +74,29 @@ equals(d_use_webgl, "true") { DEFINES *=
 win32-msvc* {
     equals(d_w7api, "true") { DEFINES *= W7API }
 }
+
+haiku {
+    DEFINES *= NO_X11
+    DEFINES *= DISABLE_DBUS
+    DEFINES *= QUPZILLA_DEBUG_BUILD
+    DEFINES *= USE_QTWEBKIT_2_2
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
@@ -81,7 +104,7 @@ equals(d_nonblock_dialogs, "true") { DEF
 equals(d_use_qtwebkit_2_2, "true") { DEFINES *= USE_QTWEBKIT_2_2 }
 equals(d_disable_dbus, "true") { DEFINES *= DISABLE_DBUS }
 
-!mac:unix {
+!haiku:!mac:unix {
     x86libpath = /usr/lib/i386-linux-gnu
     x64libpath = /usr/lib/x86_64-linux-gnu
     system_lib_path = /usr/lib
