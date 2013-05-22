$NetBSD$

--- src/src.pro.orig	2010-11-27 21:14:12.049283072 +0000
+++ src/src.pro
@@ -108,10 +108,6 @@ unix: {
 	incfiles.files = $$PUBLIC_HEADERS
 	incfiles.files += $$QCA_INC/qca.h $$QCA_INC/QtCrypto
 	!lib_bundle:INSTALLS += incfiles
-
-	manfiles.path = $$DATADIR/man/man1
-	manfiles.files = $$QCA_BASE/man/qcatool2.1
-	INSTALLS += manfiles
 }
 
 !debug_and_release|build_pass {
