# $NetBSD$

DISTNAME=	parted-3.1
CATEGORIES=	sysutils
MASTER_SITES=	http://ftp.gnu.org/gnu/parted/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	INSERT_YOUR_MAIL_ADDRESS_HERE
HOMEPAGE=	http://ftp.gnu.org/gnu/parted/
COMMENT=	TODO: Short description of the package
#LICENSE=	# TODO: (see mk/license.mk)

GNU_CONFIGURE=		yes
USE_TOOLS+=		pkg-config
USE_PKGLOCALEDIR=	yes

CONFIGURE_ARGS+= --disable-device-mapper

PKGCONFIG_OVERRIDE+=	libparted.pc.in

.include "../../devel/ncurses/buildlink3.mk"
.include "../../devel/readline/buildlink3.mk"
.include "../../devel/libuuid/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
