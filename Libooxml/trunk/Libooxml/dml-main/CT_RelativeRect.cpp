#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_RelativeRect::CT_RelativeRect() {
	l = L"0%";
	t = L"0%";
	r = L"0%";
	b = L"0%";
}

CT_RelativeRect::CT_RelativeRect(CT_RelativeRect &b) {
	l = b.l;
	t = b.t;
	r = b.r;
	this->b = b.b;
}

CT_RelativeRect::CT_RelativeRect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	l = L"0%";
	t = L"0%";
	r = L"0%";
	b = L"0%";
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

CT_RelativeRect& CT_RelativeRect::operator=(CT_RelativeRect &b) {
	l = b.l;
	t = b.t;
	r = b.r;
	b = b.b;
	return *this;
}

CT_RelativeRect::~CT_RelativeRect() {
}

std::wstring CT_RelativeRect::Xml() {
	return L"";
}

