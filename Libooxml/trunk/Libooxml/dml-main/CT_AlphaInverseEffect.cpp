#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaInverseEffect::CT_AlphaInverseEffect() {
	colorChoice = NULL;
}

CT_AlphaInverseEffect::CT_AlphaInverseEffect(CT_AlphaInverseEffect &b) {
	colorChoice = b.colorChoice;
}

CT_AlphaInverseEffect::CT_AlphaInverseEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_AlphaInverseEffect& CT_AlphaInverseEffect::operator=(CT_AlphaInverseEffect &b) {
	colorChoice = b.colorChoice;
	return *this;
}

CT_AlphaInverseEffect::~CT_AlphaInverseEffect() {
}

std::wstring CT_AlphaInverseEffect::Xml() {
	return L"";
}

