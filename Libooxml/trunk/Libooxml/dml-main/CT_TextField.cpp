#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextField::CT_TextField() {
	rPr = NULL;
	pPr = NULL;
	t = NULL;
}

CT_TextField::CT_TextField(CT_TextField &b) {
	rPr = b.rPr;
	pPr = b.pPr;
	t = b.t;
	id = b.id;
	type = b.type;
}

CT_TextField::CT_TextField(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rPr = NULL;
	pPr = NULL;
	t = NULL;
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rPr") == 0) {
			rPr.reset(new CT_TextCharacterProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pPr") == 0) {
			pPr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"t") == 0) {
			t.reset(new std::wstring(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextField& CT_TextField::operator=(CT_TextField &b) {
	rPr = b.rPr;
	pPr = b.pPr;
	t = b.t;
	id = b.id;
	type = b.type;
	return *this;
}

CT_TextField::~CT_TextField() {
}

std::wstring CT_TextField::Xml() {
	return L"";
}

