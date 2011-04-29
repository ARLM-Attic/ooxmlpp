#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlGraphicFrameNonVisual::CT_GvmlGraphicFrameNonVisual() {
	cNvPr = NULL;
	cNvGraphicFramePr = NULL;
}

CT_GvmlGraphicFrameNonVisual::CT_GvmlGraphicFrameNonVisual(CT_GvmlGraphicFrameNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvGraphicFramePr = b.cNvGraphicFramePr;
}

CT_GvmlGraphicFrameNonVisual::CT_GvmlGraphicFrameNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cNvPr = NULL;
	cNvGraphicFramePr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr.reset(new CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvGraphicFramePr") == 0) {
			cNvGraphicFramePr.reset(new CT_NonVisualGraphicFrameProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlGraphicFrameNonVisual& CT_GvmlGraphicFrameNonVisual::operator=(CT_GvmlGraphicFrameNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvGraphicFramePr = b.cNvGraphicFramePr;
	return *this;
}

CT_GvmlGraphicFrameNonVisual::~CT_GvmlGraphicFrameNonVisual() {
}

std::wstring CT_GvmlGraphicFrameNonVisual::Xml() {
	return L"";
}

