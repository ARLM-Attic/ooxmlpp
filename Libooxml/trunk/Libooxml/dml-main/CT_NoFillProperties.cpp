#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NoFillProperties::CT_NoFillProperties() {
}

CT_NoFillProperties::CT_NoFillProperties(CT_NoFillProperties &b) {
}

CT_NoFillProperties::CT_NoFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_NoFillProperties& CT_NoFillProperties::operator=(CT_NoFillProperties &b) {
	return *this;
}

CT_NoFillProperties::~CT_NoFillProperties() {
}

std::wstring CT_NoFillProperties::Xml() {
	return L"";
}

