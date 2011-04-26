#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimateEffectBehavior::CT_TLAnimateEffectBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	progress = NULL;
	cBhvr = NULL;
	if (attributes->getNamedItem(L"transition")) {
		transition = attributes->getNamedItem(L"transition")->getNodeValue();
	}
	if (attributes->getNamedItem(L"filter")) {
		filter = attributes->getNamedItem(L"filter")->getNodeValue();
	}
	if (attributes->getNamedItem(L"prLst")) {
		prLst = attributes->getNamedItem(L"prLst")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"progress") == 0) {
			progress = new CT_TLAnimVariant(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimateEffectBehavior::~CT_TLAnimateEffectBehavior() {
	delete progress;
	delete cBhvr;
}
