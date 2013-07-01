# $NetBSD$
#

VERSION=	2.2.8
DISTNAME=	eiskaltdcpp-${VERSION}.tar
PKGNAME=	eiskaltdcpp-${VERSION}
CATEGORIES=	net
MASTER_SITES=	http://eiskaltdc.googlecode.com/files/
EXTRACT_SUFX=	.xz

MAINTAINER=	INSERT_YOUR_MAIL_ADDRESS_HERE
HOMEPAGE=	http://code.google.com/p/eiskaltdc/
COMMENT=	TODO: Short description of the package
#LICENSE=	# TODO: (see mk/license.mk)

PKG_DESTDIR_SUPPORT=	user-destdir

WRKSRC=		${WRKDIR}/eiskaltdcpp-${VERSION}
USE_PKGLOCALEDIR=   yes
USE_TOOLS+=	msgmerge msgfmt pkg-config
USE_CMAKE=	yes
USE_LANGUAGES=	c c++

CONFIGURE_DIRS=         build
CMAKE_ARG_PATH= ..

.include "options.mk"

CMAKE_ARGS+=	-DWITH_SOUNDS=ON

pre-configure:
	${MKDIR} ${WRKDIR}/eiskaltdcpp-${VERSION}/build

.include "../../wip/qt4-libs/buildlink3.mk"
.include "../../wip/qt4-tools/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
