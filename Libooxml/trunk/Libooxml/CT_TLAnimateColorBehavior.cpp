#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimateColorBehavior::CT_TLAnimateColorBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	by = NULL;
	cBhvr = NULL;
	from = NULL;
	to = NULL;
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	if (attributes->getNamedItem(L"clrSpc")) {
		clrSpc = attributes->getNamedItem(L"clrSpc")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"by") == 0) {
			by = new CT_TLByAnimateColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"from") == 0) {
			from = new drawingml::main::CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"to") == 0) {
			to = new drawingml::main::CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimateColorBehavior::~CT_TLAnimateColorBehavior() {
	delete by;
	delete cBhvr;
	delete from;
	delete to;
}
