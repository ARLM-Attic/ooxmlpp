#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GlowEffect::CT_GlowEffect(std::shared_ptr<EG_ColorChoice> &_colorChoice) {
	colorChoice = _colorChoice;
}

CT_GlowEffect::CT_GlowEffect(CT_GlowEffect &b) {
	colorChoice = b.colorChoice;
}

CT_GlowEffect::CT_GlowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GlowEffect& CT_GlowEffect::operator=(CT_GlowEffect &b) {
	colorChoice = b.colorChoice;
	return *this;
}

CT_GlowEffect::~CT_GlowEffect() {
}

std::wstring CT_GlowEffect::Xml() {
	return L"";
}

