# $NetBSD$
# XXX	BUILDLINK_DEPMETHOD.webkit-haiku?=	build

BUILDLINK_TREE+=	webkit-haiku

.if !defined(WEBKIT_HAIKU_BUILDLINK3_MK)
WEBKIT_HAIKU_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.webkit-haiku+=	webkit-haiku>=1.2.0
BUILDLINK_PKGSRCDIR.webkit-haiku?=	../../wip/webkit-haiku

.include "../../databases/sqlite3/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/jpeg/buildlink3.mk"
.include "../../textproc/libxslt/buildlink3.mk"
.include "../../archivers/bzip2/buildlink3.mk"
.include "../../textproc/icu/buildlink3.mk"
.endif	# WEBKIT_HAIKU_BUILDLINK3_MK

BUILDLINK_TREE+=	-webkit-haiku
