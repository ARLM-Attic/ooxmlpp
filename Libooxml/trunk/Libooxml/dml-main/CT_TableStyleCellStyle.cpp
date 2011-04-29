#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableStyleCellStyle::CT_TableStyleCellStyle() {
	cell3D = NULL;
	tcBdr = NULL;
	themeableFillStyle = NULL;
}

CT_TableStyleCellStyle::CT_TableStyleCellStyle(CT_TableStyleCellStyle &b) {
	cell3D = b.cell3D;
	tcBdr = b.tcBdr;
	themeableFillStyle = b.themeableFillStyle;
}

CT_TableStyleCellStyle::CT_TableStyleCellStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cell3D = NULL;
	tcBdr = NULL;
	themeableFillStyle = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cell3D") == 0) {
			cell3D.reset(new CT_Cell3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tcBdr") == 0) {
			tcBdr.reset(new CT_TableCellBorderStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"themeableFillStyle") == 0) {
			themeableFillStyle.reset(new EG_ThemeableFillStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableStyleCellStyle& CT_TableStyleCellStyle::operator=(CT_TableStyleCellStyle &b) {
	cell3D = b.cell3D;
	tcBdr = b.tcBdr;
	themeableFillStyle = b.themeableFillStyle;
	return *this;
}

CT_TableStyleCellStyle::~CT_TableStyleCellStyle() {
}

std::wstring CT_TableStyleCellStyle::Xml() {
	return L"";
}

