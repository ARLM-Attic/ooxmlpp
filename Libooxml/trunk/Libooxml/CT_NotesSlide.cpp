#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_NotesSlide::CT_NotesSlide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cSld = NULL;
	extLst = NULL;
	clrMapOvr = NULL;
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
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMapOvr") == 0) {
			clrMapOvr = new drawingml::main::CT_ColorMappingOverride(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_NotesSlide::~CT_NotesSlide() {
	delete cSld;
	delete extLst;
	delete clrMapOvr;
}
