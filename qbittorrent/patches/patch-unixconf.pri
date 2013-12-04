$NetBSD$

--- unixconf.pri.orig	2013-03-16 19:31:20.047448064 +0000
+++ unixconf.pri
@@ -7,7 +7,9 @@ include($$OUT_PWD/../conf.pri)
 }
 
 QMAKE_CXXFLAGS += -Wformat -Wformat-security
+!haiku {
 QMAKE_LFLAGS_APP += -rdynamic
+}
 CONFIG += link_pkgconfig
 PKGCONFIG += libtorrent-rasterbar
 LIBS += -lssl -lcrypto -lz
