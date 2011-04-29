#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaModulateFixedEffect::CT_AlphaModulateFixedEffect() {
}

CT_AlphaModulateFixedEffect::CT_AlphaModulateFixedEffect(CT_AlphaModulateFixedEffect &b) {
	amt = b.amt;
}

CT_AlphaModulateFixedEffect::CT_AlphaModulateFixedEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"amt")) {
		amt = attributes->getNamedItem(L"amt")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AlphaModulateFixedEffect& CT_AlphaModulateFixedEffect::operator=(CT_AlphaModulateFixedEffect &b) {
	amt = b.amt;
	return *this;
}

CT_AlphaModulateFixedEffect::~CT_AlphaModulateFixedEffect() {
}

std::wstring CT_AlphaModulateFixedEffect::Xml() {
	return L"";
}

