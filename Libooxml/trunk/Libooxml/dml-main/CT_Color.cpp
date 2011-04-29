#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Color::CT_Color() {
	colorChoice = NULL;
}

CT_Color::CT_Color(CT_Color &b) {
	colorChoice = b.colorChoice;
}

CT_Color::CT_Color(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Color& CT_Color::operator=(CT_Color &b) {
	colorChoice = b.colorChoice;
	return *this;
}

CT_Color::~CT_Color() {
}

std::wstring CT_Color::Xml() {
	return L"";
}

