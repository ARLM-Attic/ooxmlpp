#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ConnectorLocking::CT_ConnectorLocking() {
	extLst = NULL;
	noGrp = false;
	noSelect = false;
	noRot = false;
	noChangeAspect = false;
	noMove = false;
	noResize = false;
	noEditPoints = false;
	noAdjustHandles = false;
	noChangeArrowheads = false;
	noChangeShapeType = false;
}

CT_ConnectorLocking::CT_ConnectorLocking(CT_ConnectorLocking &b) {
	extLst = b.extLst;
	noGrp = b.noGrp;
	noSelect = b.noSelect;
	noRot = b.noRot;
	noChangeAspect = b.noChangeAspect;
	noMove = b.noMove;
	noResize = b.noResize;
	noEditPoints = b.noEditPoints;
	noAdjustHandles = b.noAdjustHandles;
	noChangeArrowheads = b.noChangeArrowheads;
	noChangeShapeType = b.noChangeShapeType;
}

CT_ConnectorLocking::CT_ConnectorLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	noGrp = false;
	noSelect = false;
	noRot = false;
	noChangeAspect = false;
	noMove = false;
	noResize = false;
	noEditPoints = false;
	noAdjustHandles = false;
	noChangeArrowheads = false;
	noChangeShapeType = false;
	if (attributes->getNamedItem(L"noGrp")) {
		noGrp = attributes->getNamedItem(L"noGrp")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noSelect")) {
		noSelect = attributes->getNamedItem(L"noSelect")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noRot")) {
		noRot = attributes->getNamedItem(L"noRot")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noChangeAspect")) {
		noChangeAspect = attributes->getNamedItem(L"noChangeAspect")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noMove")) {
		noMove = attributes->getNamedItem(L"noMove")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noResize")) {
		noResize = attributes->getNamedItem(L"noResize")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noEditPoints")) {
		noEditPoints = attributes->getNamedItem(L"noEditPoints")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noAdjustHandles")) {
		noAdjustHandles = attributes->getNamedItem(L"noAdjustHandles")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noChangeArrowheads")) {
		noChangeArrowheads = attributes->getNamedItem(L"noChangeArrowheads")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noChangeShapeType")) {
		noChangeShapeType = attributes->getNamedItem(L"noChangeShapeType")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ConnectorLocking& CT_ConnectorLocking::operator=(CT_ConnectorLocking &b) {
	extLst = b.extLst;
	noGrp = b.noGrp;
	noSelect = b.noSelect;
	noRot = b.noRot;
	noChangeAspect = b.noChangeAspect;
	noMove = b.noMove;
	noResize = b.noResize;
	noEditPoints = b.noEditPoints;
	noAdjustHandles = b.noAdjustHandles;
	noChangeArrowheads = b.noChangeArrowheads;
	noChangeShapeType = b.noChangeShapeType;
	return *this;
}

CT_ConnectorLocking::~CT_ConnectorLocking() {
}

std::wstring CT_ConnectorLocking::Xml() {
	return L"";
}

