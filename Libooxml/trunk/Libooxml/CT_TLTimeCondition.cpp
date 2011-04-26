#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLTimeCondition::CT_TLTimeCondition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tgtEl = NULL;
	rtn = NULL;
	tn = NULL;
	hoice = NULL;
	if (attributes->getNamedItem(L"delay")) {
		delay = attributes->getNamedItem(L"delay")->getNodeValue();
	}
	if (attributes->getNamedItem(L"evt")) {
		evt = attributes->getNamedItem(L"evt")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tgtEl") == 0) {
			tgtEl = new CT_TLTimeTargetElement(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rtn") == 0) {
			rtn = new CT_TLTriggerRuntimeNode(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tn") == 0) {
			tn = new CT_TLTriggerTimeNodeID(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hoice") == 0) {
			hoice = new std::vector<_choice>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLTimeCondition::~CT_TLTimeCondition() {
	delete tgtEl;
	delete rtn;
	delete tn;
	delete hoice;
}
