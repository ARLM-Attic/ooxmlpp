#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BackgroundFillStyleList::CT_BackgroundFillStyleList() {
	fillProperties.clear();
}

CT_BackgroundFillStyleList::CT_BackgroundFillStyleList(CT_BackgroundFillStyleList &b) {
	fillProperties = b.fillProperties;
}

CT_BackgroundFillStyleList::CT_BackgroundFillStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fillProperties.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.push_back(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_BackgroundFillStyleList& CT_BackgroundFillStyleList::operator=(CT_BackgroundFillStyleList &b) {
	fillProperties = b.fillProperties;
	return *this;
}

CT_BackgroundFillStyleList::~CT_BackgroundFillStyleList() {
}

std::wstring CT_BackgroundFillStyleList::Xml() {
	return L"";
}

