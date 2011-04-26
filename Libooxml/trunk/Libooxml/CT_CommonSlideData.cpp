#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CommonSlideData::CT_CommonSlideData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bg = NULL;
	controls = NULL;
	custDataLst = NULL;
	extLst = NULL;
	spTree = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bg") == 0) {
			bg = new CT_Background(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"controls") == 0) {
			controls = new CT_ControlList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custDataLst") == 0) {
			custDataLst = new CT_CustomerDataList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spTree") == 0) {
			spTree = new CT_GroupShape(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_CommonSlideData::~CT_CommonSlideData() {
	delete bg;
	delete controls;
	delete custDataLst;
	delete extLst;
	delete spTree;
}
