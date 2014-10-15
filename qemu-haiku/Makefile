# $NetBSD$
#

DISTNAME=	qemu-haiku-2.1.0
CATEGORIES=	emulators

MAINTAINER=	digervv@gmail.com
HOMEPAGE=	https://github.com/mmlr
COMMENT=	Haiku port of qemu
LICENSE=	gnu-gpl-v2 AND gnu-lgpl-v2.1 AND mit AND modified-bsd

GIT_REPOSITORIES=		qemu-haiku
GIT_REPO.qemu-haiku=	git://github.com/mmlr/qemu-haiku.git
.include "../../wip/mk/git-package.mk"

CONFLICTS+=             qemu-[0-9]*

USE_LANGUAGES=  		c c++
USE_TOOLS+=             bison gmake makeinfo perl:build pkg-config
USE_NCURSES=            yes                     # requires resize_term()
UNLIMIT_RESOURCES=      datasize
HAS_CONFIGURE=          yes

BUILD_DEPENDS+=         texi2html-[0-9]*:../../textproc/texi2html

WRKSRC=                 ${WRKDIR}/qemu-haiku

.include "options.mk"

CONFIGURE_ARGS+=        --prefix=${PREFIX}
CONFIGURE_ARGS+=        --interp-prefix=${PREFIX}/share/qemu
CONFIGURE_ARGS+=        --sysconfdir=${PKG_SYSCONFDIR}
CONFIGURE_ARGS+=        --python=${PYTHONBIN}
CONFIGURE_ARGS+=        --smbd=${PREFIX}/sbin/smbd
CONFIGURE_ARGS+=        --mandir=${PREFIX}/${PKGMANDIR}
CONFIGURE_ARGS+=        --enable-curses
CONFIGURE_ENV+=         mansuffix=/${PKGMANDIR}

CONF_FILES=             ${EGDIR}/target-x86_64.conf \
                        ${PKG_SYSCONFDIR}/target-x86_64.conf
EGDIR=                  ${PREFIX}/share/examples/qemu
INSTALL_MAKE_FLAGS=     egdir=${EGDIR}
PKG_SYSCONFSUBDIR=      qemu

REPLACE_PERL+=          scripts/texi2pod.pl

PYTHON_VERSIONS_INCOMPATIBLE=   33 34 # not yet ported yet as of 1.7.0

BUILDLINK_PASSTHRU_DIRS+= /usr/lib
BUILDLINK_PASSTHRU_RPATHDIRS+= /usr/lib

INSTALLATION_DIRS=      ${PKGMANDIR}/man1 share/doc/qemu

UE_ARCHS+=              alpha arm armeb cris i386 m68k microblaze mips mipsel
UE_ARCHS+=              or32 ppc ppc64 ppc64abi32 sh4 sh4eb sparc sparc32plus
UE_ARCHS+=              sparc64 x86_64 microblazeel s390x unicore32



.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/ncurses/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../x11/pixman/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
