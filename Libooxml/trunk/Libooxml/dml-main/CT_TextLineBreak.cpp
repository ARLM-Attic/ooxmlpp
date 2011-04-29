#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextLineBreak::CT_TextLineBreak() {
	rPr = NULL;
}

CT_TextLineBreak::CT_TextLineBreak(CT_TextLineBreak &b) {
	rPr = b.rPr;
}

CT_TextLineBreak::CT_TextLineBreak(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rPr") == 0) {
			rPr.reset(new CT_TextCharacterProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextLineBreak& CT_TextLineBreak::operator=(CT_TextLineBreak &b) {
	rPr = b.rPr;
	return *this;
}

CT_TextLineBreak::~CT_TextLineBreak() {
}

std::wstring CT_TextLineBreak::Xml() {
	return L"";
}

