#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Percentage::CT_Percentage(ST_Percentage &_val) {
	val = _val;
}

CT_Percentage::CT_Percentage(CT_Percentage &b) {
	val = b.val;
}

CT_Percentage::CT_Percentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Percentage& CT_Percentage::operator=(CT_Percentage &b) {
	val = b.val;
	return *this;
}

CT_Percentage::~CT_Percentage() {
}

std::wstring CT_Percentage::Xml() {
	return L"";
}

