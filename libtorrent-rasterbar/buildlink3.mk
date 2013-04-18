# $NetBSD$

BUILDLINK_TREE+=	libtorrent-rasterbar

.if !defined(LIBTORRENT_RASTERBAR_BUILDLINK3_MK)
LIBTORRENT_RASTERBAR_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libtorrent-rasterbar+=	libtorrent-rasterbar>=0.16.4
BUILDLINK_PKGSRCDIR.libtorrent-rasterbar?=	../../wip/libtorrent-rasterbar

.endif	# LIBTORRENT_RASTERBAR_BUILDLINK3_MK

BUILDLINK_TREE+=	-libtorrent-rasterbar
