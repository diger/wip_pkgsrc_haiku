$NetBSD$

--- goldendict.pro.orig	2010-12-03 21:12:46.036962304 +0000
+++ goldendict.pro
@@ -22,7 +22,9 @@ INCLUDEPATH += .
 QT += webkit
 QT += xml
 QT += network
-QT += phonon
+!haiku {
+	QT += phonon
+	}
 CONFIG += exceptions \
     rtti \
     stl
@@ -46,39 +48,47 @@ win32 { 
     INCLUDEPATH += winlibs/include
     LIBS += -Lwinlibs/lib
 }
+
+haiku { 
+    LIBS += -liconv
+}
+
 unix {
 
   # This is to keep symbols for backtraces
-  QMAKE_CXXFLAGS += -rdynamic
-  QMAKE_LFLAGS += -rdynamic
-
+    !haiku {
+    	QMAKE_CXXFLAGS += -rdynamic
+    	QMAKE_LFLAGS += -rdynamic
+    }
     CONFIG += link_pkgconfig
     PKGCONFIG += vorbisfile \
     	vorbis \
 	ogg \
 	hunspell
-    LIBS += -lX11 \
-        -lXtst
+    !haiku {
+    	LIBS += -lX11 \
+        	-lXtst
+    }    	
     PREFIX = $$(PREFIX)
     isEmpty( PREFIX ):PREFIX = /usr/local
-    DEFINES += PROGRAM_DATA_DIR=\\\"$$PREFIX/share/apps/goldendict/\\\"
+    DEFINES += PROGRAM_DATA_DIR=\\\"$$PREFIX/share/goldendict/\\\"
     target.path = $$PREFIX/bin/
-    locale.path = $$PREFIX/share/apps/goldendict/locale/
+    locale.path = $$PREFIX/share/goldendict/locale/
     locale.files = locale/*.qm
     INSTALLS += target \
         locale
-    icons.path = $$PREFIX/share/pixmaps
+    icons.path = $$PREFIX/share/goldendict/pixmaps
     icons.files = redist/icons/*.*
     INSTALLS += icons
-    icons2.path = $$PREFIX/share/app-install/icons
+    icons2.path = $$PREFIX/share/goldendict/icons
     icons2.files = redist/icons/*.*
     INSTALLS += icons2
-    desktops.path = $$PREFIX/share/applications
+    desktops.path = $$PREFIX/share/goldendict
     desktops.files = redist/*.desktop
     INSTALLS += desktops
     desktops2.path = $$PREFIX/share/app-install/desktop
     desktops2.files = redist/*.desktop
-    INSTALLS += desktops2
+#    INSTALLS += desktops2
 }
 DEFINES += PROGRAM_VERSION=\\\"$$VERSION\\\"
 
