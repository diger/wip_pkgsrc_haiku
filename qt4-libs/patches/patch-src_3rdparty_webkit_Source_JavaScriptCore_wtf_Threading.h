$NetBSD$

--- src/3rdparty/webkit/Source/JavaScriptCore/wtf/Threading.h.orig	2013-06-07 05:16:54.004194304 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/wtf/Threading.h
@@ -113,6 +113,8 @@ using WTF::createThread;
 using WTF::currentThread;
 using WTF::detachThread;
 using WTF::waitForThreadCompletion;
+#if !OS(SOLARIS)
 using WTF::yield;
+#endif
 
 #endif // Threading_h
