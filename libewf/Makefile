# $NetBSD$

DISTNAME=	libewf-20140608
CATEGORIES=	devel
MASTER_SITES=	https://53efc0a7187d0baa489ee347026b8278fe4020f6.googledrive.com/host/0B3fBvzttpiiSMTdoaVExWWNsRjg/

MAINTAINER=	INSERT_YOUR_MAIL_ADDRESS_HERE
HOMEPAGE=	https://53efc0a7187d0baa489ee347026b8278fe4020f6.googledrive.com/host/0B3fBvzttpiiSMTdoaVExWWNsRjg/
COMMENT=	TODO: Short description of the package
LICENSE=	gnu-lgpl-v3

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config
USE_LANGUAGES=	c c++

PKGCONFIG_OVERRIDE+=	libewf.pc.in


.include "../../devel/zlib/buildlink3.mk"
.include "../../archivers/bzip2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
