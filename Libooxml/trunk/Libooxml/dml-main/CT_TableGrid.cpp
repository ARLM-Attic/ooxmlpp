#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableGrid::CT_TableGrid() {
	gridCol.clear();
}

CT_TableGrid::CT_TableGrid(CT_TableGrid &b) {
	gridCol = b.gridCol;
}

CT_TableGrid::CT_TableGrid(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	gridCol.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gridCol") == 0) {
			std::shared_ptr<CT_TableCol> temp;
			temp.reset(new CT_TableCol(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			gridCol.push_back();
		}
	}
}

CT_TableGrid& CT_TableGrid::operator=(CT_TableGrid &b) {
	gridCol = b.gridCol;
	return *this;
}

CT_TableGrid::~CT_TableGrid() {
}

std::wstring CT_TableGrid::Xml() {
	return L"";
}

