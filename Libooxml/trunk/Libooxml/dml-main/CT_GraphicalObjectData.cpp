#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GraphicalObjectData::CT_GraphicalObjectData(std::wstring &_uri) {
	uri = _uri;
}

CT_GraphicalObjectData::CT_GraphicalObjectData(CT_GraphicalObjectData &b) {
	uri = b.uri;
}

CT_GraphicalObjectData::CT_GraphicalObjectData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"uri")) {
		uri = attributes->getNamedItem(L"uri")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GraphicalObjectData& CT_GraphicalObjectData::operator=(CT_GraphicalObjectData &b) {
	uri = b.uri;
	return *this;
}

CT_GraphicalObjectData::~CT_GraphicalObjectData() {
}

std::wstring CT_GraphicalObjectData::Xml() {
	return L"";
}

