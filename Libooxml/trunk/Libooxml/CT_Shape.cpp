#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Shape::CT_Shape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	nvSpPr = NULL;
	spPr = NULL;
	style = NULL;
	txBody = NULL;
	if (attributes->getNamedItem(L"useBgFill")) {
		useBgFill = attributes->getNamedItem(L"useBgFill")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvSpPr") == 0) {
			nvSpPr = new CT_ShapeNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr = new drawingml::main::CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style = new drawingml::main::CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txBody") == 0) {
			txBody = new drawingml::main::CT_TextBody(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Shape::~CT_Shape() {
	delete extLst;
	delete nvSpPr;
	delete spPr;
	delete style;
	delete txBody;
}
