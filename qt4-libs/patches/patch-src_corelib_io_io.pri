$NetBSD: patch-src_corelib_io_io.pri,v 1.1 2012/09/12 17:02:50 jaapb Exp $

Use kqueue instead of fam to monitor the file system

--- src/corelib/io/io.pri.orig	2012-11-23 10:09:55.046661632 +0000
+++ src/corelib/io/io.pri
@@ -108,7 +108,7 @@ win32 {
         }
 
         !nacl {
-            freebsd-*|macx-*|darwin-*|openbsd-*:{
+            freebsd-*|macx-*|darwin-*|openbsd-*|netbsd-*:{
                 SOURCES += io/qfilesystemwatcher_kqueue.cpp
                 HEADERS += io/qfilesystemwatcher_kqueue_p.h
             }
