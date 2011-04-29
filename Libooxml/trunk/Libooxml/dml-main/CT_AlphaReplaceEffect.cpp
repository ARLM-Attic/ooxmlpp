#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaReplaceEffect::CT_AlphaReplaceEffect() {
}

CT_AlphaReplaceEffect::CT_AlphaReplaceEffect(CT_AlphaReplaceEffect &b) {
	a = b.a;
}

CT_AlphaReplaceEffect::CT_AlphaReplaceEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"a")) {
		a = attributes->getNamedItem(L"a")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AlphaReplaceEffect& CT_AlphaReplaceEffect::operator=(CT_AlphaReplaceEffect &b) {
	a = b.a;
	return *this;
}

CT_AlphaReplaceEffect::~CT_AlphaReplaceEffect() {
}

std::wstring CT_AlphaReplaceEffect::Xml() {
	return L"";
}

