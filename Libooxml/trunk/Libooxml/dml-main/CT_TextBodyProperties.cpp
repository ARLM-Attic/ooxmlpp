#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBodyProperties::CT_TextBodyProperties() {
	extLst = NULL;
	prstTxWarp = NULL;
	scene3D = NULL;
	text3D = NULL;
	textAutoFit = NULL;
	upright = false;
}

CT_TextBodyProperties::CT_TextBodyProperties(CT_TextBodyProperties &b) {
	extLst = b.extLst;
	prstTxWarp = b.prstTxWarp;
	scene3D = b.scene3D;
	text3D = b.text3D;
	textAutoFit = b.textAutoFit;
	spcFirstLastPara = b.spcFirstLastPara;
	rtlCol = b.rtlCol;
	fromWordArt = b.fromWordArt;
	anchorCtr = b.anchorCtr;
	forceAA = b.forceAA;
	upright = b.upright;
	compatLnSpc = b.compatLnSpc;
	rot = b.rot;
	lIns = b.lIns;
	tIns = b.tIns;
	rIns = b.rIns;
	bIns = b.bIns;
	spcCol = b.spcCol;
	anchor = b.anchor;
	numCol = b.numCol;
	horzOverflow = b.horzOverflow;
	vertOverflow = b.vertOverflow;
	vert = b.vert;
	wrap = b.wrap;
}

CT_TextBodyProperties::CT_TextBodyProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	prstTxWarp = NULL;
	scene3D = NULL;
	text3D = NULL;
	textAutoFit = NULL;
	upright = false;
	if (attributes->getNamedItem(L"spcFirstLastPara")) {
		spcFirstLastPara = attributes->getNamedItem(L"spcFirstLastPara")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rtlCol")) {
		rtlCol = attributes->getNamedItem(L"rtlCol")->getNodeValue();
	}
	if (attributes->getNamedItem(L"fromWordArt")) {
		fromWordArt = attributes->getNamedItem(L"fromWordArt")->getNodeValue();
	}
	if (attributes->getNamedItem(L"anchorCtr")) {
		anchorCtr = attributes->getNamedItem(L"anchorCtr")->getNodeValue();
	}
	if (attributes->getNamedItem(L"forceAA")) {
		forceAA = attributes->getNamedItem(L"forceAA")->getNodeValue();
	}
	if (attributes->getNamedItem(L"upright")) {
		upright = attributes->getNamedItem(L"upright")->getNodeValue();
	}
	if (attributes->getNamedItem(L"compatLnSpc")) {
		compatLnSpc = attributes->getNamedItem(L"compatLnSpc")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rot")) {
		rot = attributes->getNamedItem(L"rot")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lIns")) {
		lIns = attributes->getNamedItem(L"lIns")->getNodeValue();
	}
	if (attributes->getNamedItem(L"tIns")) {
		tIns = attributes->getNamedItem(L"tIns")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rIns")) {
		rIns = attributes->getNamedItem(L"rIns")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bIns")) {
		bIns = attributes->getNamedItem(L"bIns")->getNodeValue();
	}
	if (attributes->getNamedItem(L"spcCol")) {
		spcCol = attributes->getNamedItem(L"spcCol")->getNodeValue();
	}
	if (attributes->getNamedItem(L"anchor")) {
		anchor = attributes->getNamedItem(L"anchor")->getNodeValue();
	}
	if (attributes->getNamedItem(L"numCol")) {
		numCol = attributes->getNamedItem(L"numCol")->getNodeValue();
	}
	if (attributes->getNamedItem(L"horzOverflow")) {
		horzOverflow = attributes->getNamedItem(L"horzOverflow")->getNodeValue();
	}
	if (attributes->getNamedItem(L"vertOverflow")) {
		vertOverflow = attributes->getNamedItem(L"vertOverflow")->getNodeValue();
	}
	if (attributes->getNamedItem(L"vert")) {
		vert = attributes->getNamedItem(L"vert")->getNodeValue();
	}
	if (attributes->getNamedItem(L"wrap")) {
		wrap = attributes->getNamedItem(L"wrap")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"prstTxWarp") == 0) {
			prstTxWarp.reset(new CT_PresetTextShape(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"scene3D") == 0) {
			scene3D.reset(new CT_Scene3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"text3D") == 0) {
			text3D.reset(new EG_Text3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textAutoFit") == 0) {
			textAutoFit.reset(new EG_TextAutofit(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextBodyProperties& CT_TextBodyProperties::operator=(CT_TextBodyProperties &b) {
	extLst = b.extLst;
	prstTxWarp = b.prstTxWarp;
	scene3D = b.scene3D;
	text3D = b.text3D;
	textAutoFit = b.textAutoFit;
	spcFirstLastPara = b.spcFirstLastPara;
	rtlCol = b.rtlCol;
	fromWordArt = b.fromWordArt;
	anchorCtr = b.anchorCtr;
	forceAA = b.forceAA;
	upright = b.upright;
	compatLnSpc = b.compatLnSpc;
	rot = b.rot;
	lIns = b.lIns;
	tIns = b.tIns;
	rIns = b.rIns;
	bIns = b.bIns;
	spcCol = b.spcCol;
	anchor = b.anchor;
	numCol = b.numCol;
	horzOverflow = b.horzOverflow;
	vertOverflow = b.vertOverflow;
	vert = b.vert;
	wrap = b.wrap;
	return *this;
}

CT_TextBodyProperties::~CT_TextBodyProperties() {
}

std::wstring CT_TextBodyProperties::Xml() {
	return L"";
}

