#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Background::CT_Background(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bgPr = NULL;
	if (attributes->getNamedItem(L"bgRef")) {
		bgRef = attributes->getNamedItem(L"bgRef")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bwMode")) {
		bwMode = attributes->getNamedItem(L"bwMode")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bgPr") == 0) {
			bgPr = new CT_BackgroundProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Background::~CT_Background() {
	delete bgPr;
}
