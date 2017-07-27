PORTNAME=	musikcube
PORTVERSION=	0.21.1
CATEGORIES=	audio
DISTNAME=	${PORTVERSION}

MAINTAINER=	geier@lotpackets.de
COMMENT=	XXX

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
MASTER_SITES=	https://github.com/clangen/musikcube/archive/
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USES=		cmake ncurses compiler:c++14-lang pkgconfig
USE_GCC=	6+

CPPFLAGS+=	-I${NCURSESINC}
LDFLAGS+=	-L${NCURSESLIB} -lncursesw


.include <bsd.port.mk>
