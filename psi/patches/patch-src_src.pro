$NetBSD$

Remove unneeded DESTDIR statement, it broke the install target.

--- src/src.pro.orig	2012-10-04 00:53:03.013369344 +0000
+++ src/src.pro
@@ -6,7 +6,6 @@
 TEMPLATE = app
 TARGET   = psi
 CONFIG  += qt thread x11
-DESTDIR  = $$PWD/..
 
 #CONFIG += use_crash
 CONFIG += pep
