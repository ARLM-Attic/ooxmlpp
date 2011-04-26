#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLCommonBehaviorData::CT_TLCommonBehaviorData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	attrNameLst = NULL;
	cTn = NULL;
	tgtEl = NULL;
	ccumulate = NULL;
	dditive = NULL;
	frmType = NULL;
	if (attributes->getNamedItem(L"_override")) {
		_override = attributes->getNamedItem(L"_override")->getNodeValue();
	}
	if (attributes->getNamedItem(L"from")) {
		from = attributes->getNamedItem(L"from")->getNodeValue();
	}
	if (attributes->getNamedItem(L"to")) {
		to = attributes->getNamedItem(L"to")->getNodeValue();
	}
	if (attributes->getNamedItem(L"by")) {
		by = attributes->getNamedItem(L"by")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rctx")) {
		rctx = attributes->getNamedItem(L"rctx")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"attrNameLst") == 0) {
			attrNameLst = new CT_TLBehaviorAttributeNameList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cTn") == 0) {
			cTn = new CT_TLCommonTimeNodeData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tgtEl") == 0) {
			tgtEl = new CT_TLTimeTargetElement(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ccumulate") == 0) {
			ccumulate = new ST_TLBehaviorAccumulateType(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"dditive") == 0) {
			dditive = new ST_TLBehaviorAdditiveType(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"frmType") == 0) {
			frmType = new ST_TLBehaviorTransformType(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLCommonBehaviorData::~CT_TLCommonBehaviorData() {
	delete attrNameLst;
	delete cTn;
	delete tgtEl;
	delete ccumulate;
	delete dditive;
	delete frmType;
}
