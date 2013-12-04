# $NetBSD$
#

DISTNAME=	vacuum-1.2.3
CATEGORIES=	chat
MASTER_SITES=	http://vacuum-im.googlecode.com/files/

MAINTAINER=	admin@freenet59.ru
HOMEPAGE=	http://www.vacuum-im.org
COMMENT=	Free cross-platform Jabber-client written in Qt4
#LICENSE=	# TODO: (see mk/license.mk)

PKG_DESTDIR_SUPPORT=	user-destdir

USE_CMAKE=	yes
USE_LANGUAGES=	c c++

CONFIGURE_DIRS=		build
CMAKE_ARG_PATH=	..

CMAKE_ARGS+= -DCMAKE_INSTALL_PREFIX=${DESTDIR}

pre-configure:
	${MKDIR} ${WRKSRC}/build
	
post-install:
	rc -o ${WRKDIR}/Vacuum.rsrc ${FILESDIR}/Vacuum.rdef
	xres -o ${DESTDIR}${PREFIX}/bin/vacuum ${WRKDIR}/Vacuum.rsrc
	
.include "../../wip/qt4-libs/buildlink3.mk"
.include "../../wip/qt4-tools/buildlink3.mk"
.include "../../devel/libidn/buildlink3.mk"
.include "../../textproc/hunspell/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
