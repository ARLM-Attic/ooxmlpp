#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CommonViewProperties::CT_CommonViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	origin = NULL;
	scale = NULL;
	if (attributes->getNamedItem(L"varScale")) {
		varScale = attributes->getNamedItem(L"varScale")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"origin") == 0) {
			origin = new drawingml::main::CT_Point2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"scale") == 0) {
			scale = new drawingml::main::CT_Scale2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_CommonViewProperties::~CT_CommonViewProperties() {
	delete origin;
	delete scale;
}
