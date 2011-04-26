#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Placeholder::CT_Placeholder(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"orient")) {
		orient = attributes->getNamedItem(L"orient")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sz")) {
		sz = attributes->getNamedItem(L"sz")->getNodeValue();
	}
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"idx")) {
		idx = attributes->getNamedItem(L"idx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hasCustomPrompt")) {
		hasCustomPrompt = attributes->getNamedItem(L"hasCustomPrompt")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Placeholder::~CT_Placeholder() {
	delete extLst;
}
