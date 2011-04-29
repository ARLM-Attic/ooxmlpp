#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextShapeAutofit::CT_TextShapeAutofit() {
}

CT_TextShapeAutofit::CT_TextShapeAutofit(CT_TextShapeAutofit &b) {
}

CT_TextShapeAutofit::CT_TextShapeAutofit(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextShapeAutofit& CT_TextShapeAutofit::operator=(CT_TextShapeAutofit &b) {
	return *this;
}

CT_TextShapeAutofit::~CT_TextShapeAutofit() {
}

std::wstring CT_TextShapeAutofit::Xml() {
	return L"";
}

