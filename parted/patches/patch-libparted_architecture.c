$NetBSD$

--- libparted/architecture.c.orig	2012-01-12 16:38:40.000000000 +0000
+++ libparted/architecture.c
@@ -31,7 +31,7 @@ ped_set_architecture ()
 #ifdef linux
 	extern PedArchitecture ped_linux_arch;
 	const PedArchitecture* arch = &ped_linux_arch;
-#elif defined(__BEOS__)
+#elif defined(__BEOS__) || defined(__HAIKU__)
 	extern PedArchitecture ped_beos_arch;
 	const PedArchitecture* arch = &ped_beos_arch;
 #else
