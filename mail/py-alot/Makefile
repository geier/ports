# $FreeBSD$

PORTNAME=	alot
PORTVERSION=	0.3.6
CATEGORIES=	mail python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	geier@lostpackets.de
COMMENT=	Command line mail client

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}notmuch>=0.13:${PORTSDIR}/mail/py-notmuch \
		${PYTHON_PKGNAMEPREFIX}urwid>=1.1.0:${PORTSDIR}/devel/py-urwid \
		${PYTHON_PKGNAMEPREFIX}urwidtrees>=0.1:${PORTSDIR}/devel/py-urwidtrees \
		${PYTHON_PKGNAMEPREFIX}twistedCore>=10.2.0:${PORTSDIR}/devel/py-twistedCore \
		${PYTHON_PKGNAMEPREFIX}magic>0:${PORTSDIR}/devel/py-magic \
		${PYTHON_PKGNAMEPREFIX}configobj>=4.7.0:${PORTSDIR}/devel/py-configobj \
		${PYTHON_PKGNAMEPREFIX}pyme>=0.2:${PORTSDIR}/security/py-pyme

USE_GITHUB=	yes
GH_ACCOUNT=	pazz

USES=		python:2
USE_PYTHON=	autoplist distutils

PLIST_FILES=	share/zsh/site-functions/_alot

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_SCRIPT} ${WRKSRC}/extra/completion/alot-completion.zsh \
		${STAGEDIR}${PREFIX}/share/zsh/site-functions/_alot

.include <bsd.port.mk>
