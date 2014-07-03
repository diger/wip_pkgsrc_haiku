$NetBSD$

--- src/allocator.cpp.orig	2013-09-25 07:29:17.004456448 +0000
+++ src/allocator.cpp
@@ -42,7 +42,7 @@ POSSIBILITY OF SUCH DAMAGE.
 #include <unistd.h> // _SC_PAGESIZE
 #endif
 
-#if TORRENT_USE_MEMALIGN || TORRENT_USE_POSIX_MEMALIGN || defined TORRENT_WINDOWS
+#if TORRENT_USE_MEMALIGN || TORRENT_USE_POSIX_MEMALIGN || defined TORRENT_WINDOWS || defined TORRENT_HAIKU
 #include <malloc.h> // memalign and _aligned_malloc
 #include <stdlib.h> // _aligned_malloc on mingw
 #endif
@@ -86,8 +86,6 @@ namespace libtorrent
 		SYSTEM_INFO si;
 		GetSystemInfo(&si);
 		s = si.dwPageSize;
-#elif defined TORRENT_BEOS
-		s = B_PAGE_SIZE;
 #else
 		s = sysconf(_SC_PAGESIZE);
 #endif
@@ -126,12 +124,6 @@ namespace libtorrent
 		return (char*)memalign(page_size(), bytes);
 #elif defined TORRENT_WINDOWS
 		return (char*)_aligned_malloc(bytes, page_size());
-#elif defined TORRENT_BEOS
-		void* ret = 0;
-		area_id id = create_area("", &ret, B_ANY_ADDRESS
-			, (bytes + page_size() - 1) & (page_size()-1), B_NO_LOCK, B_READ_AREA | B_WRITE_AREA);
-		if (id < B_OK) return 0;
-		return (char*)ret;
 #else
 		return (char*)valloc(bytes);
 #endif
