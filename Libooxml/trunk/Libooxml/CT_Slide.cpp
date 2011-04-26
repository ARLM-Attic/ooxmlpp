#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Slide::CT_Slide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cSld = NULL;
	extLst = NULL;
	timing = NULL;
	transition = NULL;
	clrMapOvr = NULL;
	if (attributes->getNamedItem(L"show")) {
		show = attributes->getNamedItem(L"show")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showMasterSp")) {
		showMasterSp = attributes->getNamedItem(L"showMasterSp")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showMasterPhAnim")) {
		showMasterPhAnim = attributes->getNamedItem(L"showMasterPhAnim")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cSld") == 0) {
			cSld = new CT_CommonSlideData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"timing") == 0) {
			timing = new CT_SlideTiming(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"transition") == 0) {
			transition = new CT_SlideTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMapOvr") == 0) {
			clrMapOvr = new drawingml::main::CT_ColorMappingOverride(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Slide::~CT_Slide() {
	delete cSld;
	delete extLst;
	delete timing;
	delete transition;
	delete clrMapOvr;
}
