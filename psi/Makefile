# $NetBSD: Makefile,v 1.75 2013/02/06 23:21:49 jperkin Exp $

DISTNAME=	psi-0.15
PKGREVISION=	3
CATEGORIES=	chat
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=psi/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	schnoebe@NetBSD.org
HOMEPAGE=	http://psi-im.org/
COMMENT=	Psi XMPP/Jabber Client
LICENSE=	gnu-gpl-v2

DEPENDS+=	qca2-ossl>=2.0.0beta3:../../wip/qca2-ossl

DIST_SUBDIR=	${DISTNAME}
DISTFILES=	${DEFAULT_DISTFILES} ${LANG_FILES}

USE_TOOLS+=	gmake unzip pkg-config
USE_LANGUAGES=	c c++
USE_LIBTOOL=	yes
HAS_CONFIGURE=	yes

CONFIG_SHELL=	${SH}

CONFIGURE_ARGS+=	--prefix=${PREFIX:Q}
CONFIGURE_ARGS+=	--qtdir=${QTDIR:Q}
CONFIGURE_ARGS+=	--with-zlib-inc=${BUILDLINK_PREFIX.zlib}/include
CONFIGURE_ARGS+=	--with-zlib-lib=${BUILDLINK_PREFIX.zlib}/lib
CONFIGURE_ARGS+=	--with-qca-lib=${BUILDLINK_PREFIX.qca2}/lib
CONFIGURE_ARGS+=	--with-qca-inc=${BUILDLINK_PREFIX.qca2}/include

LDFLAGS+= -liconv

#
# a group of scripts that aren't to be installed, and aren't
# used by the pkgsrc system.  But they all have the non-standard
# "==" in them. (silly linux developers thinking [ bash = sh ].
#
CHECK_PORTABILITY_SKIP=	    admin/build/devconfig.sh \
			    admin/build/build_package.sh \
			    admin/build/prep_dist.sh


INSTALLATION_DIRS=	bin share/psi share/doc/psi
INSTALL_DIRS=		src
INSTALL_TARGET=		install_target install_sharedfiles
INSTALL_MAKE_FLAGS=	INSTALL_ROOT=${DESTDIR}

.include "options.mk"

#
#   LANG_FILES are the translations we're going to install
#
# LANG_FILES= psi_be.qm psi_cs.qm psi_de.qm psi_eo.qm psi_es.qm \
# 	    psi_es_ES.qm psi_fr.qm psi_it.qm psi_ja.qm psi_mk.qm \
# 	    psi_pl.qm psi_pt_BR.qm psi_ru.qm psi_sl.qm psi_sv.qm \
# 	    psi_uk.qm psi_ur_PK.qm psi_vi.qm psi_zh_CN.qm psi_zh_TW.qm

.for f in ${LANG_FILES}
    SITES.${f}=http://psi-im.org/download/lang/
.endfor

post-install:
	strip -s ${DESTDIR}${PREFIX}/bin/psi
	rc -o ${WRKDIR}/Psi.rsrc ${FILESDIR}/Psi.rdef
	xres -o ${DESTDIR}${PREFIX}/bin/psi ${WRKDIR}/Psi.rsrc
	# remove some files that shouldn't be there,
	# install some files where they should be installed
	${INSTALL_DATA} ${WRKSRC}/README ${DESTDIR}${PREFIX}/share/doc/psi
	${RM} ${DESTDIR}${PREFIX}/share/psi/README
	${INSTALL_DATA} ${WRKSRC}/COPYING ${DESTDIR}${PREFIX}/share/doc/psi
	${RM} ${DESTDIR}${PREFIX}/share/psi/COPYING
	# install the translations
.for f in ${LANG_FILES}
	${INSTALL_DATA} ${WRKDIR}/${f} ${DESTDIR}${PREFIX}/share/psi
.endfor

.include "../../devel/libidn/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../wip/qca2/buildlink3.mk"
BUILDLINK_API_DEPENDS.qt4-libs+=	qt4-libs>=4.7.0
.include "../../wip/qt4-libs/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
