#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlGraphicalObjectFrame::CT_GvmlGraphicalObjectFrame(std::shared_ptr<CT_GvmlGraphicFrameNonVisual> &_nvGraphicFramePr, std::shared_ptr<CT_GraphicalObject> &_graphic, std::shared_ptr<CT_Transform2D> &_xfrm) {
	graphic = _graphic;
	nvGraphicFramePr = _nvGraphicFramePr;
	extLst = NULL;
	xfrm = _xfrm;
}

CT_GvmlGraphicalObjectFrame::CT_GvmlGraphicalObjectFrame(CT_GvmlGraphicalObjectFrame &b) {
	graphic = b.graphic;
	nvGraphicFramePr = b.nvGraphicFramePr;
	extLst = b.extLst;
	xfrm = b.xfrm;
}

CT_GvmlGraphicalObjectFrame::CT_GvmlGraphicalObjectFrame(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	graphic = NULL;
	nvGraphicFramePr = NULL;
	extLst = NULL;
	xfrm = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"graphic") == 0) {
			graphic.reset(new CT_GraphicalObject(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvGraphicFramePr") == 0) {
			nvGraphicFramePr.reset(new CT_GvmlGraphicFrameNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"xfrm") == 0) {
			xfrm.reset(new CT_Transform2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlGraphicalObjectFrame& CT_GvmlGraphicalObjectFrame::operator=(CT_GvmlGraphicalObjectFrame &b) {
	graphic = b.graphic;
	nvGraphicFramePr = b.nvGraphicFramePr;
	extLst = b.extLst;
	xfrm = b.xfrm;
	return *this;
}

CT_GvmlGraphicalObjectFrame::~CT_GvmlGraphicalObjectFrame() {
}

std::wstring CT_GvmlGraphicalObjectFrame::Xml() {
	return L"";
}

