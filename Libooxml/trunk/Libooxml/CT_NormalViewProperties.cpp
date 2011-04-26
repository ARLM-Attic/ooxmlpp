#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_NormalViewProperties::CT_NormalViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	restoredLeft = NULL;
	restoredTop = NULL;
	if (attributes->getNamedItem(L"vertBarState")) {
		vertBarState = attributes->getNamedItem(L"vertBarState")->getNodeValue();
	}
	if (attributes->getNamedItem(L"horzBarState")) {
		horzBarState = attributes->getNamedItem(L"horzBarState")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showOutlineIcons")) {
		showOutlineIcons = attributes->getNamedItem(L"showOutlineIcons")->getNodeValue();
	}
	if (attributes->getNamedItem(L"snapVertSplitter")) {
		snapVertSplitter = attributes->getNamedItem(L"snapVertSplitter")->getNodeValue();
	}
	if (attributes->getNamedItem(L"preferSingleView")) {
		preferSingleView = attributes->getNamedItem(L"preferSingleView")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"restoredLeft") == 0) {
			restoredLeft = new CT_NormalViewPortion(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"restoredTop") == 0) {
			restoredTop = new CT_NormalViewPortion(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_NormalViewProperties::~CT_NormalViewProperties() {
	delete extLst;
	delete restoredLeft;
	delete restoredTop;
}
