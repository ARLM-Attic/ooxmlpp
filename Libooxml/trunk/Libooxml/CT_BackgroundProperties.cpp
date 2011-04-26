#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_BackgroundProperties::CT_BackgroundProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	blipFill = NULL;
	effectDag = NULL;
	effectLst = NULL;
	gradFill = NULL;
	grpFill = NULL;
	noFill = NULL;
	pattFill = NULL;
	solidFill = NULL;
	if (attributes->getNamedItem(L"shadeTotitle")) {
		shadeTotitle = attributes->getNamedItem(L"shadeTotitle")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blipFill") == 0) {
			blipFill = new drawingml::main::CT_BlipFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectDag") == 0) {
			effectDag = new drawingml::main::CT_EffectContainer(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectLst") == 0) {
			effectLst = new drawingml::main::CT_EffectList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gradFill") == 0) {
			gradFill = new drawingml::main::CT_GradientFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"grpFill") == 0) {
			grpFill = new drawingml::main::CT_GroupFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"noFill") == 0) {
			noFill = new drawingml::main::CT_NoFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pattFill") == 0) {
			pattFill = new drawingml::main::CT_PatternFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"solidFill") == 0) {
			solidFill = new drawingml::main::CT_SolidColorFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_BackgroundProperties::~CT_BackgroundProperties() {
	delete extLst;
	delete blipFill;
	delete effectDag;
	delete effectLst;
	delete gradFill;
	delete grpFill;
	delete noFill;
	delete pattFill;
	delete solidFill;
}
