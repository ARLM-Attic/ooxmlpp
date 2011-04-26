#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideLayout::CT_SlideLayout(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cSld = NULL;
	extLst = NULL;
	hf = NULL;
	timing = NULL;
	transition = NULL;
	clrMap = NULL;
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showMasterSp")) {
		showMasterSp = attributes->getNamedItem(L"showMasterSp")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ShowMasterPhAnim")) {
		ShowMasterPhAnim = attributes->getNamedItem(L"ShowMasterPhAnim")->getNodeValue();
	}
	if (attributes->getNamedItem(L"preserve")) {
		preserve = attributes->getNamedItem(L"preserve")->getNodeValue();
	}
	if (attributes->getNamedItem(L"userDrawn")) {
		userDrawn = attributes->getNamedItem(L"userDrawn")->getNodeValue();
	}
	if (attributes->getNamedItem(L"matchingName")) {
		matchingName = attributes->getNamedItem(L"matchingName")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cSld") == 0) {
			cSld = new CT_CommonSlideData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hf") == 0) {
			hf = new CT_HeaderFooter(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"timing") == 0) {
			timing = new CT_SlideTiming(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"transition") == 0) {
			transition = new CT_SlideTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMap") == 0) {
			clrMap = new drawingml::main::CT_ColorMappingOverride(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideLayout::~CT_SlideLayout() {
	delete cSld;
	delete extLst;
	delete hf;
	delete timing;
	delete transition;
	delete clrMap;
}
