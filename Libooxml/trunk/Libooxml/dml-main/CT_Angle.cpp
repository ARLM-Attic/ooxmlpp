#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Angle::CT_Angle() {
}

CT_Angle::CT_Angle(CT_Angle &b) {
	val = b.val;
}

CT_Angle::CT_Angle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Angle& CT_Angle::operator=(CT_Angle &b) {
	val = b.val;
	return *this;
}

CT_Angle::~CT_Angle() {
}

std::wstring CT_Angle::Xml() {
	return L"";
}

