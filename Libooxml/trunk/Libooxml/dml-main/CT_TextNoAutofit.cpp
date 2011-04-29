#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextNoAutofit::CT_TextNoAutofit() {
}

CT_TextNoAutofit::CT_TextNoAutofit(CT_TextNoAutofit &b) {
}

CT_TextNoAutofit::CT_TextNoAutofit(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextNoAutofit& CT_TextNoAutofit::operator=(CT_TextNoAutofit &b) {
	return *this;
}

CT_TextNoAutofit::~CT_TextNoAutofit() {
}

std::wstring CT_TextNoAutofit::Xml() {
	return L"";
}

