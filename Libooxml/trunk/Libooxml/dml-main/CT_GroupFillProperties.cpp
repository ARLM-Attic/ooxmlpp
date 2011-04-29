#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GroupFillProperties::CT_GroupFillProperties() {
}

CT_GroupFillProperties::CT_GroupFillProperties(CT_GroupFillProperties &b) {
}

CT_GroupFillProperties::CT_GroupFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GroupFillProperties& CT_GroupFillProperties::operator=(CT_GroupFillProperties &b) {
	return *this;
}

CT_GroupFillProperties::~CT_GroupFillProperties() {
}

std::wstring CT_GroupFillProperties::Xml() {
	return L"";
}

