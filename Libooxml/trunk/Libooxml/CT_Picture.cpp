#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Picture::CT_Picture(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	nvPicPr = NULL;
	blipFill = NULL;
	spPr = NULL;
	style = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvPicPr") == 0) {
			nvPicPr = new CT_PictureNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blipFill") == 0) {
			blipFill = new drawingml::main::CT_BlipFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr = new drawingml::main::CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style = new drawingml::main::CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Picture::~CT_Picture() {
	delete extLst;
	delete nvPicPr;
	delete blipFill;
	delete spPr;
	delete style;
}
