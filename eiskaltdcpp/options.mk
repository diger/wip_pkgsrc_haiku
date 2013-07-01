# $NetBSD: options.mk,v 1.45 2012/06/11 13:41:12 wiz Exp $
# Options supported by both eiskaltdc or eiskaltdc-daemon.

PKG_OPTIONS_VAR=        PKG_OPTIONS.eiskaltdc
PKG_SUPPORTED_OPTIONS=	qtdbus lua debug daemon aspell idn xdg
PKG_SUGGESTED_OPTIONS+=	aspell idn xdg

.include "../../mk/bsd.options.mk"

.if empty(PKG_OPTIONS:Mxdg)
-DFORCE_XDG=OFF
.endif


.if !empty(PKG_OPTIONS:Mqtdbus)
.  include "../../x11/qt4-qdbus/buildlink3.mk"
.else
CMAKE_ARGS+= -DDBUS_NOTIFY=OFF
.endif

.if empty(PKG_OPTIONS:Midn)
CMAKE_ARGS+= -DUSE_IDNA=OFF
.else
.include "../../devel/libidn/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mlua)
CMAKE_ARGS+= -DLUA_SCRIPT=ON
CMAKE_ARGS+= -DWITH_LUASCRIPTS=ON
.include "../../lang/lua/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mdebug)
CMAKE_ARGS+= -DCMAKE_BUILD_TYPE=RelWithDebInfo
.endif

.if !empty(PKG_OPTIONS:Maspell)
CMAKE_ARGS+= -DUSE_ASPELL=ON
.include "../../textproc/aspell/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mdaemon)
CMAKE_ARGS+= -DNO_UI_DAEMON=ON
PKG_SUPPORTED_OPTIONS+=	json xmlrpc
.endif

.if !empty(PKG_OPTIONS:Mxmlrpc)
CMAKE_ARGS+= -DXMLRPC_DAEMON=ON
CMAKE_ARGS+= -DUSE_CLI_XMLRPC=ON
.include "../../textproc/xmlrpc-c/buildlink3.mk"
.endif

.if !empty(PKG_OPTIONS:Mjson)
CMAKE_ARGS+= -DJSONRPC_DAEMON=ON
CMAKE_ARGS+= -DUSE_CLI_JSONRPC=ON
.include "../../textproc/json-c/buildlink3.mk"
.endif
