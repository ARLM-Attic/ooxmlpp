#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlShapeNonVisual::CT_GvmlShapeNonVisual() {
	cNvPr = NULL;
	cNvSpPr = NULL;
}

CT_GvmlShapeNonVisual::CT_GvmlShapeNonVisual(CT_GvmlShapeNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvSpPr = b.cNvSpPr;
}

CT_GvmlShapeNonVisual::CT_GvmlShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cNvPr = NULL;
	cNvSpPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr.reset(new CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvSpPr") == 0) {
			cNvSpPr.reset(new CT_NonVisualDrawingShapeProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlShapeNonVisual& CT_GvmlShapeNonVisual::operator=(CT_GvmlShapeNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvSpPr = b.cNvSpPr;
	return *this;
}

CT_GvmlShapeNonVisual::~CT_GvmlShapeNonVisual() {
}

std::wstring CT_GvmlShapeNonVisual::Xml() {
	return L"";
}

