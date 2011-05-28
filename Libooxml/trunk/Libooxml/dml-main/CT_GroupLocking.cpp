#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GroupLocking::CT_GroupLocking() {
	extLst = NULL;
	noGrp = false;
	noUnGrp = false;
	noSelect = false;
	noRot = false;
	noChangeAspect = false;
	noMove = false;
	noResize = false;
}

CT_GroupLocking::CT_GroupLocking(CT_GroupLocking &b) {
	extLst = b.extLst;
	noGrp = b.noGrp;
	noUnGrp = b.noUnGrp;
	noSelect = b.noSelect;
	noRot = b.noRot;
	noChangeAspect = b.noChangeAspect;
	noMove = b.noMove;
	noResize = b.noResize;
}

CT_GroupLocking::CT_GroupLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	noGrp = false;
	noUnGrp = false;
	noSelect = false;
	noRot = false;
	noChangeAspect = false;
	noMove = false;
	noResize = false;
	if (attributes->getNamedItem(L"noGrp")) {
		noGrp = attributes->getNamedItem(L"noGrp")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noUnGrp")) {
		noUnGrp = attributes->getNamedItem(L"noUnGrp")->getNodeValue();
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
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GroupLocking& CT_GroupLocking::operator=(CT_GroupLocking &b) {
	extLst = b.extLst;
	noGrp = b.noGrp;
	noUnGrp = b.noUnGrp;
	noSelect = b.noSelect;
	noRot = b.noRot;
	noChangeAspect = b.noChangeAspect;
	noMove = b.noMove;
	noResize = b.noResize;
	return *this;
}

CT_GroupLocking::~CT_GroupLocking() {
}

std::wstring CT_GroupLocking::Xml() {
	return L"";
}

