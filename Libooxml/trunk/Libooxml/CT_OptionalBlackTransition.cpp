#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_OptionalBlackTransition::CT_OptionalBlackTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"thruBlk")) {
		thruBlk = attributes->getNamedItem(L"thruBlk")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_OptionalBlackTransition::~CT_OptionalBlackTransition() {
}
