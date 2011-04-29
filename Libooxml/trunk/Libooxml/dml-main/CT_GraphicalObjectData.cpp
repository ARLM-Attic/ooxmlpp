#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GraphicalObjectData::CT_GraphicalObjectData() {
	minOccurs="0" = NULL;
	processContents="strict"/> = NULL;
}

CT_GraphicalObjectData::CT_GraphicalObjectData(CT_GraphicalObjectData &b) {
	minOccurs="0" = b.minOccurs="0";
	processContents="strict"/> = b.processContents="strict"/>;
	uri = b.uri;
}

CT_GraphicalObjectData::CT_GraphicalObjectData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	minOccurs="0" = NULL;
	processContents="strict"/> = NULL;
	if (attributes->getNamedItem(L"uri")) {
		uri = attributes->getNamedItem(L"uri")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"minOccurs="0"") == 0) {
			minOccurs="0".reset(new //<xsd:any(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"processContents="strict"/>") == 0) {
			processContents="strict"/>.reset(new maxOccurs="unbounded"(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GraphicalObjectData& CT_GraphicalObjectData::operator=(CT_GraphicalObjectData &b) {
	minOccurs="0" = b.minOccurs="0";
	processContents="strict"/> = b.processContents="strict"/>;
	uri = b.uri;
	return *this;
}

CT_GraphicalObjectData::~CT_GraphicalObjectData() {
}

std::wstring CT_GraphicalObjectData::Xml() {
	return L"";
}

