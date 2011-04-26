#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLTimeNodeSequence::CT_TLTimeNodeSequence(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cTn = NULL;
	prevCondLst = NULL;
	nextCondLst = NULL;
	if (attributes->getNamedItem(L"nextAc")) {
		nextAc = attributes->getNamedItem(L"nextAc")->getNodeValue();
	}
	if (attributes->getNamedItem(L"prevAc")) {
		prevAc = attributes->getNamedItem(L"prevAc")->getNodeValue();
	}
	if (attributes->getNamedItem(L"concurrent")) {
		concurrent = attributes->getNamedItem(L"concurrent")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cTn") == 0) {
			cTn = new CT_TLCommonTimeNodeData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"prevCondLst") == 0) {
			prevCondLst = new CT_TLTimeConditionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nextCondLst") == 0) {
			nextCondLst = new CT_TLTimeConditionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLTimeNodeSequence::~CT_TLTimeNodeSequence() {
	delete cTn;
	delete prevCondLst;
	delete nextCondLst;
}
