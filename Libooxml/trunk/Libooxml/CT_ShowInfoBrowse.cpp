#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ShowInfoBrowse::CT_ShowInfoBrowse(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"showScrollBar")) {
		showScrollBar = attributes->getNamedItem(L"showScrollBar")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_ShowInfoBrowse::~CT_ShowInfoBrowse() {
}
