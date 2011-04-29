#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PathShadeProperties::CT_PathShadeProperties() {
	fillToRect = NULL;
}

CT_PathShadeProperties::CT_PathShadeProperties(CT_PathShadeProperties &b) {
	fillToRect = b.fillToRect;
	path = b.path;
}

CT_PathShadeProperties::CT_PathShadeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fillToRect = NULL;
	if (attributes->getNamedItem(L"path")) {
		path = attributes->getNamedItem(L"path")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillToRect") == 0) {
			fillToRect.reset(new CT_RelativeRect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_PathShadeProperties& CT_PathShadeProperties::operator=(CT_PathShadeProperties &b) {
	fillToRect = b.fillToRect;
	path = b.path;
	return *this;
}

CT_PathShadeProperties::~CT_PathShadeProperties() {
}

std::wstring CT_PathShadeProperties::Xml() {
	return L"";
}

