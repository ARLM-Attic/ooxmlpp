#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextNormalAutofit::CT_TextNormalAutofit() {
}

CT_TextNormalAutofit::CT_TextNormalAutofit(CT_TextNormalAutofit &b) {
	fontScale = b.fontScale;
	lnSpcReduction = b.lnSpcReduction;
}

CT_TextNormalAutofit::CT_TextNormalAutofit(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"fontScale")) {
		fontScale = attributes->getNamedItem(L"fontScale")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lnSpcReduction")) {
		lnSpcReduction = attributes->getNamedItem(L"lnSpcReduction")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextNormalAutofit& CT_TextNormalAutofit::operator=(CT_TextNormalAutofit &b) {
	fontScale = b.fontScale;
	lnSpcReduction = b.lnSpcReduction;
	return *this;
}

CT_TextNormalAutofit::~CT_TextNormalAutofit() {
}

std::wstring CT_TextNormalAutofit::Xml() {
	return L"";
}

