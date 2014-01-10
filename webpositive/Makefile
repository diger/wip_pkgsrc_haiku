# $NetBSD: Makefile,v 1.13 2008/03/10 00:09:23 tnn Exp $
#

DISTNAME=	webpositive-20131115
CATEGORIES=	www
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	digervv@gmail.com
HOMEPAGE=	http://freetype.sourceforge.net/jam/index.html

COMMENT=	Haiku native web browser

USE_TOOLS+=	gmake
USE_LANGUAGES=  c++ c

WRKSRC=		${WRKDIR}/webpositive

INSTALLATION_DIRS=	bin

do-extract:
	${CP} -R ${FILESDIR} ${WRKSRC}

do-build:
	cd ${WRKSRC} && make

do-install:
	${CP} -R ${DESTDIR}

.include "../../wip/webkit-haiku/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
