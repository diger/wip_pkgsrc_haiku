$NetBSD$

--- src/gui/util/util.pri.orig	2012-11-23 10:09:53.056623104 +0000
+++ src/gui/util/util.pri
@@ -59,3 +59,10 @@ symbian {
 
     LIBS += -ldirectorylocalizer
 }
+
+haiku {
+		HEADERS += \
+				util/qsystemtrayicon_haiku.h
+		SOURCES += \
+				util/qsystemtrayicon_haiku.cpp
+    }
