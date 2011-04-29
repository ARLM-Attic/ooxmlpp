#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PatternFillProperties::CT_PatternFillProperties() {
	fgClr = NULL;
	bgClr = NULL;
}

CT_PatternFillProperties::CT_PatternFillProperties(CT_PatternFillProperties &b) {
	fgClr = b.fgClr;
	bgClr = b.bgClr;
	prst = b.prst;
}

CT_PatternFillProperties::CT_PatternFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fgClr = NULL;
	bgClr = NULL;
	if (attributes->getNamedItem(L"prst")) {
		prst = attributes->getNamedItem(L"prst")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fgClr") == 0) {
			fgClr.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bgClr") == 0) {
			bgClr.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_PatternFillProperties& CT_PatternFillProperties::operator=(CT_PatternFillProperties &b) {
	fgClr = b.fgClr;
	bgClr = b.bgClr;
	prst = b.prst;
	return *this;
}

CT_PatternFillProperties::~CT_PatternFillProperties() {
}

std::wstring CT_PatternFillProperties::Xml() {
	return L"";
}

