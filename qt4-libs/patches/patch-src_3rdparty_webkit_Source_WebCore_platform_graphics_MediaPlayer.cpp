$NetBSD$

--- src/3rdparty/webkit/Source/WebCore/platform/graphics/MediaPlayer.cpp.orig	2013-06-07 05:16:56.042205184 +0000
+++ src/3rdparty/webkit/Source/WebCore/platform/graphics/MediaPlayer.cpp
@@ -192,9 +192,6 @@ static Vector<MediaPlayerFactory*>& inst
             MediaPlayerPrivateAVFoundationObjC::registerMediaEngine(addMediaEngine);
 #endif
 
-#if !PLATFORM(GTK) && !PLATFORM(EFL) && !(PLATFORM(QT) && USE(GSTREAMER))
-        PlatformMediaEngineClassName::registerMediaEngine(addMediaEngine);
-#endif
     }
 
     return installedEngines;
