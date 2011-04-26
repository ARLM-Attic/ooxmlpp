#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ModifyVerifier::CT_ModifyVerifier(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"spinValue")) {
		spinValue = attributes->getNamedItem(L"spinValue")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algorithmName")) {
		algorithmName = attributes->getNamedItem(L"algorithmName")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hashValue")) {
		hashValue = attributes->getNamedItem(L"hashValue")->getNodeValue();
	}
	if (attributes->getNamedItem(L"saltValue")) {
		saltValue = attributes->getNamedItem(L"saltValue")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_ModifyVerifier::~CT_ModifyVerifier() {
}
