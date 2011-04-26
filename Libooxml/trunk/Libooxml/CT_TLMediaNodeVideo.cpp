#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLMediaNodeVideo::CT_TLMediaNodeVideo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cMediaNode = NULL;
	if (attributes->getNamedItem(L"fullScrn")) {
		fullScrn = attributes->getNamedItem(L"fullScrn")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cMediaNode") == 0) {
			cMediaNode = new CT_TLCommonMediaNodeData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLMediaNodeVideo::~CT_TLMediaNodeVideo() {
	delete cMediaNode;
}
