#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ExtensionListModify::CT_ExtensionListModify(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	xt = NULL;
	if (attributes->getNamedItem(L"mod")) {
		mod = attributes->getNamedItem(L"mod")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"xt") == 0) {
			xt = new std::vector<CT_Extension*>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_ExtensionListModify::~CT_ExtensionListModify() {
	delete xt;
}
