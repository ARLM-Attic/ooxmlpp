#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideSorterViewProperties::CT_SlideSorterViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cSldViewPr = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"showFormatting")) {
		showFormatting = attributes->getNamedItem(L"showFormatting")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cSldViewPr") == 0) {
			cSldViewPr = new CT_CommonSlideViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideSorterViewProperties::~CT_SlideSorterViewProperties() {
	delete cSldViewPr;
	delete extLst;
}
