# $NetBSD$

PKGNAME=	webkit-haiku-1.2.0
DISTNAME=	haikuwebkit_x86-1.2.0-Source
CATEGORIES=	wip
MASTER_SITES=	http://pulkomandy.tk/drop/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	INSERT_YOUR_MAIL_ADDRESS_HERE
HOMEPAGE=	http://pulkomandy.tk/drop/
COMMENT=	TODO: Short description of the package
#LICENSE=	# TODO: (see mk/license.mk)

USE_CMAKE=	yes
USE_TOOLS=	pkg-config gmake perl ruby
USE_LANGUAGES=	c c++

REPLACE_PERL= Tools/Scripts/build-webkit

BUILD_DEPENDS=  ruby200-base>=2.0.0:../../lang/ruby200-base

CMAKE_ARGS= -DCMAKE_INSTALL_PREFIX=${DESTDIR}

do-configure:
# empty

do-build:
	cd ${WRKSRC}/Tools/Scripts && ./build-webkit --haiku --no-webkit2 \
	--cmakearg=-DCMAKE_INSTALL_PREFIX=${DESTDIR}
	
do-install:
	cd ${WRKSRC}/WebKitBuild/Release && make install

post-install:
	 mv -f ${DESTDIR}/develop/headers ${DESTDIR}${PREFIX}/include && \
	 mv -f ${DESTDIR}/lib ${DESTDIR}${PREFIX}/
	 
.include "../../devel/gperf/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/jpeg/buildlink3.mk"
.include "../../textproc/libxslt/buildlink3.mk"
.include "../../archivers/bzip2/buildlink3.mk"
.include "../../textproc/icu/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
