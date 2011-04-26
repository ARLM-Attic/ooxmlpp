#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Guide::CT_Guide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"orient")) {
		orient = attributes->getNamedItem(L"orient")->getNodeValue();
	}
	if (attributes->getNamedItem(L"pos")) {
		pos = attributes->getNamedItem(L"pos")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Guide::~CT_Guide() {
}
