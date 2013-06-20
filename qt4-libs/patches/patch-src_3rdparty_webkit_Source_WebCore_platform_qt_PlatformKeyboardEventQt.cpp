$NetBSD$

--- src/3rdparty/webkit/Source/WebCore/platform/qt/PlatformKeyboardEventQt.cpp.orig	2012-11-23 10:09:58.051642368 +0000
+++ src/3rdparty/webkit/Source/WebCore/platform/qt/PlatformKeyboardEventQt.cpp
@@ -133,7 +133,7 @@ String keyIdentifierForQtKeyCode(int key
     case Qt::Key_Backtab:
         return "U+0009";
     default:
-        return String::format("U+%04X", toupper(keyCode));
+        return String::format("U+%04X", toupper((unsigned char)keyCode));
     }
 }
 
