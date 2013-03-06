# $NetBSD$
#

DISTNAME=	eiskaltdcpp-2.2.7.tar
PKGNAME=	eiskaltdcpp-2.2.7
CATEGORIES=	net
MASTER_SITES=	http://eiskaltdc.googlecode.com/files/
EXTRACT_SUFX=	.xz

MAINTAINER=	INSERT_YOUR_MAIL_ADDRESS_HERE
HOMEPAGE=	http://code.google.com/p/eiskaltdc/
COMMENT=	TODO: Short description of the package
#LICENSE=	# TODO: (see mk/license.mk)

PKG_DESTDIR_SUPPORT=	user-destdir

WRKSRC=		${WRKDIR}/eiskaltdcpp-2.2.7
USE_PKGLOCALEDIR=   yes
USE_TOOLS+=	msgmerge msgfmt pkg-config
USE_CMAKE=	yes
USE_LANGUAGES=	c c++

CONFIGURE_DIRS=         build
CMAKE_ARG_PATH= ..

.include "options.mk"

CMAKE_ARGS+=	-DWITH_SOUNDS=ON
#CMAKE_ARGS+=	-DUSE_MINIUPNP=ON
#CMAKE_ARGS+=	-DLOCAL_MINIUPNP=ON
CMAKE_ARGS+=	-DCMAKE_CXX_FLAGS="-DTIMER_OLD_BOOST"
#CMAKE_ARGS+=	-DLOCAL_BOOST=ON
CMAKE_ARGS+=	
-DCMAKE_EXE_LINKER_FLAGS="-Wl,-rpath,${BUILDLINK_PREFIX.boost-libs:Q}/lib -lboost_system"
CMAKE_ARGS+=    -DLOCALE_DIR=${PKGLOCALEDIR}/locale
CMAKE_ARGS+=	-DSHARE_DIR=share/${PKGNAME}
CMAKE_ARGS+=    -DLINK=STATIC

INSTALLATION_DIRS=      ${PKGMANDIR}

pre-configure:
	${MKDIR} ${WRKDIR}/eiskaltdcpp-2.2.7/build

post-install:
	mv -f ${DESTDIR}${PREFIX}/share/${PKGNAME}/man/man1 \
	${DESTDIR}${PREFIX}/${PKGMANDIR}/

BUILDLINK_API_DEPENDS.qt4-libs+=        qt4-libs>=4.4.0
.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
