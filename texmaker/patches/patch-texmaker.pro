$NetBSD$

--- texmaker.pro.orig	2013-04-30 04:22:58.395575296 +0000
+++ texmaker.pro
@@ -283,7 +283,7 @@ isEmpty( ICONDIR ) {
 }
 ## QT5
 #INCLUDEPATH +=$${QTDIR}/include/
-INCLUDEPATH  += /usr/include/poppler/qt4
+INCLUDEPATH  += /test/work/wip/texmaker/work/.buildlink/include/poppler/qt4
 LIBS         += -L/usr/lib -lpoppler-qt4
 LIBS         += -L/usr/lib -lz
 DEFINES += PREFIX=\\\"$${PREFIX}\\\"
