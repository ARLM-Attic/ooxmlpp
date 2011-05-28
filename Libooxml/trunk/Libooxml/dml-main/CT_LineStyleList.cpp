#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LineStyleList::CT_LineStyleList() {
	ln.clear();
}

CT_LineStyleList::CT_LineStyleList(CT_LineStyleList &b) {
	ln = b.ln;
}

CT_LineStyleList::CT_LineStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ln.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ln") == 0) {
			std::shared_ptr<CT_LineProperties> temp;
			temp.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			ln.push_back(temp);
		}
	}
}

CT_LineStyleList& CT_LineStyleList::operator=(CT_LineStyleList &b) {
	ln = b.ln;
	return *this;
}

CT_LineStyleList::~CT_LineStyleList() {
}

std::wstring CT_LineStyleList::Xml() {
	return L"";
}

