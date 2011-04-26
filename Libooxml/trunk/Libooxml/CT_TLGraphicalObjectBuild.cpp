#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLGraphicalObjectBuild::CT_TLGraphicalObjectBuild(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bldAsOne = NULL;
	bldSub = NULL;
	if (attributes->getNamedItem(L"grpId")) {
		grpId = attributes->getNamedItem(L"grpId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"uiExpand")) {
		uiExpand = attributes->getNamedItem(L"uiExpand")->getNodeValue();
	}
	if (attributes->getNamedItem(L"spid")) {
		spid = attributes->getNamedItem(L"spid")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bldAsOne") == 0) {
			bldAsOne = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bldSub") == 0) {
			bldSub = new drawingml::main::CT_AnimationGraphicalObjectBuildProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLGraphicalObjectBuild::~CT_TLGraphicalObjectBuild() {
	delete bldAsOne;
	delete bldSub;
}
