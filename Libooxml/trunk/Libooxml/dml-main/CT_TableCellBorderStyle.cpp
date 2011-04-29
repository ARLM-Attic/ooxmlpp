#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableCellBorderStyle::CT_TableCellBorderStyle() {
	extLst = NULL;
	left = NULL;
	right = NULL;
	top = NULL;
	bottom = NULL;
	insideH = NULL;
	insideV = NULL;
	tl2br = NULL;
	tr2bl = NULL;
}

CT_TableCellBorderStyle::CT_TableCellBorderStyle(CT_TableCellBorderStyle &b) {
	extLst = b.extLst;
	left = b.left;
	right = b.right;
	top = b.top;
	bottom = b.bottom;
	insideH = b.insideH;
	insideV = b.insideV;
	tl2br = b.tl2br;
	tr2bl = b.tr2bl;
}

CT_TableCellBorderStyle::CT_TableCellBorderStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	left = NULL;
	right = NULL;
	top = NULL;
	bottom = NULL;
	insideH = NULL;
	insideV = NULL;
	tl2br = NULL;
	tr2bl = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"left") == 0) {
			left.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"right") == 0) {
			right.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"top") == 0) {
			top.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bottom") == 0) {
			bottom.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"insideH") == 0) {
			insideH.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"insideV") == 0) {
			insideV.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tl2br") == 0) {
			tl2br.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tr2bl") == 0) {
			tr2bl.reset(new CT_ThemeableLineStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableCellBorderStyle& CT_TableCellBorderStyle::operator=(CT_TableCellBorderStyle &b) {
	extLst = b.extLst;
	left = b.left;
	right = b.right;
	top = b.top;
	bottom = b.bottom;
	insideH = b.insideH;
	insideV = b.insideV;
	tl2br = b.tl2br;
	tr2bl = b.tr2bl;
	return *this;
}

CT_TableCellBorderStyle::~CT_TableCellBorderStyle() {
}

std::wstring CT_TableCellBorderStyle::Xml() {
	return L"";
}

