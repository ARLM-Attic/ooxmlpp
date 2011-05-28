#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FlatText::CT_FlatText() {
	z = 0;
}

CT_FlatText::CT_FlatText(CT_FlatText &b) {
	z = b.z;
}

CT_FlatText::CT_FlatText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"z")) {
		z = attributes->getNamedItem(L"z")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_FlatText& CT_FlatText::operator=(CT_FlatText &b) {
	z = b.z;
	return *this;
}

CT_FlatText::~CT_FlatText() {
}

std::wstring CT_FlatText::Xml() {
	return L"";
}

