#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CommonSlideViewProperties::CT_CommonSlideViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cViewPr = NULL;
	guideLst = NULL;
	if (attributes->getNamedItem(L"snapToGrid")) {
		snapToGrid = attributes->getNamedItem(L"snapToGrid")->getNodeValue();
	}
	if (attributes->getNamedItem(L"snapToObjects")) {
		snapToObjects = attributes->getNamedItem(L"snapToObjects")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showGuides")) {
		showGuides = attributes->getNamedItem(L"showGuides")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cViewPr") == 0) {
			cViewPr = new CT_CommonViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"guideLst") == 0) {
			guideLst = new CT_GuideList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_CommonSlideViewProperties::~CT_CommonSlideViewProperties() {
	delete cViewPr;
	delete guideLst;
}
