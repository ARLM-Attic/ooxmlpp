#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ThemeableLineStyle::CT_ThemeableLineStyle() {
	ln = NULL;
	lnRef = NULL;
}

CT_ThemeableLineStyle::CT_ThemeableLineStyle(CT_ThemeableLineStyle &b) {
	ln = b.ln;
	lnRef = b.lnRef;
}

CT_ThemeableLineStyle::CT_ThemeableLineStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ln = NULL;
	lnRef = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ln") == 0) {
			ln.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnRef") == 0) {
			lnRef.reset(new CT_StyleMatrixReference(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ThemeableLineStyle& CT_ThemeableLineStyle::operator=(CT_ThemeableLineStyle &b) {
	ln = b.ln;
	lnRef = b.lnRef;
	return *this;
}

CT_ThemeableLineStyle::~CT_ThemeableLineStyle() {
}

std::wstring CT_ThemeableLineStyle::Xml() {
	return L"";
}

