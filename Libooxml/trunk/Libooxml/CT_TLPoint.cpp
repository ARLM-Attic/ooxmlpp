#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLPoint::CT_TLPoint(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"x")) {
		x = attributes->getNamedItem(L"x")->getNodeValue();
	}
	if (attributes->getNamedItem(L"y")) {
		y = attributes->getNamedItem(L"y")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TLPoint::~CT_TLPoint() {
}
