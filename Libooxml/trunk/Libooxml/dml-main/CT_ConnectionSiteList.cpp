#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ConnectionSiteList::CT_ConnectionSiteList() {
	cxn.clear();
}

CT_ConnectionSiteList::CT_ConnectionSiteList(CT_ConnectionSiteList &b) {
	cxn = b.cxn;
}

CT_ConnectionSiteList::CT_ConnectionSiteList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cxn.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cxn") == 0) {
			std::shared_ptr<CT_ConnectionSite> temp;
			temp.reset(new CT_ConnectionSite(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			cxn.push_back(temp);
		}
	}
}

CT_ConnectionSiteList& CT_ConnectionSiteList::operator=(CT_ConnectionSiteList &b) {
	cxn = b.cxn;
	return *this;
}

CT_ConnectionSiteList::~CT_ConnectionSiteList() {
}

std::wstring CT_ConnectionSiteList::Xml() {
	return L"";
}

