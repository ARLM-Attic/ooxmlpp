#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableRow::CT_TableRow() {
	extLst = NULL;
	tc = NULL;
}

CT_TableRow::CT_TableRow(CT_TableRow &b) {
	extLst = b.extLst;
	tc = b.tc;
	h = b.h;
}

CT_TableRow::CT_TableRow(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	tc = NULL;
	if (attributes->getNamedItem(L"h")) {
		h = attributes->getNamedItem(L"h")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tc") == 0) {
			tc.reset(new CT_TableCell(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableRow& CT_TableRow::operator=(CT_TableRow &b) {
	extLst = b.extLst;
	tc = b.tc;
	h = b.h;
	return *this;
}

CT_TableRow::~CT_TableRow() {
}

std::wstring CT_TableRow::Xml() {
	return L"";
}

