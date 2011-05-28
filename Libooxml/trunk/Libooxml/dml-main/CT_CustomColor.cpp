#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_CustomColor::CT_CustomColor(std::shared_ptr<EG_ColorChoice> &_colorChoice,std::wstring _name) {
	colorChoice = _colorChoice;
	name = _name;
}

CT_CustomColor::CT_CustomColor(CT_CustomColor &b) {
	colorChoice = b.colorChoice;
	name = b.name;
}

CT_CustomColor::CT_CustomColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_CustomColor& CT_CustomColor::operator=(CT_CustomColor &b) {
	colorChoice = b.colorChoice;
	name = b.name;
	return *this;
}

CT_CustomColor::~CT_CustomColor() {
}

std::wstring CT_CustomColor::Xml() {
	return L"";
}

