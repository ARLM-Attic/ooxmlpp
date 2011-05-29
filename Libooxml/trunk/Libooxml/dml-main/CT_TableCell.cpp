#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableCell::CT_TableCell() {
	extLst = NULL;
	tcPr = NULL;
	txBody = NULL;
	rowSpan = 1;
	gridSpan = 1;
	hMerge = false;
	vMerge = false;
}

CT_TableCell::CT_TableCell(CT_TableCell &b) {
	extLst = b.extLst;
	tcPr = b.tcPr;
	txBody = b.txBody;
	hMerge = b.hMerge;
	vMerge = b.vMerge;
	rowSpan = b.rowSpan;
	gridSpan = b.gridSpan;
	id = b.id;
}

CT_TableCell::CT_TableCell(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	tcPr = NULL;
	txBody = NULL;
	rowSpan = 1;
	gridSpan = 1;
	hMerge = false;
	vMerge = false;
	if (attributes->getNamedItem(L"hMerge")) {
		hMerge = attributes->getNamedItem(L"hMerge")->getNodeValue();
	}
	if (attributes->getNamedItem(L"vMerge")) {
		vMerge = attributes->getNamedItem(L"vMerge")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rowSpan")) {
		rowSpan = attributes->getNamedItem(L"rowSpan")->getNodeValue();
	}
	if (attributes->getNamedItem(L"gridSpan")) {
		gridSpan = attributes->getNamedItem(L"gridSpan")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tcPr") == 0) {
			tcPr.reset(new CT_TableCellProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txBody") == 0) {
			txBody.reset(new CT_TextBody(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableCell& CT_TableCell::operator=(CT_TableCell &b) {
	extLst = b.extLst;
	tcPr = b.tcPr;
	txBody = b.txBody;
	hMerge = b.hMerge;
	vMerge = b.vMerge;
	rowSpan = b.rowSpan;
	gridSpan = b.gridSpan;
	id = b.id;
	return *this;
}

CT_TableCell::~CT_TableCell() {
}

std::wstring CT_TableCell::Xml() {
	return L"";
}

