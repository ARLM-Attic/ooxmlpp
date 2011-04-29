#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Bevel::CT_Bevel() {
}

CT_Bevel::CT_Bevel(CT_Bevel &b) {
	prst = b.prst;
	w = b.w;
	h = b.h;
}

CT_Bevel::CT_Bevel(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"prst")) {
		prst = attributes->getNamedItem(L"prst")->getNodeValue();
	}
	if (attributes->getNamedItem(L"w")) {
		w = attributes->getNamedItem(L"w")->getNodeValue();
	}
	if (attributes->getNamedItem(L"h")) {
		h = attributes->getNamedItem(L"h")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Bevel& CT_Bevel::operator=(CT_Bevel &b) {
	prst = b.prst;
	w = b.w;
	h = b.h;
	return *this;
}

CT_Bevel::~CT_Bevel() {
}

std::wstring CT_Bevel::Xml() {
	return L"";
}

