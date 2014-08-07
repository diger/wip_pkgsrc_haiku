# $NetBSD$
#

DISTNAME=	rdesktop-haiku-0.5.0
CATEGORIES=	x11

MAINTAINER=	digervv@gmail.com
HOMEPAGE=	https://github.com/threedeyes/rdesktop
COMMENT=	Native RDP client for Haiku based on rdesktop
LICENSE=	gnu-gpl-v2

GIT_REPOSITORIES=	rdesktop
GIT_REPO.rdesktop=	git://github.com/threedeyes/rdesktop.git
.include "../../wip/mk/git-package.mk"

USE_LANGUAGES=	c c++
USE_TOOLS+= gmake
NO_CONFIGURE=	YES

WRKSRC=		${WRKDIR}/rdesktop/haiku

INSTALLATION_DIRS=	bin

do-build:
	cd ${WRKSRC} \
		&&  make -f makefile_gcc4

do-install:
	 ${INSTALL_PROGRAM} ${WRKSRC}/rdesktop    ${DESTDIR}${PREFIX}/bin


.include "../../security/openssl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
