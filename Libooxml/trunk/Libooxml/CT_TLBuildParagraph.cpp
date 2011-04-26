#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLBuildParagraph::CT_TLBuildParagraph(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tmplLst = NULL;
	if (attributes->getNamedItem(L"build")) {
		build = attributes->getNamedItem(L"build")->getNodeValue();
	}
	if (attributes->getNamedItem(L"advAuto")) {
		advAuto = attributes->getNamedItem(L"advAuto")->getNodeValue();
	}
	if (attributes->getNamedItem(L"grpId")) {
		grpId = attributes->getNamedItem(L"grpId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bldLvl")) {
		bldLvl = attributes->getNamedItem(L"bldLvl")->getNodeValue();
	}
	if (attributes->getNamedItem(L"uiExpand")) {
		uiExpand = attributes->getNamedItem(L"uiExpand")->getNodeValue();
	}
	if (attributes->getNamedItem(L"animBg")) {
		animBg = attributes->getNamedItem(L"animBg")->getNodeValue();
	}
	if (attributes->getNamedItem(L"autoUpdateAnimBg")) {
		autoUpdateAnimBg = attributes->getNamedItem(L"autoUpdateAnimBg")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rev")) {
		rev = attributes->getNamedItem(L"rev")->getNodeValue();
	}
	if (attributes->getNamedItem(L"spid")) {
		spid = attributes->getNamedItem(L"spid")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tmplLst") == 0) {
			tmplLst = new CT_TLTemplateList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLBuildParagraph::~CT_TLBuildParagraph() {
	delete tmplLst;
}
