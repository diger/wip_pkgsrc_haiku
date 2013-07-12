$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_wtf_MathExtras.h,v 1.1 2012/02/16 20:42:46 hans Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/MathExtras.h.orig	2013-06-07 05:16:54.008126464 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/MathExtras.h
@@ -252,7 +252,7 @@ inline int clampToInteger(unsigned value
     return static_cast<int>(std::min(value, static_cast<unsigned>(std::numeric_limits<int>::max())));
 }
 
-#if !COMPILER(MSVC) && !(COMPILER(RVCT) && PLATFORM(BREWMP)) && !OS(SOLARIS) && !OS(SYMBIAN)
+#if !COMPILER(MSVC) && !(COMPILER(RVCT) && PLATFORM(BREWMP)) && !(OS(SOLARIS) && COMPILER(GCC) && (GCC_VERSION < 40600)) && !OS(SYMBIAN) && !OS(HAIKU)
 using std::isfinite;
 using std::isinf;
 using std::isnan;
