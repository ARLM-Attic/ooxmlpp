#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorScheme::CT_ColorScheme() {
	dk1 = NULL;
	lt1 = NULL;
	dk2 = NULL;
	lt2 = NULL;
	accent1 = NULL;
	accent2 = NULL;
	accent3 = NULL;
	accent4 = NULL;
	accent5 = NULL;
	hlink = NULL;
	folHlink = NULL;
	extLst = NULL;
}

CT_ColorScheme::CT_ColorScheme(CT_ColorScheme &b) {
	dk1 = b.dk1;
	lt1 = b.lt1;
	dk2 = b.dk2;
	lt2 = b.lt2;
	accent1 = b.accent1;
	accent2 = b.accent2;
	accent3 = b.accent3;
	accent4 = b.accent4;
	accent5 = b.accent5;
	hlink = b.hlink;
	folHlink = b.folHlink;
	extLst = b.extLst;
	name = b.name;
}

CT_ColorScheme::CT_ColorScheme(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	dk1 = NULL;
	lt1 = NULL;
	dk2 = NULL;
	lt2 = NULL;
	accent1 = NULL;
	accent2 = NULL;
	accent3 = NULL;
	accent4 = NULL;
	accent5 = NULL;
	hlink = NULL;
	folHlink = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"dk1") == 0) {
			dk1.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lt1") == 0) {
			lt1.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"dk2") == 0) {
			dk2.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lt2") == 0) {
			lt2.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"accent1") == 0) {
			accent1.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"accent2") == 0) {
			accent2.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"accent3") == 0) {
			accent3.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"accent4") == 0) {
			accent4.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"accent5") == 0) {
			accent5.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hlink") == 0) {
			hlink.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"folHlink") == 0) {
			folHlink.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorScheme& CT_ColorScheme::operator=(CT_ColorScheme &b) {
	dk1 = b.dk1;
	lt1 = b.lt1;
	dk2 = b.dk2;
	lt2 = b.lt2;
	accent1 = b.accent1;
	accent2 = b.accent2;
	accent3 = b.accent3;
	accent4 = b.accent4;
	accent5 = b.accent5;
	hlink = b.hlink;
	folHlink = b.folHlink;
	extLst = b.extLst;
	name = b.name;
	return *this;
}

CT_ColorScheme::~CT_ColorScheme() {
}

std::wstring CT_ColorScheme::Xml() {
	return L"";
}

