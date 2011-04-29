#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NonVisualGraphicFrameProperties::CT_NonVisualGraphicFrameProperties() {
	graphicFrameLocks = NULL;
	extLst = NULL;
}

CT_NonVisualGraphicFrameProperties::CT_NonVisualGraphicFrameProperties(CT_NonVisualGraphicFrameProperties &b) {
	graphicFrameLocks = b.graphicFrameLocks;
	extLst = b.extLst;
}

CT_NonVisualGraphicFrameProperties::CT_NonVisualGraphicFrameProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	graphicFrameLocks = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"graphicFrameLocks") == 0) {
			graphicFrameLocks.reset(new CT_GraphicalObjectFrameLocking(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_NonVisualGraphicFrameProperties& CT_NonVisualGraphicFrameProperties::operator=(CT_NonVisualGraphicFrameProperties &b) {
	graphicFrameLocks = b.graphicFrameLocks;
	extLst = b.extLst;
	return *this;
}

CT_NonVisualGraphicFrameProperties::~CT_NonVisualGraphicFrameProperties() {
}

std::wstring CT_NonVisualGraphicFrameProperties::Xml() {
	return L"";
}

