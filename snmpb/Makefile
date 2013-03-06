# $NetBSD$
#

DISTNAME=       snmpb-trunk
PKGNAME=		snmpb-1.0
CATEGORIES=     net
MASTER_SITES=   ftp://freenet59.ru/distfiles/

MAINTAINER=	admin@freenet59.ru
HOMEPAGE=	http://sourceforge.net/projects/snmpb
COMMENT=	Graphical SNMP MIB browser written in QT.
#LICENSE=	# TODO: (see mk/license.mk)
PKG_DESTDIR_SUPPORT=	user-destdir

USE_TOOLS+=	gmake
USE_LANGUAGES=	c c++
USE_LIBTOOL=	NO
WRKSRC=         ${WRKDIR}/trunk
CHECK_PORTABILITY_SKIP+=libsmi/*
MAKE_FLAGS +=   INSTALL_PREFIX=${PREFIX}
MAKE_FLAGS +=   SHARE=share/snmpb
PTHREAD_AUTO_VARS=	yes

CONFIG_GUESS_OVERRIDE+= libsmi/config.guess
CONFIG_SUB_OVERRIDE+=   libsmi/config.sub


.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../x11/qt4-libs/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
