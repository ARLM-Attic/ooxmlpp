#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorReplaceEffect::CT_ColorReplaceEffect(std::shared_ptr<EG_ColorChoice> _colorChoice) {
	colorChoice = NULL;
}

CT_ColorReplaceEffect::CT_ColorReplaceEffect(CT_ColorReplaceEffect &b) {
	colorChoice = b.colorChoice;
}

CT_ColorReplaceEffect::CT_ColorReplaceEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorReplaceEffect& CT_ColorReplaceEffect::operator=(CT_ColorReplaceEffect &b) {
	colorChoice = b.colorChoice;
	return *this;
}

CT_ColorReplaceEffect::~CT_ColorReplaceEffect() {
}

std::wstring CT_ColorReplaceEffect::Xml() {
	return L"";
}

