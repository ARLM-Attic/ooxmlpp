#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimateBehavior::CT_TLAnimateBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cBhvr = NULL;
	tavLst = NULL;
	if (attributes->getNamedItem(L"calcmode")) {
		calcmode = attributes->getNamedItem(L"calcmode")->getNodeValue();
	}
	if (attributes->getNamedItem(L"valueType")) {
		valueType = attributes->getNamedItem(L"valueType")->getNodeValue();
	}
	if (attributes->getNamedItem(L"by")) {
		by = attributes->getNamedItem(L"by")->getNodeValue();
	}
	if (attributes->getNamedItem(L"from")) {
		from = attributes->getNamedItem(L"from")->getNodeValue();
	}
	if (attributes->getNamedItem(L"to")) {
		to = attributes->getNamedItem(L"to")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tavLst") == 0) {
			tavLst = new CT_TLTimeAnimateValueList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimateBehavior::~CT_TLAnimateBehavior() {
	delete cBhvr;
	delete tavLst;
}
