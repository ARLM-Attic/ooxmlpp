#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_OfficeStyleSheet::CT_OfficeStyleSheet(std::shared_ptr<CT_BaseStyles> &_themeElements) {
	themeElements = _themeElements;
	extraClrSchemeLst = NULL;
	custClrLst = NULL;
	objectDefaults = NULL;
	extLst = NULL;
}

CT_OfficeStyleSheet::CT_OfficeStyleSheet(CT_OfficeStyleSheet &b) {
	themeElements = b.themeElements;
	extraClrSchemeLst = b.extraClrSchemeLst;
	custClrLst = b.custClrLst;
	objectDefaults = b.objectDefaults;
	extLst = b.extLst;
	name = b.name;
}

CT_OfficeStyleSheet::CT_OfficeStyleSheet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	themeElements = NULL;
	extraClrSchemeLst = NULL;
	custClrLst = NULL;
	objectDefaults = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"themeElements") == 0) {
			themeElements.reset(new CT_BaseStyles(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extraClrSchemeLst") == 0) {
			extraClrSchemeLst.reset(new CT_ColorSchemeList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custClrLst") == 0) {
			custClrLst.reset(new CT_CustomColorList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"objectDefaults") == 0) {
			objectDefaults.reset(new CT_ObjectStyleDefaults(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_OfficeStyleSheet& CT_OfficeStyleSheet::operator=(CT_OfficeStyleSheet &b) {
	themeElements = b.themeElements;
	extraClrSchemeLst = b.extraClrSchemeLst;
	custClrLst = b.custClrLst;
	objectDefaults = b.objectDefaults;
	extLst = b.extLst;
	name = b.name;
	return *this;
}

CT_OfficeStyleSheet::~CT_OfficeStyleSheet() {
}

std::wstring CT_OfficeStyleSheet::Xml() {
	return L"";
}

