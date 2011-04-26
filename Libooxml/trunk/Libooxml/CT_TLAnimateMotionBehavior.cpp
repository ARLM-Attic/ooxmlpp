#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimateMotionBehavior::CT_TLAnimateMotionBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cBhvr = NULL;
	by = NULL;
	from = NULL;
	to = NULL;
	rCtr = NULL;
	if (attributes->getNamedItem(L"origin")) {
		origin = attributes->getNamedItem(L"origin")->getNodeValue();
	}
	if (attributes->getNamedItem(L"pathEditMode")) {
		pathEditMode = attributes->getNamedItem(L"pathEditMode")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rAng")) {
		rAng = attributes->getNamedItem(L"rAng")->getNodeValue();
	}
	if (attributes->getNamedItem(L"path")) {
		path = attributes->getNamedItem(L"path")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ptsTypes")) {
		ptsTypes = attributes->getNamedItem(L"ptsTypes")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"by") == 0) {
			by = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"from") == 0) {
			from = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"to") == 0) {
			to = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rCtr") == 0) {
			rCtr = new CT_TLPoint(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimateMotionBehavior::~CT_TLAnimateMotionBehavior() {
	delete cBhvr;
	delete by;
	delete from;
	delete to;
	delete rCtr;
}
