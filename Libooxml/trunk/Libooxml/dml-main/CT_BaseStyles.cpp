#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BaseStyles::CT_BaseStyles() {
	clrScheme = NULL;
	fontScheme = NULL;
	extLst = NULL;
	fmtScheme = NULL;
}

CT_BaseStyles::CT_BaseStyles(CT_BaseStyles &b) {
	clrScheme = b.clrScheme;
	fontScheme = b.fontScheme;
	extLst = b.extLst;
	fmtScheme = b.fmtScheme;
}

CT_BaseStyles::CT_BaseStyles(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	clrScheme = NULL;
	fontScheme = NULL;
	extLst = NULL;
	fmtScheme = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrScheme") == 0) {
			clrScheme.reset(new CT_ColorScheme(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fontScheme") == 0) {
			fontScheme.reset(new CT_FontScheme(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fmtScheme") == 0) {
			fmtScheme.reset(new CT_StyleMatrix(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_BaseStyles& CT_BaseStyles::operator=(CT_BaseStyles &b) {
	clrScheme = b.clrScheme;
	fontScheme = b.fontScheme;
	extLst = b.extLst;
	fmtScheme = b.fmtScheme;
	return *this;
}

CT_BaseStyles::~CT_BaseStyles() {
}

std::wstring CT_BaseStyles::Xml() {
	return L"";
}

