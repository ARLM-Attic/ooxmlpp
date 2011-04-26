#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideMasterIdList::CT_SlideMasterIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ldMasterId = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ldMasterId") == 0) {
			ldMasterId = new std::vector<CT_SlideMasterIdListEntry*>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideMasterIdList::~CT_SlideMasterIdList() {
	delete ldMasterId;
}
