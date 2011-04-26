#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideMaster::CT_SlideMaster(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cSld = NULL;
	extLst = NULL;
	hf = NULL;
	sldLayoutIdLst = NULL;
	txStyles = NULL;
	timing = NULL;
	transition = NULL;
	clrMap = NULL;
	if (attributes->getNamedItem(L"preserve")) {
		preserve = attributes->getNamedItem(L"preserve")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cSld") == 0) {
			cSld = new CT_CommonSlideData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hf") == 0) {
			hf = new CT_HeaderFooter(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldLayoutIdLst") == 0) {
			sldLayoutIdLst = new CT_SlideLayoutIdList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txStyles") == 0) {
			txStyles = new CT_SlideMasterTextStyles(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"timing") == 0) {
			timing = new CT_SlideTiming(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"transition") == 0) {
			transition = new CT_SlideTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMap") == 0) {
			clrMap = new drawingml::main::CT_ColorMapping(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideMaster::~CT_SlideMaster() {
	delete cSld;
	delete extLst;
	delete hf;
	delete sldLayoutIdLst;
	delete txStyles;
	delete timing;
	delete transition;
	delete clrMap;
}
