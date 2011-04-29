#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_StretchInfoProperties::CT_StretchInfoProperties() {
	fillRect = NULL;
}

CT_StretchInfoProperties::CT_StretchInfoProperties(CT_StretchInfoProperties &b) {
	fillRect = b.fillRect;
}

CT_StretchInfoProperties::CT_StretchInfoProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fillRect = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillRect") == 0) {
			fillRect.reset(new CT_RelativeRect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_StretchInfoProperties& CT_StretchInfoProperties::operator=(CT_StretchInfoProperties &b) {
	fillRect = b.fillRect;
	return *this;
}

CT_StretchInfoProperties::~CT_StretchInfoProperties() {
}

std::wstring CT_StretchInfoProperties::Xml() {
	return L"";
}

