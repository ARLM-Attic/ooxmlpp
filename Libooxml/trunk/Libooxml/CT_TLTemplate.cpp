#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLTemplate::CT_TLTemplate(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tnLst = NULL;
	if (attributes->getNamedItem(L"lvl")) {
		lvl = attributes->getNamedItem(L"lvl")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tnLst") == 0) {
			tnLst = new CT_TimeNodeList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLTemplate::~CT_TLTemplate() {
	delete tnLst;
}
