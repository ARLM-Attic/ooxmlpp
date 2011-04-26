#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLBehaviorAttributeNameList::CT_TLBehaviorAttributeNameList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ttrName = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ttrName") == 0) {
			ttrName = new std::vector<std::wstring>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLBehaviorAttributeNameList::~CT_TLBehaviorAttributeNameList() {
	delete ttrName;
}
