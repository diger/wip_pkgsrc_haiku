# $NetBSD$
#

DISTNAME=		proxychains-4.2.0
CATEGORIES=		net
MASTER_SITES=		http://github.com/downloads/haad/proxychains/
PROXYCHAINS_VERSION=	4.2.0
PKGNAME=		proxychains-${PROXYCHAINS_VERSION}
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		haad@netbsd.org
HOMEPAGE=		http://haad.github.com/proxychains/
COMMENT=		Chain multiple proxies in a transparent way

# pkgsrc is not currently able to fetch distfiles from https web servers
# (see mk/fetch/fetch.mk), so you have to use a browser for now.
FETCH_USING=		wget
FETCH_BEFORE_ARGS=	--no-check-certificate

PKG_DESTDIR_SUPPORT=	user-destdir

WRKSRC=		${WRKDIR}/proxychains

USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		gmake
USE_LIBTOOL=		yes
LIBTOOL_OVERRIDE=	${WRKSRC}/libtool
GNU_CONFIGURE=		yes

post-install:
	${INSTALL_DATA_DIR} $(DESTDIR)${PREFIX}/share/examples/proxychains/
	${INSTALL_DATA} ${WRKSRC}/src/proxychains.conf \
		$(DESTDIR)${PREFIX}/share/examples/proxychains/

.include "../../mk/bsd.pkg.mk"
