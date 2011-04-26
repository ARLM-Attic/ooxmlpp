#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLBuildDiagram::CT_TLBuildDiagram(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"bld")) {
		bld = attributes->getNamedItem(L"bld")->getNodeValue();
	}
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
	}
}

CT_TLBuildDiagram::~CT_TLBuildDiagram() {
}
