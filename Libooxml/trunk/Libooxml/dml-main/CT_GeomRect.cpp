#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GeomRect::CT_GeomRect(ST_AdjCoordinate &_l,	ST_AdjCoordinate &_t,	ST_AdjCoordinate &_r,	ST_AdjCoordinate &_b) {
	l = _l;
	t = _t;
	r = _r;
	b = _b;
}

CT_GeomRect::CT_GeomRect(CT_GeomRect &b) {
	l = b.l;
	t = b.t;
	r = b.r;
	b = b.b;
}

CT_GeomRect::CT_GeomRect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"l")) {
		l = attributes->getNamedItem(L"l")->getNodeValue();
	}
	if (attributes->getNamedItem(L"t")) {
		t = attributes->getNamedItem(L"t")->getNodeValue();
	}
	if (attributes->getNamedItem(L"r")) {
		r = attributes->getNamedItem(L"r")->getNodeValue();
	}
	if (attributes->getNamedItem(L"b")) {
		b = attributes->getNamedItem(L"b")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GeomRect& CT_GeomRect::operator=(CT_GeomRect &b) {
	l = b.l;
	t = b.t;
	r = b.r;
	b = b.b;
	return *this;
}

CT_GeomRect::~CT_GeomRect() {
}

std::wstring CT_GeomRect::Xml() {
	return L"";
}

