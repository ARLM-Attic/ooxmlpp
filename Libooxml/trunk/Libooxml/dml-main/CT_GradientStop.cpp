#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GradientStop::CT_GradientStop() {
	colorChoice = NULL;
}

CT_GradientStop::CT_GradientStop(CT_GradientStop &b) {
	colorChoice = b.colorChoice;
	pos = b.pos;
}

CT_GradientStop::CT_GradientStop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"pos")) {
		pos = attributes->getNamedItem(L"pos")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GradientStop& CT_GradientStop::operator=(CT_GradientStop &b) {
	colorChoice = b.colorChoice;
	pos = b.pos;
	return *this;
}

CT_GradientStop::~CT_GradientStop() {
}

std::wstring CT_GradientStop::Xml() {
	return L"";
}

