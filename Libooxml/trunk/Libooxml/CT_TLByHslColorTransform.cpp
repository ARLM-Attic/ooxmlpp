#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLByHslColorTransform::CT_TLByHslColorTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"h")) {
		h = attributes->getNamedItem(L"h")->getNodeValue();
	}
	if (attributes->getNamedItem(L"s")) {
		s = attributes->getNamedItem(L"s")->getNodeValue();
	}
	if (attributes->getNamedItem(L"l")) {
		l = attributes->getNamedItem(L"l")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TLByHslColorTransform::~CT_TLByHslColorTransform() {
}
