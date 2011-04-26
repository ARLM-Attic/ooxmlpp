#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLByAnimateColorTransform::CT_TLByAnimateColorTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	hsl = NULL;
	rgb = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hsl") == 0) {
			hsl = new CT_TLByHslColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rgb") == 0) {
			rgb = new CT_TLByRgbColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLByAnimateColorTransform::~CT_TLByAnimateColorTransform() {
	delete hsl;
	delete rgb;
}
