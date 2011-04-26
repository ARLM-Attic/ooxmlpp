#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLTextTargetElement::CT_TLTextTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	charRg = NULL;
	pRg = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"charRg") == 0) {
			charRg = new CT_IndexRange(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pRg") == 0) {
			pRg = new CT_IndexRange(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLTextTargetElement::~CT_TLTextTargetElement() {
	delete charRg;
	delete pRg;
}
