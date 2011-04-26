#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideSyncProperties::CT_SlideSyncProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"serverSldModifiedTime")) {
		serverSldModifiedTime = attributes->getNamedItem(L"serverSldModifiedTime")->getNodeValue();
	}
	if (attributes->getNamedItem(L"clientInsertedTime")) {
		clientInsertedTime = attributes->getNamedItem(L"clientInsertedTime")->getNodeValue();
	}
	if (attributes->getNamedItem(L"serverSldId")) {
		serverSldId = attributes->getNamedItem(L"serverSldId")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideSyncProperties::~CT_SlideSyncProperties() {
	delete extLst;
}
