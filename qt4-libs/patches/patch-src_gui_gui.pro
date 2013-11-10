$NetBSD$

--- src/gui/gui.pro.orig	2013-06-07 05:16:59.049807360 +0000
+++ src/gui/gui.pro
@@ -5,7 +5,7 @@ DEFINES   += QT_BUILD_GUI_LIB QT_NO_USIN
 win32-msvc*|win32-icc:QMAKE_LFLAGS += /BASE:0x65000000
 irix-cc*:QMAKE_CXXFLAGS += -no_prelink -ptused
 
-!win32:!embedded:!qpa:!mac:!symbian:CONFIG      += x11
+!win32:!embedded:!qpa:!mac:!symbian:!haiku:CONFIG      += x11
 
 unix|win32-g++*:QMAKE_PKGCONFIG_REQUIRES = QtCore
 
@@ -22,6 +22,7 @@ symbian {
     include(kernel/symbian.pri)
     include(s60framework/s60framework.pri)
 }
+haiku:include(kernel/haiku.pri)
 
 #modules
 include(animation/animation.pri)
@@ -68,7 +69,7 @@ neon:if(*-g++*|*-qcc*) {
     neon_compiler.commands = $$QMAKE_CXX -c
     neon_compiler.commands += $(CXXFLAGS) -mfpu=neon $(INCPATH) ${QMAKE_FILE_IN} -o ${QMAKE_FILE_OUT}
     neon_compiler.dependency_type = TYPE_C
-    neon_compiler.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_BASE}$${first(QMAKE_EXT_OBJ)}
+    neon_compiler.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_BASE}.lo
     neon_compiler.input = NEON_SOURCES
     neon_compiler.variable_out = OBJECTS
     neon_compiler.name = compiling[neon] ${QMAKE_FILE_IN}
