#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLByRgbColorTransform::CT_TLByRgbColorTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"r")) {
		r = attributes->getNamedItem(L"r")->getNodeValue();
	}
	if (attributes->getNamedItem(L"g")) {
		g = attributes->getNamedItem(L"g")->getNodeValue();
	}
	if (attributes->getNamedItem(L"b")) {
		b = attributes->getNamedItem(L"b")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TLByRgbColorTransform::~CT_TLByRgbColorTransform() {
}
