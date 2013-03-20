$NetBSD$

--- src/libproxychains.c.orig	2013-03-20 06:00:58.445382656 +0000
+++ src/libproxychains.c
@@ -428,7 +428,7 @@ int getnameinfo(const struct sockaddr *s
 #if (defined __linux__) || (defined __APPLE__)
 struct hostent *gethostbyaddr(const void *addr, socklen_t len, int type) {
 #else
-struct hostent *gethostbyaddr(const char *addr, socklen_t len, int type) {
+struct hostent *gethostbyaddr_n(const char *addr, socklen_t len, int type) {
 #endif
 	static char buf[16];
 	static char ipv4[4];
