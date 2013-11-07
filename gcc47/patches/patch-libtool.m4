$NetBSD$

--- libtool.m4.orig	2012-08-06 14:34:27.058720256 +0000
+++ libtool.m4
@@ -1709,7 +1709,7 @@ else
   lt_cv_dlopen_libs=
 
   case $host_os in
-  beos*)
+  beos* | haiku* )
     lt_cv_dlopen="load_add_on"
     lt_cv_dlopen_libs=
     lt_cv_dlopen_self=yes
@@ -2171,7 +2171,7 @@ amigaos*)
   esac
   ;;
 
-beos*)
+beos* | haiku*)
   library_names_spec='${libname}${shared_ext}'
   dynamic_linker="$host_os ld.so"
   shlibpath_var=LIBRARY_PATH
@@ -2329,7 +2329,7 @@ haiku*)
   soname_spec='${libname}${release}${shared_ext}$major'
   shlibpath_var=LIBRARY_PATH
   shlibpath_overrides_runpath=yes
-  sys_lib_dlsearch_path_spec='/boot/home/config/lib /boot/common/lib /boot/beos/system/lib'
+  sys_lib_dlsearch_path_spec='/boot/home/config/lib /boot/system/lib'
   hardcode_into_libs=yes
   ;;
 
@@ -2978,7 +2978,7 @@ aix[[4-9]]*)
   lt_cv_deplibs_check_method=pass_all
   ;;
 
-beos*)
+beos* | haiku*)
   lt_cv_deplibs_check_method=pass_all
   ;;
 
@@ -3589,8 +3589,7 @@ m4_if([$1], [CXX], [
         ;;
       esac
       ;;
-
-    beos* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
+    beos* | haiku* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
       # PIC is the default for these OSes.
       ;;
     mingw* | cygwin* | os2* | pw32* | cegcc*)
@@ -3901,7 +3900,7 @@ m4_if([$1], [CXX], [
       esac
       ;;
 
-    beos* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
+    beos* | haiku* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
       # PIC is the default for these OSes.
       ;;
 
@@ -4415,8 +4414,8 @@ _LT_EOF
       ;;
 
     haiku*)
-      _LT_TAGVAR(archive_cmds, $1)='$CC -shared $libobjs $deplibs $compiler_flags ${wl}-soname $wl$soname -o $lib'
-      _LT_TAGVAR(link_all_deplibs, $1)=yes
+      _LT_TAGVAR(allow_undefined_flag, $1)=unsupported
+      _LT_TAGVAR(archive_cmds, $1)='$CC -nostart $libobjs $deplibs $compiler_flags ${wl}-soname $wl$soname -o $lib'
       ;;
 
     interix[[3-9]]*)
@@ -5771,8 +5770,8 @@ if test "$_lt_caught_CXX_error" != yes; 
         ;;
 
       haiku*)
-        _LT_TAGVAR(archive_cmds, $1)='$CC -shared $libobjs $deplibs $compiler_flags ${wl}-soname $wl$soname -o $lib'
-        _LT_TAGVAR(link_all_deplibs, $1)=yes
+        _LT_TAGVAR(allow_undefined_flag, $1)=unsupported
+        _LT_TAGVAR(archive_cmds, $1)='$CC -nostart $libobjs $deplibs $compiler_flags ${wl}-soname $wl$soname -o $lib'
         ;;
 
       hpux9*)
