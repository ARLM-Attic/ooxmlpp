#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ShowInfoKiosk::CT_ShowInfoKiosk(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"restart")) {
		restart = attributes->getNamedItem(L"restart")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_ShowInfoKiosk::~CT_ShowInfoKiosk() {
}
