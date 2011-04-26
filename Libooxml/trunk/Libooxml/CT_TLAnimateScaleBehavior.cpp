#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimateScaleBehavior::CT_TLAnimateScaleBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cBhvr = NULL;
	by = NULL;
	from = NULL;
	to = NULL;
	if (attributes->getNamedItem(L"zoomContents")) {
		zoomContents = attributes->getNamedItem(L"zoomContents")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"by") == 0) {
			by = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"from") == 0) {
			from = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"to") == 0) {
			to = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimateScaleBehavior::~CT_TLAnimateScaleBehavior() {
	delete cBhvr;
	delete by;
	delete from;
	delete to;
}
