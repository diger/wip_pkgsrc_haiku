$NetBSD$

--- texmaker.cpp.orig	2013-04-30 04:27:50.348651520 +0000
+++ texmaker.cpp
@@ -97,7 +97,7 @@
 
 
 
-#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC)
+#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC) && !defined(Q_OS_HAIKU)
 #include "x11fontdialog.h"
 #endif
 
@@ -4091,7 +4091,7 @@ quick_asy_command=config->value("Tools/Q
 lp_options=config->value("Tools/LP","").toString();
 if (modern_style) qApp->setStyle(new ManhattanStyle(baseName));
 #endif
-#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC)
+#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC) && !defined(Q_OS_HAIKU)
 keyToggleFocus=config->value("Shortcuts/togglefocus","Ctrl+Space").toString();
 int desktop_env=1; // 1 : no kde ; 2: kde ; 3 : kde4 ; 
 QStringList styles = QStyleFactory::keys();
@@ -4396,7 +4396,7 @@ QList<int>::Iterator it;
 
 config.setValue( "GUI/Style",modern_style);
 config.setValue( "GUI/New Version",true);
-#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC)
+#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC) && !defined(Q_OS_HAIKU)
 config.setValue( "X11/Style",x11style);
 config.setValue("X11/Font Family",x11fontfamily);
 config.setValue( "X11/Font Size",x11fontsize);
@@ -9281,7 +9281,7 @@ else EditorView->setCurrentIndex( cPage 
 
 void Texmaker::SetInterfaceFont()
 {
-#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC)
+#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC) && !defined(Q_OS_HAIKU)
 X11FontDialog *xfdlg = new X11FontDialog(this);
 int ft=xfdlg->ui.comboBoxFont->findText (x11fontfamily , Qt::MatchExactly);
 xfdlg->ui.comboBoxFont->setCurrentIndex(ft);
@@ -10786,4 +10786,4 @@ if (singlemode && currentEditorView())  
 	    UpdateBibliography();
 	    }
 	}
-}
\ No newline at end of file
+}
