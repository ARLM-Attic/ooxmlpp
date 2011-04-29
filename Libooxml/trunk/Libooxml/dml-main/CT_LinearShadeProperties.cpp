#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LinearShadeProperties::CT_LinearShadeProperties() {
}

CT_LinearShadeProperties::CT_LinearShadeProperties(CT_LinearShadeProperties &b) {
	scaled = b.scaled;
	ang = b.ang;
}

CT_LinearShadeProperties::CT_LinearShadeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"scaled")) {
		scaled = attributes->getNamedItem(L"scaled")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ang")) {
		ang = attributes->getNamedItem(L"ang")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_LinearShadeProperties& CT_LinearShadeProperties::operator=(CT_LinearShadeProperties &b) {
	scaled = b.scaled;
	ang = b.ang;
	return *this;
}

CT_LinearShadeProperties::~CT_LinearShadeProperties() {
}

std::wstring CT_LinearShadeProperties::Xml() {
	return L"";
}

