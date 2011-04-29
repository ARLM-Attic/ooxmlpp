#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableStyleTextStyle::CT_TableStyleTextStyle() {
	extLst = NULL;
	colorChoice = NULL;
	themeableFontStyle = NULL;
}

CT_TableStyleTextStyle::CT_TableStyleTextStyle(CT_TableStyleTextStyle &b) {
	extLst = b.extLst;
	colorChoice = b.colorChoice;
	themeableFontStyle = b.themeableFontStyle;
	b = b.b;
	i = b.i;
}

CT_TableStyleTextStyle::CT_TableStyleTextStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	colorChoice = NULL;
	themeableFontStyle = NULL;
	if (attributes->getNamedItem(L"b")) {
		b = attributes->getNamedItem(L"b")->getNodeValue();
	}
	if (attributes->getNamedItem(L"i")) {
		i = attributes->getNamedItem(L"i")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"themeableFontStyle") == 0) {
			themeableFontStyle.reset(new EG_ThemeableFontStyles(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableStyleTextStyle& CT_TableStyleTextStyle::operator=(CT_TableStyleTextStyle &b) {
	extLst = b.extLst;
	colorChoice = b.colorChoice;
	themeableFontStyle = b.themeableFontStyle;
	b = b.b;
	i = b.i;
	return *this;
}

CT_TableStyleTextStyle::~CT_TableStyleTextStyle() {
}

std::wstring CT_TableStyleTextStyle::Xml() {
	return L"";
}

