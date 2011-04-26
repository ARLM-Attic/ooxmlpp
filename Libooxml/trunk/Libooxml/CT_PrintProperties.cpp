#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_PrintProperties::CT_PrintProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"clrMode")) {
		clrMode = attributes->getNamedItem(L"clrMode")->getNodeValue();
	}
	if (attributes->getNamedItem(L"prnWhat")) {
		prnWhat = attributes->getNamedItem(L"prnWhat")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hiddenSlides")) {
		hiddenSlides = attributes->getNamedItem(L"hiddenSlides")->getNodeValue();
	}
	if (attributes->getNamedItem(L"scaleToFitPaper")) {
		scaleToFitPaper = attributes->getNamedItem(L"scaleToFitPaper")->getNodeValue();
	}
	if (attributes->getNamedItem(L"frameSlides")) {
		frameSlides = attributes->getNamedItem(L"frameSlides")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_PrintProperties::~CT_PrintProperties() {
	delete extLst;
}
