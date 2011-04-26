#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLCommandBehavior::CT_TLCommandBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cBhvr = NULL;
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"cmd")) {
		cmd = attributes->getNamedItem(L"cmd")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLCommandBehavior::~CT_TLCommandBehavior() {
	delete cBhvr;
}
