# $NetBSD: Makefile,v 1.34 2013/02/16 11:21:01 wiz Exp $

DISTNAME=	texmaker-4.0.1
PKGREVISION=	18
CATEGORIES=	editors
MASTER_SITES=	http://www.xm1math.net/texmaker/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.xm1math.net/texmaker/
COMMENT=	LaTeX editor and front end

USE_LANGUAGES=	c++ c
USE_LIBTOOL=	yes

INSTALL_MAKE_FLAGS+=	INSTALL_ROOT=${DESTDIR}

CFLAGS=	-I${BUILDLINK_PREFIX.poppler-qt4}/include/poppler/qt4

do-configure:
	cd ${WRKSRC} && env ${CONFIGURE_ENV} \
	${QTDIR}/bin/qmake -unix PREFIX=${PREFIX} texmaker.pro

.include "../../wip/qt4-libs/buildlink3.mk"
.include "../../wip/qt4-tools/buildlink3.mk"
.include "../../wip/poppler-qt4/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
