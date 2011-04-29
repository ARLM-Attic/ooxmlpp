#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LineJoinMiterProperties::CT_LineJoinMiterProperties() {
}

CT_LineJoinMiterProperties::CT_LineJoinMiterProperties(CT_LineJoinMiterProperties &b) {
	lim = b.lim;
}

CT_LineJoinMiterProperties::CT_LineJoinMiterProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"lim")) {
		lim = attributes->getNamedItem(L"lim")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_LineJoinMiterProperties& CT_LineJoinMiterProperties::operator=(CT_LineJoinMiterProperties &b) {
	lim = b.lim;
	return *this;
}

CT_LineJoinMiterProperties::~CT_LineJoinMiterProperties() {
}

std::wstring CT_LineJoinMiterProperties::Xml() {
	return L"";
}

