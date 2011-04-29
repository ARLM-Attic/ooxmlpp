#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GraphicalObject::CT_GraphicalObject() {
	graphicData = NULL;
}

CT_GraphicalObject::CT_GraphicalObject(CT_GraphicalObject &b) {
	graphicData = b.graphicData;
}

CT_GraphicalObject::CT_GraphicalObject(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	graphicData = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"graphicData") == 0) {
			graphicData.reset(new CT_GraphicalObjectData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GraphicalObject& CT_GraphicalObject::operator=(CT_GraphicalObject &b) {
	graphicData = b.graphicData;
	return *this;
}

CT_GraphicalObject::~CT_GraphicalObject() {
}

std::wstring CT_GraphicalObject::Xml() {
	return L"";
}

