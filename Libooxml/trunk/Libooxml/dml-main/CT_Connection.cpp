#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Connection::CT_Connection() {
}

CT_Connection::CT_Connection(CT_Connection &b) {
	id = b.id;
	idx = b.idx;
}

CT_Connection::CT_Connection(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"idx")) {
		idx = attributes->getNamedItem(L"idx")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Connection& CT_Connection::operator=(CT_Connection &b) {
	id = b.id;
	idx = b.idx;
	return *this;
}

CT_Connection::~CT_Connection() {
}

std::wstring CT_Connection::Xml() {
	return L"";
}

