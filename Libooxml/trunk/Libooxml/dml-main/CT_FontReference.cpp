#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FontReference::CT_FontReference() {
	colorChoice = NULL;
}

CT_FontReference::CT_FontReference(CT_FontReference &b) {
	colorChoice = b.colorChoice;
	idx = b.idx;
}

CT_FontReference::CT_FontReference(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"idx")) {
		idx = attributes->getNamedItem(L"idx")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_FontReference& CT_FontReference::operator=(CT_FontReference &b) {
	colorChoice = b.colorChoice;
	idx = b.idx;
	return *this;
}

CT_FontReference::~CT_FontReference() {
}

std::wstring CT_FontReference::Xml() {
	return L"";
}

