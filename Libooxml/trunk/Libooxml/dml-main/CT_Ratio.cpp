#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Ratio::CT_Ratio() {
}

CT_Ratio::CT_Ratio(CT_Ratio &b) {
	n = b.n;
	d = b.d;
}

CT_Ratio::CT_Ratio(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"n")) {
		n = attributes->getNamedItem(L"n")->getNodeValue();
	}
	if (attributes->getNamedItem(L"d")) {
		d = attributes->getNamedItem(L"d")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Ratio& CT_Ratio::operator=(CT_Ratio &b) {
	n = b.n;
	d = b.d;
	return *this;
}

CT_Ratio::~CT_Ratio() {
}

std::wstring CT_Ratio::Xml() {
	return L"";
}

