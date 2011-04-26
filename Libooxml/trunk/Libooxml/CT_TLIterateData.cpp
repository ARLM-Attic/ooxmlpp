#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLIterateData::CT_TLIterateData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tmPct = NULL;
	tmAbs = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tmPct") == 0) {
			tmPct = new CT_TLIterateIntervalPercentage(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tmAbs") == 0) {
			tmAbs = new CT_TLIterateIntervalTime(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLIterateData::~CT_TLIterateData() {
	delete tmPct;
	delete tmAbs;
}
