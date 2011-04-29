#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_DuotoneEffect::CT_DuotoneEffect() {
	colorChoice[0] = NULL;
	colorChoice[1] = NULL;
}

CT_DuotoneEffect::CT_DuotoneEffect(CT_DuotoneEffect &b) {
	colorChoice[0] = b.colorChoice[0];
	colorChoice[1] = b.colorChoice[1];
}

CT_DuotoneEffect::CT_DuotoneEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice[0] = NULL;
	colorChoice[1] = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice[0]") == 0) {
			colorChoice[0].reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice[1]") == 0) {
			colorChoice[1].reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_DuotoneEffect& CT_DuotoneEffect::operator=(CT_DuotoneEffect &b) {
	colorChoice[0] = b.colorChoice[0];
	colorChoice[1] = b.colorChoice[1];
	return *this;
}

CT_DuotoneEffect::~CT_DuotoneEffect() {
}

std::wstring CT_DuotoneEffect::Xml() {
	return L"";
}

