#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorSchemeList::CT_ColorSchemeList() {
	extraClrScheme = NULL;
}

CT_ColorSchemeList::CT_ColorSchemeList(CT_ColorSchemeList &b) {
	extraClrScheme = b.extraClrScheme;
}

CT_ColorSchemeList::CT_ColorSchemeList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extraClrScheme = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extraClrScheme") == 0) {
			extraClrScheme.reset(new CT_ColorSchemeAndMapping(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorSchemeList& CT_ColorSchemeList::operator=(CT_ColorSchemeList &b) {
	extraClrScheme = b.extraClrScheme;
	return *this;
}

CT_ColorSchemeList::~CT_ColorSchemeList() {
}

std::wstring CT_ColorSchemeList::Xml() {
	return L"";
}

