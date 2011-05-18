#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaOutsetEffect::CT_AlphaOutsetEffect() : rad(0) {
}

CT_AlphaOutsetEffect::CT_AlphaOutsetEffect(CT_AlphaOutsetEffect &b) {
	rad = b.rad;
}

CT_AlphaOutsetEffect::CT_AlphaOutsetEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"rad")) {
		rad = attributes->getNamedItem(L"rad")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AlphaOutsetEffect& CT_AlphaOutsetEffect::operator=(CT_AlphaOutsetEffect &b) {
	rad = b.rad;
	return *this;
}

CT_AlphaOutsetEffect::~CT_AlphaOutsetEffect() {
}

std::wstring CT_AlphaOutsetEffect::Xml() {
	return L"";
}

