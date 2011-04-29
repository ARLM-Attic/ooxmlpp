#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextListStyle::CT_TextListStyle() {
	extLst = NULL;
	defPr = NULL;
	lvl1Pr = NULL;
	lvl2Pr = NULL;
	lvl3Pr = NULL;
	lvl4Pr = NULL;
	lvl5Pr = NULL;
	lvl6Pr = NULL;
	lvl7Pr = NULL;
	lvl8Pr = NULL;
	lvl9Pr = NULL;
}

CT_TextListStyle::CT_TextListStyle(CT_TextListStyle &b) {
	extLst = b.extLst;
	defPr = b.defPr;
	lvl1Pr = b.lvl1Pr;
	lvl2Pr = b.lvl2Pr;
	lvl3Pr = b.lvl3Pr;
	lvl4Pr = b.lvl4Pr;
	lvl5Pr = b.lvl5Pr;
	lvl6Pr = b.lvl6Pr;
	lvl7Pr = b.lvl7Pr;
	lvl8Pr = b.lvl8Pr;
	lvl9Pr = b.lvl9Pr;
}

CT_TextListStyle::CT_TextListStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	defPr = NULL;
	lvl1Pr = NULL;
	lvl2Pr = NULL;
	lvl3Pr = NULL;
	lvl4Pr = NULL;
	lvl5Pr = NULL;
	lvl6Pr = NULL;
	lvl7Pr = NULL;
	lvl8Pr = NULL;
	lvl9Pr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"defPr") == 0) {
			defPr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl1Pr") == 0) {
			lvl1Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl2Pr") == 0) {
			lvl2Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl3Pr") == 0) {
			lvl3Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl4Pr") == 0) {
			lvl4Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl5Pr") == 0) {
			lvl5Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl6Pr") == 0) {
			lvl6Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl7Pr") == 0) {
			lvl7Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl8Pr") == 0) {
			lvl8Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lvl9Pr") == 0) {
			lvl9Pr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextListStyle& CT_TextListStyle::operator=(CT_TextListStyle &b) {
	extLst = b.extLst;
	defPr = b.defPr;
	lvl1Pr = b.lvl1Pr;
	lvl2Pr = b.lvl2Pr;
	lvl3Pr = b.lvl3Pr;
	lvl4Pr = b.lvl4Pr;
	lvl5Pr = b.lvl5Pr;
	lvl6Pr = b.lvl6Pr;
	lvl7Pr = b.lvl7Pr;
	lvl8Pr = b.lvl8Pr;
	lvl9Pr = b.lvl9Pr;
	return *this;
}

CT_TextListStyle::~CT_TextListStyle() {
}

std::wstring CT_TextListStyle::Xml() {
	return L"";
}

