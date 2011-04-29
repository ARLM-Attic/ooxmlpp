#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BaseStylesOverride::CT_BaseStylesOverride() {
	clrScheme = NULL;
	fontScheme = NULL;
	fmtScheme = NULL;
}

CT_BaseStylesOverride::CT_BaseStylesOverride(CT_BaseStylesOverride &b) {
	clrScheme = b.clrScheme;
	fontScheme = b.fontScheme;
	fmtScheme = b.fmtScheme;
}

CT_BaseStylesOverride::CT_BaseStylesOverride(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	clrScheme = NULL;
	fontScheme = NULL;
	fmtScheme = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrScheme") == 0) {
			clrScheme.reset(new CT_ColorScheme(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fontScheme") == 0) {
			fontScheme.reset(new CT_FontScheme(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fmtScheme") == 0) {
			fmtScheme.reset(new CT_StyleMatrix(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_BaseStylesOverride& CT_BaseStylesOverride::operator=(CT_BaseStylesOverride &b) {
	clrScheme = b.clrScheme;
	fontScheme = b.fontScheme;
	fmtScheme = b.fmtScheme;
	return *this;
}

CT_BaseStylesOverride::~CT_BaseStylesOverride() {
}

std::wstring CT_BaseStylesOverride::Xml() {
	return L"";
}

