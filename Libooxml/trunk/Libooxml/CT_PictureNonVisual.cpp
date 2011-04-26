#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_PictureNonVisual::CT_PictureNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	nvPr = NULL;
	cNvPr = NULL;
	cNvPicPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvPr") == 0) {
			nvPr = new CT_ApplicationNonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr = new drawingml::main::CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPicPr") == 0) {
			cNvPicPr = new drawingml::main::CT_NonVisualPictureProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_PictureNonVisual::~CT_PictureNonVisual() {
	delete nvPr;
	delete cNvPr;
	delete cNvPicPr;
}
