#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideSize::CT_SlideSize(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"cx")) {
		cx = attributes->getNamedItem(L"cx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"cy")) {
		cy = attributes->getNamedItem(L"cy")->getNodeValue();
	}
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_SlideSize::~CT_SlideSize() {
}
