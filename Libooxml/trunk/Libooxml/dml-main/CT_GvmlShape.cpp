#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlShape::CT_GvmlShape(std::shared_ptr<CT_GvmlShapeNonVisual> &_nvSpPr, std::shared_ptr<CT_ShapeProperties> &_spPr) {
	nvSpPr = _nvSpPr;
	txSp = NULL;
	extLst = NULL;
	spPr = _spPr;
	style = NULL;
}

CT_GvmlShape::CT_GvmlShape(CT_GvmlShape &b) {
	nvSpPr = b.nvSpPr;
	txSp = b.txSp;
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
}

CT_GvmlShape::CT_GvmlShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	nvSpPr = NULL;
	txSp = NULL;
	extLst = NULL;
	spPr = NULL;
	style = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvSpPr") == 0) {
			nvSpPr.reset(new CT_GvmlShapeNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txSp") == 0) {
			txSp.reset(new CT_GvmlTextShape(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr.reset(new CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style.reset(new CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlShape& CT_GvmlShape::operator=(CT_GvmlShape &b) {
	nvSpPr = b.nvSpPr;
	txSp = b.txSp;
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
	return *this;
}

CT_GvmlShape::~CT_GvmlShape() {
}

std::wstring CT_GvmlShape::Xml() {
	return L"";
}

