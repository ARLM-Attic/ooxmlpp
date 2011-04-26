#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLOleChartTargetElement::CT_TLOleChartTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lvl")) {
		lvl = attributes->getNamedItem(L"lvl")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TLOleChartTargetElement::~CT_TLOleChartTargetElement() {
}
