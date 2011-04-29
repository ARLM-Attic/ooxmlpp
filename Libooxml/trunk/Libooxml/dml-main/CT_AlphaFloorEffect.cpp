#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaFloorEffect::CT_AlphaFloorEffect() {
}

CT_AlphaFloorEffect::CT_AlphaFloorEffect(CT_AlphaFloorEffect &b) {
}

CT_AlphaFloorEffect::CT_AlphaFloorEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AlphaFloorEffect& CT_AlphaFloorEffect::operator=(CT_AlphaFloorEffect &b) {
	return *this;
}

CT_AlphaFloorEffect::~CT_AlphaFloorEffect() {
}

std::wstring CT_AlphaFloorEffect::Xml() {
	return L"";
}

