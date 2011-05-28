#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FillStyleList::CT_FillStyleList() {
	fillProperties.clear();
}

CT_FillStyleList::CT_FillStyleList(CT_FillStyleList &b) {
	fillProperties = b.fillProperties;
}

CT_FillStyleList::CT_FillStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fillProperties.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			std::shared_ptr<EG_FillProperties> temp;
			temp.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			fillProperties.push_back(temp);
		}
	}
}

CT_FillStyleList& CT_FillStyleList::operator=(CT_FillStyleList &b) {
	fillProperties = b.fillProperties;
	return *this;
}

CT_FillStyleList::~CT_FillStyleList() {
}

std::wstring CT_FillStyleList::Xml() {
	return L"";
}

