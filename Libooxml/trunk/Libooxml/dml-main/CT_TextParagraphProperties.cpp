#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextParagraphProperties::CT_TextParagraphProperties() {
	extLst = NULL;
	defRPr = NULL;
	lnSpc = NULL;
	spcBef = NULL;
	spcAft = NULL;
	tabLst = NULL;
	textBullet = NULL;
	textBulletColor = NULL;
	textBulletSize = NULL;
	textBulletTypeface = NULL;
}

CT_TextParagraphProperties::CT_TextParagraphProperties(CT_TextParagraphProperties &b) {
	extLst = b.extLst;
	defRPr = b.defRPr;
	lnSpc = b.lnSpc;
	spcBef = b.spcBef;
	spcAft = b.spcAft;
	tabLst = b.tabLst;
	textBullet = b.textBullet;
	textBulletColor = b.textBulletColor;
	textBulletSize = b.textBulletSize;
	textBulletTypeface = b.textBulletTypeface;
	rtl = b.rtl;
	eaLnBrk = b.eaLnBrk;
	latinLnBrk = b.latinLnBrk;
	hangingPunct = b.hangingPunct;
	defTabSz = b.defTabSz;
	algn = b.algn;
	fontAlgn = b.fontAlgn;
	indent = b.indent;
	lvl = b.lvl;
	marL = b.marL;
	marR = b.marR;
}

CT_TextParagraphProperties::CT_TextParagraphProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	defRPr = NULL;
	lnSpc = NULL;
	spcBef = NULL;
	spcAft = NULL;
	tabLst = NULL;
	textBullet = NULL;
	textBulletColor = NULL;
	textBulletSize = NULL;
	textBulletTypeface = NULL;
	if (attributes->getNamedItem(L"rtl")) {
		rtl = attributes->getNamedItem(L"rtl")->getNodeValue();
	}
	if (attributes->getNamedItem(L"eaLnBrk")) {
		eaLnBrk = attributes->getNamedItem(L"eaLnBrk")->getNodeValue();
	}
	if (attributes->getNamedItem(L"latinLnBrk")) {
		latinLnBrk = attributes->getNamedItem(L"latinLnBrk")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hangingPunct")) {
		hangingPunct = attributes->getNamedItem(L"hangingPunct")->getNodeValue();
	}
	if (attributes->getNamedItem(L"defTabSz")) {
		defTabSz = attributes->getNamedItem(L"defTabSz")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algn")) {
		algn = attributes->getNamedItem(L"algn")->getNodeValue();
	}
	if (attributes->getNamedItem(L"fontAlgn")) {
		fontAlgn = attributes->getNamedItem(L"fontAlgn")->getNodeValue();
	}
	if (attributes->getNamedItem(L"indent")) {
		indent = attributes->getNamedItem(L"indent")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lvl")) {
		lvl = attributes->getNamedItem(L"lvl")->getNodeValue();
	}
	if (attributes->getNamedItem(L"marL")) {
		marL = attributes->getNamedItem(L"marL")->getNodeValue();
	}
	if (attributes->getNamedItem(L"marR")) {
		marR = attributes->getNamedItem(L"marR")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"defRPr") == 0) {
			defRPr.reset(new CT_TextCharacterProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnSpc") == 0) {
			lnSpc.reset(new CT_TextSpacing(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spcBef") == 0) {
			spcBef.reset(new CT_TextSpacing(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spcAft") == 0) {
			spcAft.reset(new CT_TextSpacing(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tabLst") == 0) {
			tabLst.reset(new CT_TextTabStopList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textBullet") == 0) {
			textBullet.reset(new EG_TextBullet(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textBulletColor") == 0) {
			textBulletColor.reset(new EG_TextBulletColor(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textBulletSize") == 0) {
			textBulletSize.reset(new EG_TextBulletSize(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textBulletTypeface") == 0) {
			textBulletTypeface.reset(new EG_TextBulletTypeface(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextParagraphProperties& CT_TextParagraphProperties::operator=(CT_TextParagraphProperties &b) {
	extLst = b.extLst;
	defRPr = b.defRPr;
	lnSpc = b.lnSpc;
	spcBef = b.spcBef;
	spcAft = b.spcAft;
	tabLst = b.tabLst;
	textBullet = b.textBullet;
	textBulletColor = b.textBulletColor;
	textBulletSize = b.textBulletSize;
	textBulletTypeface = b.textBulletTypeface;
	rtl = b.rtl;
	eaLnBrk = b.eaLnBrk;
	latinLnBrk = b.latinLnBrk;
	hangingPunct = b.hangingPunct;
	defTabSz = b.defTabSz;
	algn = b.algn;
	fontAlgn = b.fontAlgn;
	indent = b.indent;
	lvl = b.lvl;
	marL = b.marL;
	marR = b.marR;
	return *this;
}

CT_TextParagraphProperties::~CT_TextParagraphProperties() {
}

std::wstring CT_TextParagraphProperties::Xml() {
	return L"";
}

