# $FreeBSD$

PORTNAME=	notmuch
PORTVERSION=	0.20.2
PORTREVISION=	1
CATEGORIES=	mail python
MASTER_SITES=	http://notmuchmail.org/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	geier@lostpackets.de
COMMENT=	Python bindings for notmuch

LICENSE=	GPLv3 # or later
LICENSE_FILE=	${WRKSRC}/COPYING-GPL-3

LIB_DEPENDS=	libnotmuch.so:${PORTSDIR}/mail/notmuch

CONFIGURE_WRKSRC=${WRKSRC}/bindings/python/
BUILD_WRKSRC=	${WRKSRC}/bindings/python/
INSTALL_WRKSRC=	${WRKSRC}/bindings/python/

USES=		python
USE_PYTHON=	autoplist distutils

MAKE_ENV+=	PYTHONCMD=${PYTHON_CMD}

.include <bsd.port.mk>
