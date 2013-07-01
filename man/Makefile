# $NetBSD$
#

DISTNAME=		man-1.6e
CATEGORIES=		sysutils
# the metalab should be added to bsd.sites.mk
MASTER_SITES=		${MASTER_SITE_SUNSITE:=apps/doctools/man/} \
			http://primates.ximian.com/~flucifredi/man/ \
			http://www.people.fas.harvard.edu/~lucifred/man/ \
			ftp://metalab.unc.edu/pub/Linux/apps/doctools/man/

MAINTAINER=		reed@reedmedia.net
HOMEPAGE=		http://primates.ximian.com/~flucifredi/man/
COMMENT=		Man page viewer and utilities

CONFLICTS+=		man-db-[0-9]*

#PKG_DESTDIR_SUPPORT=	yes
PKG_DESTDIR_SUPPORT=  user-destdir

USE_TOOLS+=		groff:run

.include "../../mk/bsd.prefs.mk"

PKGMANDIR?=		man
USE_PKGLOCALEDIR=	yes
HAS_CONFIGURE=		yes
CONFIGURE_ARGS+=	-confdir ${PKG_SYSCONFDIR} +sgid +fhs +lang all
CONFIGURE_ARGS+=	-prefix=${PREFIX:Q}
CONFIGURE_ARGS+=	-mandir=${PREFIX}/${PKGMANDIR}
CONFIGURE_ENV+=		deflocale=${PREFIX}/${PKGLOCALEDIR}/locale/

LDFLAGS.Haiku+=	-lroot -lbe

# Haiku (BeFS) cannot support hard link
.if ${OPSYS} == "Haiku"
SUBST_CLASSES+=		ownerfix
SUBST_STAGE.ownerfix=	pre-build
SUBST_FILES.ownerfix=	src/Makefile
SUBST_SED.ownerfix=	-e 's,o root -g man ,o baron -g root ,g'
.endif

MAN_GROUP?=		man
BUILD_DEFS+=		MAN_GROUP
PKG_GROUPS=		${MAN_GROUP}

INSTALLATION_DIRS=   ${PREFIX}/share/locale ${PREFIX}/share/examples/man
EXAMPLESDIR=		${PREFIX}/share/examples/man/
CONF_FILES=		${EXAMPLESDIR}/man.conf ${PKG_SYSCONFDIR}/man.conf

post-install:
	${INSTALL_DATA_DIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/man.conf ${DESTDIR}${EXAMPLESDIR}

.include "../../mk/bsd.pkg.mk"
