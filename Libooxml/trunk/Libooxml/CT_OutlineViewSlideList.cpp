#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_OutlineViewSlideList::CT_OutlineViewSlideList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ld = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ld") == 0) {
			ld = new std::vector<CT_OutlineViewSlideEntry*>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_OutlineViewSlideList::~CT_OutlineViewSlideList() {
	delete ld;
}
