$NetBSD$

--- src/gui/text/qfontdatabase.h.orig	2012-11-23 10:09:53.030146560 +0000
+++ src/gui/text/qfontdatabase.h
@@ -175,6 +175,10 @@ private:
     QFontDatabasePrivate *d;
 };
 
+#ifdef Q_OS_HAIKU
+	QList<QFontDatabase::WritingSystem> qt_determine_writing_systems_from_truetype_bits(quint32 unicodeRange[4], quint32 codePageRange[2]);
+#endif
+
 QT_END_NAMESPACE
 
 QT_END_HEADER
