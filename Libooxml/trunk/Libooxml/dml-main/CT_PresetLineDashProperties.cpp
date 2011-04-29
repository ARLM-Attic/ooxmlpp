#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PresetLineDashProperties::CT_PresetLineDashProperties() {
}

CT_PresetLineDashProperties::CT_PresetLineDashProperties(CT_PresetLineDashProperties &b) {
	val = b.val;
}

CT_PresetLineDashProperties::CT_PresetLineDashProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_PresetLineDashProperties& CT_PresetLineDashProperties::operator=(CT_PresetLineDashProperties &b) {
	val = b.val;
	return *this;
}

CT_PresetLineDashProperties::~CT_PresetLineDashProperties() {
}

std::wstring CT_PresetLineDashProperties::Xml() {
	return L"";
}

