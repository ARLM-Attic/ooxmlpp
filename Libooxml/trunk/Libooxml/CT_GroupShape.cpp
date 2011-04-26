#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_GroupShape::CT_GroupShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	nvGrpSpPr = NULL;
	grpSpPr = NULL;
	hoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvGrpSpPr") == 0) {
			nvGrpSpPr = new CT_GroupShapeNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"grpSpPr") == 0) {
			grpSpPr = new drawingml::main::CT_GroupShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hoice") == 0) {
			hoice = new std::vector<void*>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_GroupShape::~CT_GroupShape() {
	delete extLst;
	delete nvGrpSpPr;
	delete grpSpPr;
	delete hoice;
}
