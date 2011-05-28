#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlGroupShapeNonVisual::CT_GvmlGroupShapeNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr,std::shared_ptr<CT_NonVisualGroupDrawingShapeProps> &_cNvGrpSpPr) {
	cNvPr = _cNvPr;
	cNvGrpSpPr = cNvGrpSpPr;
}

CT_GvmlGroupShapeNonVisual::CT_GvmlGroupShapeNonVisual(CT_GvmlGroupShapeNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvGrpSpPr = b.cNvGrpSpPr;
}

CT_GvmlGroupShapeNonVisual::CT_GvmlGroupShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cNvPr = NULL;
	cNvGrpSpPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr.reset(new CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvGrpSpPr") == 0) {
			cNvGrpSpPr.reset(new CT_NonVisualGroupDrawingShapeProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlGroupShapeNonVisual& CT_GvmlGroupShapeNonVisual::operator=(CT_GvmlGroupShapeNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvGrpSpPr = b.cNvGrpSpPr;
	return *this;
}

CT_GvmlGroupShapeNonVisual::~CT_GvmlGroupShapeNonVisual() {
}

std::wstring CT_GvmlGroupShapeNonVisual::Xml() {
	return L"";
}

