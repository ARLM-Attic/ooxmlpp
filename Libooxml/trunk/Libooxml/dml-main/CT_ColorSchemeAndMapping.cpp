#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorSchemeAndMapping::CT_ColorSchemeAndMapping() {
	clrMap = NULL;
	clrScheme = NULL;
}

CT_ColorSchemeAndMapping::CT_ColorSchemeAndMapping(CT_ColorSchemeAndMapping &b) {
	clrMap = b.clrMap;
	clrScheme = b.clrScheme;
}

CT_ColorSchemeAndMapping::CT_ColorSchemeAndMapping(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	clrMap = NULL;
	clrScheme = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMap") == 0) {
			clrMap.reset(new CT_ColorMapping(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrScheme") == 0) {
			clrScheme.reset(new CT_ColorScheme(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorSchemeAndMapping& CT_ColorSchemeAndMapping::operator=(CT_ColorSchemeAndMapping &b) {
	clrMap = b.clrMap;
	clrScheme = b.clrScheme;
	return *this;
}

CT_ColorSchemeAndMapping::~CT_ColorSchemeAndMapping() {
}

std::wstring CT_ColorSchemeAndMapping::Xml() {
	return L"";
}

