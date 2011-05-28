#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Boolean::CT_Boolean() : val(0) {
}

CT_Boolean::CT_Boolean(CT_Boolean &b) {
	val = b.val;
}

CT_Boolean::CT_Boolean(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Boolean& CT_Boolean::operator=(CT_Boolean &b) {
	val = b.val;
	return *this;
}

CT_Boolean::~CT_Boolean() {
}

std::wstring CT_Boolean::Xml() {
	return L"";
}

