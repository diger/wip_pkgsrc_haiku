# $NetBSD: Makefile,v 1.35 2013/07/05 13:29:29 ryoon Exp $
#

DISTNAME=	kdiff3-0.9.97
PKGREVISION=	5
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=kdiff3/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://kdiff3.sourceforge.net/
COMMENT=	File and directory diff and merge tool (KDE4)
LICENSE=	gnu-gpl-v2

#BUILD_DEPENDS+=	automoc4>=0.9.83:../../devel/automoc4

USE_PKGLOCALEDIR=	yes
USE_LANGUAGES=		c c++

USE_TOOLS+=	msgfmt

INSTALLATION_DIRS= bin

do-configure:
	#none
SUBST_CLASSES+=			fix-target
SUBST_STAGE.fix-target=		pre-configure
SUBST_MESSAGE.fix-target=	Replace QMAKE_TARGET with TARGET
SUBST_FILES.fix-target+=	src-QT4/kdiff3.pro
SUBST_SED.fix-target+=		-e 's|/usr/local|${DESTDIR}${PREFIX}|g'	

do-build:
	cd ${WRKSRC} && QTDIR=/boot/common/qt4 ./configure qt4
do-install:
	cd ${WRKSRC}/releaseQt && make install

post-install:
	rc -o ${WRKDIR}/kdiff3.rsrc ${FILESDIR}/kdiff3.rdef
	xres -o ${DESTDIR}${PREFIX}/bin/kdiff3 ${WRKDIR}/kdiff3.rsrc

.include "../../wip/qt4-libs/buildlink3.mk"
.include "../../wip/qt4-tools/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../archivers/bzip2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
