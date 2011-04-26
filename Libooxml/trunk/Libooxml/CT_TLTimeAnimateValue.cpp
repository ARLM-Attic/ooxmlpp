#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLTimeAnimateValue::CT_TLTimeAnimateValue(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	val = NULL;
	if (attributes->getNamedItem(L"tm")) {
		tm = attributes->getNamedItem(L"tm")->getNodeValue();
	}
	if (attributes->getNamedItem(L"fmla")) {
		fmla = attributes->getNamedItem(L"fmla")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"val") == 0) {
			val = new CT_TLAnimVariant(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLTimeAnimateValue::~CT_TLTimeAnimateValue() {
	delete val;
}
