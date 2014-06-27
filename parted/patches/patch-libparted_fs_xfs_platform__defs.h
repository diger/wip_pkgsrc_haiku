$NetBSD$

--- libparted/fs/xfs/platform_defs.h.orig	2012-01-12 16:38:40.000000000 +0000
+++ libparted/fs/xfs/platform_defs.h
@@ -51,7 +51,9 @@
 # define constpp	char * const *
 #endif
 
+#ifndef __HAIKU__
 typedef loff_t		xfs_off_t;
+#endif
 typedef uint64_t	xfs_ino_t;
 typedef uint32_t	xfs_dev_t;
 typedef int64_t         xfs_daddr_t;
