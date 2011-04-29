#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableCellProperties::CT_TableCellProperties() {
	cell3D = NULL;
	headers = NULL;
	lnL = NULL;
	lnR = NULL;
	lnT = NULL;
	lnB = NULL;
	lnTlToBr = NULL;
	lnBlToTr = NULL;
	extLst = NULL;
	fillProperties = NULL;
}

CT_TableCellProperties::CT_TableCellProperties(CT_TableCellProperties &b) {
	cell3D = b.cell3D;
	headers = b.headers;
	lnL = b.lnL;
	lnR = b.lnR;
	lnT = b.lnT;
	lnB = b.lnB;
	lnTlToBr = b.lnTlToBr;
	lnBlToTr = b.lnBlToTr;
	extLst = b.extLst;
	fillProperties = b.fillProperties;
	anchorCtr = b.anchorCtr;
	marL = b.marL;
	marR = b.marR;
	marT = b.marT;
	marB = b.marB;
	anchor = b.anchor;
	horzOverflow = b.horzOverflow;
	vert = b.vert;
}

CT_TableCellProperties::CT_TableCellProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cell3D = NULL;
	headers = NULL;
	lnL = NULL;
	lnR = NULL;
	lnT = NULL;
	lnB = NULL;
	lnTlToBr = NULL;
	lnBlToTr = NULL;
	extLst = NULL;
	fillProperties = NULL;
	if (attributes->getNamedItem(L"anchorCtr")) {
		anchorCtr = attributes->getNamedItem(L"anchorCtr")->getNodeValue();
	}
	if (attributes->getNamedItem(L"marL")) {
		marL = attributes->getNamedItem(L"marL")->getNodeValue();
	}
	if (attributes->getNamedItem(L"marR")) {
		marR = attributes->getNamedItem(L"marR")->getNodeValue();
	}
	if (attributes->getNamedItem(L"marT")) {
		marT = attributes->getNamedItem(L"marT")->getNodeValue();
	}
	if (attributes->getNamedItem(L"marB")) {
		marB = attributes->getNamedItem(L"marB")->getNodeValue();
	}
	if (attributes->getNamedItem(L"anchor")) {
		anchor = attributes->getNamedItem(L"anchor")->getNodeValue();
	}
	if (attributes->getNamedItem(L"horzOverflow")) {
		horzOverflow = attributes->getNamedItem(L"horzOverflow")->getNodeValue();
	}
	if (attributes->getNamedItem(L"vert")) {
		vert = attributes->getNamedItem(L"vert")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cell3D") == 0) {
			cell3D.reset(new CT_Cell3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"headers") == 0) {
			headers.reset(new CT_Headers(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnL") == 0) {
			lnL.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnR") == 0) {
			lnR.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnT") == 0) {
			lnT.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnB") == 0) {
			lnB.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnTlToBr") == 0) {
			lnTlToBr.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnBlToTr") == 0) {
			lnBlToTr.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableCellProperties& CT_TableCellProperties::operator=(CT_TableCellProperties &b) {
	cell3D = b.cell3D;
	headers = b.headers;
	lnL = b.lnL;
	lnR = b.lnR;
	lnT = b.lnT;
	lnB = b.lnB;
	lnTlToBr = b.lnTlToBr;
	lnBlToTr = b.lnBlToTr;
	extLst = b.extLst;
	fillProperties = b.fillProperties;
	anchorCtr = b.anchorCtr;
	marL = b.marL;
	marR = b.marR;
	marT = b.marT;
	marB = b.marB;
	anchor = b.anchor;
	horzOverflow = b.horzOverflow;
	vert = b.vert;
	return *this;
}

CT_TableCellProperties::~CT_TableCellProperties() {
}

std::wstring CT_TableCellProperties::Xml() {
	return L"";
}

