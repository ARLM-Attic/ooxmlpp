#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_CustomColorList::CT_CustomColorList() {
	custClr.clear();
}

CT_CustomColorList::CT_CustomColorList(CT_CustomColorList &b) {
	custClr = b.custClr;
}

CT_CustomColorList::CT_CustomColorList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	custClr.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custClr") == 0) {
			std::shared_ptr<CT_CustomColor> temp;
			temp.reset(new CT_CustomColor(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			custClr.push_back(temp);
		}
	}
}

CT_CustomColorList& CT_CustomColorList::operator=(CT_CustomColorList &b) {
	custClr = b.custClr;
	return *this;
}

CT_CustomColorList::~CT_CustomColorList() {
}

std::wstring CT_CustomColorList::Xml() {
	return L"";
}

