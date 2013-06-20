$NetBSD$

--- src/3rdparty/clucene/src/CLucene/search/FieldCacheImpl.cpp.orig	2012-11-23 10:10:12.040894464 +0000
+++ src/3rdparty/clucene/src/CLucene/search/FieldCacheImpl.cpp
@@ -414,7 +414,7 @@ FieldCacheImpl::FileEntry::FileEntry (co
 	  _CLDECDELETE(term);
 
       try {
-        Term* term = enumerator->term(false);
+        term = enumerator->term(false);
         if (term == NULL) {
           _CLTHROWA(CL_ERR_Runtime,"no terms in field - cannot determine sort type"); //todo: make rich error: " + field + " 
         }
