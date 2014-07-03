# $NetBSD$


DISTVERSION=	0.9.9
PKGNAME=	libvncserver-${DISTVERSION}
DISTNAME=	LibVNCServer-${DISTVERSION}
CATEGORIES=	net
MASTER_SITES=	https://github.com/LibVNC/libvncserver/archive/

MAINTAINER=	INSERT_YOUR_MAIL_ADDRESS_HERE
HOMEPAGE=	https://github.com/LibVNC/libvncserver/archive/
COMMENT=	TODO: Short description of the package
LICENSE=	gnu-gpl-v2

WRKSRC=		${WRKDIR}/libvncserver-LibVNCServer-${DISTVERSION}

USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config gmake autoconf automake msgfmt aclocal
USE_LANGUAGES=	c c++
GNU_CONFIGURE=	YES


PKGCONFIG_OVERRIDE+=	libvncclient.pc.in
PKGCONFIG_OVERRIDE+=	libvncserver.pc.in

pre-configure:
	cd ${WRKSRC} && autoreconf -vif


.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/jpeg/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../security/libgcrypt/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
