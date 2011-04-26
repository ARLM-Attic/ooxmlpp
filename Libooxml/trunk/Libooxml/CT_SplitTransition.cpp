#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SplitTransition::CT_SplitTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	orient = NULL;
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"orient") == 0) {
			orient = new ST_Direction(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SplitTransition::~CT_SplitTransition() {
	delete orient;
}
