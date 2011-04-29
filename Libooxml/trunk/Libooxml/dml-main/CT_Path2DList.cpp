#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DList::CT_Path2DList() {
	path = NULL;
}

CT_Path2DList::CT_Path2DList(CT_Path2DList &b) {
	path = b.path;
}

CT_Path2DList::CT_Path2DList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	path = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"path") == 0) {
			path.reset(new CT_Path2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Path2DList& CT_Path2DList::operator=(CT_Path2DList &b) {
	path = b.path;
	return *this;
}

CT_Path2DList::~CT_Path2DList() {
}

std::wstring CT_Path2DList::Xml() {
	return L"";
}

