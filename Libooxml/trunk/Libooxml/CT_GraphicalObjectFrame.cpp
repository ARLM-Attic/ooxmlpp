#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_GraphicalObjectFrame::CT_GraphicalObjectFrame(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rawingml::main::ST_BlackWhiteMod = NULL;
	extLst = NULL;
	nvGraphicFramePr = NULL;
	graphic = NULL;
	frm = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rawingml::main::ST_BlackWhiteMod") == 0) {
			rawingml::main::ST_BlackWhiteMod = new ////attributes(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvGraphicFramePr") == 0) {
			nvGraphicFramePr = new CT_GraphicalObjectFrameNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"graphic") == 0) {
			graphic = new drawingml::main::CT_GraphicalObject(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"frm") == 0) {
			frm = new drawingml::main::CT_Transform2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_GraphicalObjectFrame::~CT_GraphicalObjectFrame() {
	delete rawingml::main::ST_BlackWhiteMod;
	delete extLst;
	delete nvGraphicFramePr;
	delete graphic;
	delete frm;
}
