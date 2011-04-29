#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableStyle::CT_TableStyle() {
	extLst = NULL;
	tblBg = NULL;
	wholeTbl = NULL;
	band1H = NULL;
	band2H = NULL;
	band1V = NULL;
	band2V = NULL;
	lastCol = NULL;
	firstCol = NULL;
	lastRow = NULL;
	seCell = NULL;
	swCell = NULL;
	firstRow = NULL;
	neCell = NULL;
	nwCell = NULL;
}

CT_TableStyle::CT_TableStyle(CT_TableStyle &b) {
	extLst = b.extLst;
	tblBg = b.tblBg;
	wholeTbl = b.wholeTbl;
	band1H = b.band1H;
	band2H = b.band2H;
	band1V = b.band1V;
	band2V = b.band2V;
	lastCol = b.lastCol;
	firstCol = b.firstCol;
	lastRow = b.lastRow;
	seCell = b.seCell;
	swCell = b.swCell;
	firstRow = b.firstRow;
	neCell = b.neCell;
	nwCell = b.nwCell;
	styleId = b.styleId;
	styleName = b.styleName;
}

CT_TableStyle::CT_TableStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	tblBg = NULL;
	wholeTbl = NULL;
	band1H = NULL;
	band2H = NULL;
	band1V = NULL;
	band2V = NULL;
	lastCol = NULL;
	firstCol = NULL;
	lastRow = NULL;
	seCell = NULL;
	swCell = NULL;
	firstRow = NULL;
	neCell = NULL;
	nwCell = NULL;
	if (attributes->getNamedItem(L"styleId")) {
		styleId = attributes->getNamedItem(L"styleId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"styleName")) {
		styleName = attributes->getNamedItem(L"styleName")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tblBg") == 0) {
			tblBg.reset(new CT_TableBackgroundStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"wholeTbl") == 0) {
			wholeTbl.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"band1H") == 0) {
			band1H.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"band2H") == 0) {
			band2H.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"band1V") == 0) {
			band1V.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"band2V") == 0) {
			band2V.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lastCol") == 0) {
			lastCol.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"firstCol") == 0) {
			firstCol.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lastRow") == 0) {
			lastRow.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"seCell") == 0) {
			seCell.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"swCell") == 0) {
			swCell.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"firstRow") == 0) {
			firstRow.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"neCell") == 0) {
			neCell.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nwCell") == 0) {
			nwCell.reset(new CT_TablePartStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableStyle& CT_TableStyle::operator=(CT_TableStyle &b) {
	extLst = b.extLst;
	tblBg = b.tblBg;
	wholeTbl = b.wholeTbl;
	band1H = b.band1H;
	band2H = b.band2H;
	band1V = b.band1V;
	band2V = b.band2V;
	lastCol = b.lastCol;
	firstCol = b.firstCol;
	lastRow = b.lastRow;
	seCell = b.seCell;
	swCell = b.swCell;
	firstRow = b.firstRow;
	neCell = b.neCell;
	nwCell = b.nwCell;
	styleId = b.styleId;
	styleName = b.styleName;
	return *this;
}

CT_TableStyle::~CT_TableStyle() {
}

std::wstring CT_TableStyle::Xml() {
	return L"";
}

