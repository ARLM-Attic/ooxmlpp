#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Table::CT_Table() {
	tblGrid = NULL;
	tblPr = NULL;
	tr = NULL;
}

CT_Table::CT_Table(CT_Table &b) {
	tblGrid = b.tblGrid;
	tblPr = b.tblPr;
	tr = b.tr;
}

CT_Table::CT_Table(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tblGrid = NULL;
	tblPr = NULL;
	tr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tblGrid") == 0) {
			tblGrid.reset(new CT_TableGrid(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tblPr") == 0) {
			tblPr.reset(new CT_TableProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tr") == 0) {
			tr.reset(new CT_TableRow(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Table& CT_Table::operator=(CT_Table &b) {
	tblGrid = b.tblGrid;
	tblPr = b.tblPr;
	tr = b.tr;
	return *this;
}

CT_Table::~CT_Table() {
}

std::wstring CT_Table::Xml() {
	return L"";
}

