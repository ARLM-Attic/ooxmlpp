#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FontScheme::CT_FontScheme(std::shared_ptr<CT_FontCollection> _majorFont,std::shared_ptr<CT_FontCollection> _minorFont,std::wstring _name) {
	majorFont = _majorFont;
	minorFont = _minorFont;
	name = _name;
	extLst = NULL;
}

CT_FontScheme::CT_FontScheme(CT_FontScheme &b) {
	majorFont = b.majorFont;
	minorFont = b.minorFont;
	extLst = b.extLst;
	name = b.name;
}

CT_FontScheme::CT_FontScheme(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	majorFont = NULL;
	minorFont = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"majorFont") == 0) {
			majorFont.reset(new CT_FontCollection(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"minorFont") == 0) {
			minorFont.reset(new CT_FontCollection(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_FontScheme& CT_FontScheme::operator=(CT_FontScheme &b) {
	majorFont = b.majorFont;
	minorFont = b.minorFont;
	extLst = b.extLst;
	name = b.name;
	return *this;
}

CT_FontScheme::~CT_FontScheme() {
}

std::wstring CT_FontScheme::Xml() {
	return L"";
}

