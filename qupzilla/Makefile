# $NetBSD$
#

DISTNAME=	QupZilla-1.4.4
PKGNAME= qupzilla-1.4.4
CATEGORIES=	wip
MASTER_SITES=	http://qupzilla.com/uploads/

MAINTAINER=	admin%freenet59.ru
HOMEPAGE=	http://www.qupzilla.com/
COMMENT=	QupZilla is a web browser using Qt and Webkit
#LICENSE=	# TODO: (see mk/license.mk)

PKG_DESTDIR_SUPPORT=	user-destdir

USE_LANGUAGES=	c++ g++
USE_LIBTOOL=    NO
DEPENDS+=     qt4-sqlite3>=4.6.2:../../wip/qt4-sqlite3

MAKE_ENV += QUPZILLA_PREFIX=${PREFIX}/
INSTALL_ENV+=		INSTALL_ROOT=${DESTDIR}

do-configure:
	(cd ${WRKSRC} && ${QTDIR$}/bin/qmake)

SUBST_CLASSES+=			fix-target
SUBST_STAGE.fix-target=		post-build
SUBST_MESSAGE.fix-target=	Replace QMAKE_TARGET with TARGET
SUBST_FILES.fix-target+=	src/main/Makefile
SUBST_SED.fix-target+=		-e 's/(QMAKE_TARGET)/{TARGET}/'	
	
post-install:
	rc -o ${WRKDIR}/QupZilla.rsrc ${FILESDIR}/QupZilla.rdef
	xres -o ${DESTDIR}${PREFIX}/bin/qupzilla ${WRKDIR}/QupZilla.rsrc

.include "../../wip/qt4-libs/buildlink3.mk"
.include "../../wip/qt4-tools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
