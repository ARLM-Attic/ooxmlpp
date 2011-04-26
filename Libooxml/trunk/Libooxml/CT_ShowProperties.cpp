#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ShowProperties::CT_ShowProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	custShow = NULL;
	present = NULL;
	sldAll = NULL;
	extLst = NULL;
	sldRg = NULL;
	browse = NULL;
	kiosk = NULL;
	penClr = NULL;
	if (attributes->getNamedItem(L"loop")) {
		loop = attributes->getNamedItem(L"loop")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showNarration")) {
		showNarration = attributes->getNamedItem(L"showNarration")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showAnimation")) {
		showAnimation = attributes->getNamedItem(L"showAnimation")->getNodeValue();
	}
	if (attributes->getNamedItem(L"useTimings")) {
		useTimings = attributes->getNamedItem(L"useTimings")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custShow") == 0) {
			custShow = new CT_CustomShowId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"present") == 0) {
			present = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldAll") == 0) {
			sldAll = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldRg") == 0) {
			sldRg = new CT_IndexRange(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"browse") == 0) {
			browse = new CT_ShowInfoBrowse(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"kiosk") == 0) {
			kiosk = new CT_ShowInfoKiosk(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"penClr") == 0) {
			penClr = new drawingml::main::CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_ShowProperties::~CT_ShowProperties() {
	delete custShow;
	delete present;
	delete sldAll;
	delete extLst;
	delete sldRg;
	delete browse;
	delete kiosk;
	delete penClr;
}
