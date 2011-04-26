#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_HandoutMasterIdList::CT_HandoutMasterIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	handoutMasterId = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"handoutMasterId") == 0) {
			handoutMasterId = new CT_HandoutMasterIdListEntry(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_HandoutMasterIdList::~CT_HandoutMasterIdList() {
	delete handoutMasterId;
}
