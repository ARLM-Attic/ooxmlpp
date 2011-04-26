#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_NormalViewPortion::CT_NormalViewPortion(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"autoAdjust")) {
		autoAdjust = attributes->getNamedItem(L"autoAdjust")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sz")) {
		sz = attributes->getNamedItem(L"sz")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_NormalViewPortion::~CT_NormalViewPortion() {
}
