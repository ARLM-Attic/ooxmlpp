#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLCommonMediaNodeData::CT_TLCommonMediaNodeData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cTn = NULL;
	tgtEl = NULL;
	if (attributes->getNamedItem(L"numSld")) {
		numSld = attributes->getNamedItem(L"numSld")->getNodeValue();
	}
	if (attributes->getNamedItem(L"mute")) {
		mute = attributes->getNamedItem(L"mute")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showWhenStopped")) {
		showWhenStopped = attributes->getNamedItem(L"showWhenStopped")->getNodeValue();
	}
	if (attributes->getNamedItem(L"vol")) {
		vol = attributes->getNamedItem(L"vol")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cTn") == 0) {
			cTn = new CT_TLCommonTimeNodeData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tgtEl") == 0) {
			tgtEl = new CT_TLTimeTargetElement(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLCommonMediaNodeData::~CT_TLCommonMediaNodeData() {
	delete cTn;
	delete tgtEl;
}
