$NetBSD$

--- src/plugins/clientinfo/clientinfo.cpp.orig	2013-12-03 16:38:50.000000000 +0000
+++ src/plugins/clientinfo/clientinfo.cpp
@@ -13,6 +13,7 @@
 #include <Path.h>
 #include <AppFileInfo.h>
 #include <FindDirectory.h>
+extern "C" const char* __get_haiku_revision();
 #endif
 
 #define SHC_SOFTWARE_VERSION            "/iq[@type='get']/query[@xmlns='" NS_JABBER_VERSION "']"
@@ -527,20 +528,13 @@ QString ClientInfo::osVersion() const
 			}
 		}
 
-		utsname uname_info;
-		if (uname(&uname_info) == 0) 
-		{
-			osver = uname_info.sysname;
-			long revision = 0;
-			if (sscanf(uname_info.version, "r%10ld", &revision) == 1)
-			{
-				char version[16];
-				snprintf(version, sizeof(version), "%ld", revision);
+		const char* haikuRevision = __get_haiku_revision();
+		if (haikuRevision != NULL) {
+				osver = "Haiku";
 				osver += " ( " + strVersion + " Rev. ";
-				osver += version;
+				osver += haikuRevision;
 				osver += ")";
 			}
-		}
 #else
 		osver = "Unknown";
 #endif
