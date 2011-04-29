#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LineEndProperties::CT_LineEndProperties() {
}

CT_LineEndProperties::CT_LineEndProperties(CT_LineEndProperties &b) {
	len = b.len;
	type = b.type;
	w = b.w;
}

CT_LineEndProperties::CT_LineEndProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"len")) {
		len = attributes->getNamedItem(L"len")->getNodeValue();
	}
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"w")) {
		w = attributes->getNamedItem(L"w")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_LineEndProperties& CT_LineEndProperties::operator=(CT_LineEndProperties &b) {
	len = b.len;
	type = b.type;
	w = b.w;
	return *this;
}

CT_LineEndProperties::~CT_LineEndProperties() {
}

std::wstring CT_LineEndProperties::Xml() {
	return L"";
}

