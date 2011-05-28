#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ClipboardStyleSheet::CT_ClipboardStyleSheet(std::shared_ptr<CT_BaseStyles> &_themeElements, std::shared_ptr<CT_ColorMapping> &_clrMap) {
	themeElements = _themeElements;
	clrMap = _clrMap;
}

CT_ClipboardStyleSheet::CT_ClipboardStyleSheet(CT_ClipboardStyleSheet &b) {
	themeElements = b.themeElements;
	clrMap = b.clrMap;
}

CT_ClipboardStyleSheet::CT_ClipboardStyleSheet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	themeElements = NULL;
	clrMap = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"themeElements") == 0) {
			themeElements.reset(new CT_BaseStyles(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMap") == 0) {
			clrMap.reset(new CT_ColorMapping(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ClipboardStyleSheet& CT_ClipboardStyleSheet::operator=(CT_ClipboardStyleSheet &b) {
	themeElements = b.themeElements;
	clrMap = b.clrMap;
	return *this;
}

CT_ClipboardStyleSheet::~CT_ClipboardStyleSheet() {
}

std::wstring CT_ClipboardStyleSheet::Xml() {
	return L"";
}

