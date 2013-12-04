# $NetBSD: Makefile,v 1.13 2008/03/10 00:09:23 tnn Exp $
#

DISTNAME=	jam-haiku-20131115
CATEGORIES=	devel
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	digervv@gmail.com
HOMEPAGE=	http://freetype.sourceforge.net/jam/index.html

COMMENT=	Program construction tool, like make(1)

CONFLICTS=	acunia-jam-[0-9]*

USE_TOOLS+=	yacc gmake

DOCDIR=		share/doc/${PKGBASE}
HTMLDIR=	share/doc/html/${PKGBASE}
WRKSRC=		${WRKDIR}/jam

INSTALLATION_DIRS=	bin ${DOCDIR} ${HTMLDIR}

do-extract:
	${CP} -R ${FILESDIR} ${WRKSRC}

do-install:
	for f in jam mkjambase; do \
		${INSTALL_PROGRAM} ${WRKSRC}/bin.*/$${f} \
			${DESTDIR}${PREFIX}/bin; \
	done

	${INSTALL_DATA_DIR} ${DESTDIR}${PREFIX}/${DOCDIR}
	for f in Porting README RELNOTES; do \
		${INSTALL_DATA} ${WRKSRC}/$${f} \
			${DESTDIR}${PREFIX}/${DOCDIR}; \
	done

	${INSTALL_DATA_DIR} ${DESTDIR}${PREFIX}/${HTMLDIR}
	for f in *.html; do \
		${INSTALL_DATA} ${WRKSRC}/$${f} \
			${DESTDIR}${PREFIX}/${HTMLDIR}; \
	done

.include "../../mk/bsd.pkg.mk"
