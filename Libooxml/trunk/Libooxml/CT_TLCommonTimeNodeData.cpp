#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLCommonTimeNodeData::CT_TLCommonTimeNodeData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	iterate = NULL;
	endSync = NULL;
	stCondLst = NULL;
	endCondLst = NULL;
	childTnLst = NULL;
	subTnLst = NULL;
	if (attributes->getNamedItem(L"dur")) {
		dur = attributes->getNamedItem(L"dur")->getNodeValue();
	}
	if (attributes->getNamedItem(L"repeatCount")) {
		repeatCount = attributes->getNamedItem(L"repeatCount")->getNodeValue();
	}
	if (attributes->getNamedItem(L"repeatDur")) {
		repeatDur = attributes->getNamedItem(L"repeatDur")->getNodeValue();
	}
	if (attributes->getNamedItem(L"fill")) {
		fill = attributes->getNamedItem(L"fill")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"masterRel")) {
		masterRel = attributes->getNamedItem(L"masterRel")->getNodeValue();
	}
	if (attributes->getNamedItem(L"presetClass")) {
		presetClass = attributes->getNamedItem(L"presetClass")->getNodeValue();
	}
	if (attributes->getNamedItem(L"restart")) {
		restart = attributes->getNamedItem(L"restart")->getNodeValue();
	}
	if (attributes->getNamedItem(L"syncBehavior")) {
		syncBehavior = attributes->getNamedItem(L"syncBehavior")->getNodeValue();
	}
	if (attributes->getNamedItem(L"nodeType")) {
		nodeType = attributes->getNamedItem(L"nodeType")->getNodeValue();
	}
	if (attributes->getNamedItem(L"grpId")) {
		grpId = attributes->getNamedItem(L"grpId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"autoRev")) {
		autoRev = attributes->getNamedItem(L"autoRev")->getNodeValue();
	}
	if (attributes->getNamedItem(L"display")) {
		display = attributes->getNamedItem(L"display")->getNodeValue();
	}
	if (attributes->getNamedItem(L"afterEffect")) {
		afterEffect = attributes->getNamedItem(L"afterEffect")->getNodeValue();
	}
	if (attributes->getNamedItem(L"nodePh")) {
		nodePh = attributes->getNamedItem(L"nodePh")->getNodeValue();
	}
	if (attributes->getNamedItem(L"spd")) {
		spd = attributes->getNamedItem(L"spd")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accel")) {
		accel = attributes->getNamedItem(L"accel")->getNodeValue();
	}
	if (attributes->getNamedItem(L"decel")) {
		decel = attributes->getNamedItem(L"decel")->getNodeValue();
	}
	if (attributes->getNamedItem(L"presetID")) {
		presetID = attributes->getNamedItem(L"presetID")->getNodeValue();
	}
	if (attributes->getNamedItem(L"presetSubtype")) {
		presetSubtype = attributes->getNamedItem(L"presetSubtype")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bldLvl")) {
		bldLvl = attributes->getNamedItem(L"bldLvl")->getNodeValue();
	}
	if (attributes->getNamedItem(L"tmFilter")) {
		tmFilter = attributes->getNamedItem(L"tmFilter")->getNodeValue();
	}
	if (attributes->getNamedItem(L"evtFilter")) {
		evtFilter = attributes->getNamedItem(L"evtFilter")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"iterate") == 0) {
			iterate = new CT_TLIterateData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"endSync") == 0) {
			endSync = new CT_TLTimeCondition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"stCondLst") == 0) {
			stCondLst = new CT_TLTimeConditionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"endCondLst") == 0) {
			endCondLst = new CT_TLTimeConditionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"childTnLst") == 0) {
			childTnLst = new CT_TimeNodeList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"subTnLst") == 0) {
			subTnLst = new CT_TimeNodeList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLCommonTimeNodeData::~CT_TLCommonTimeNodeData() {
	delete iterate;
	delete endSync;
	delete stCondLst;
	delete endCondLst;
	delete childTnLst;
	delete subTnLst;
}
