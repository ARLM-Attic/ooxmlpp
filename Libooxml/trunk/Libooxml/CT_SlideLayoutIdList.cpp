#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideLayoutIdList::CT_SlideLayoutIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ldLayoutId = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ldLayoutId") == 0) {
			ldLayoutId = new std::vector<CT_SlideLayoutIdListEntry*>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideLayoutIdList::~CT_SlideLayoutIdList() {
	delete ldLayoutId;
}
