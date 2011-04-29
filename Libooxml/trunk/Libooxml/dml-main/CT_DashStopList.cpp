#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_DashStopList::CT_DashStopList() {
	ds = NULL;
}

CT_DashStopList::CT_DashStopList(CT_DashStopList &b) {
	ds = b.ds;
}

CT_DashStopList::CT_DashStopList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ds = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ds") == 0) {
			ds.reset(new CT_DashStop(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_DashStopList& CT_DashStopList::operator=(CT_DashStopList &b) {
	ds = b.ds;
	return *this;
}

CT_DashStopList::~CT_DashStopList() {
}

std::wstring CT_DashStopList::Xml() {
	return L"";
}

