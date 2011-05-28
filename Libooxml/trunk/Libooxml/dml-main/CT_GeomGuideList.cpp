#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GeomGuideList::CT_GeomGuideList() {
	gd.clear();
}

CT_GeomGuideList::CT_GeomGuideList(CT_GeomGuideList &b) {
	gd = b.gd;
}

CT_GeomGuideList::CT_GeomGuideList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	gd.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gd") == 0) {
			std::shared_ptr<CT_GeomGuide> temp;
			temp.reset(new CT_GeomGuide(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			gd.push_back(temp);
		}
	}
}

CT_GeomGuideList& CT_GeomGuideList::operator=(CT_GeomGuideList &b) {
	gd = b.gd;
	return *this;
}

CT_GeomGuideList::~CT_GeomGuideList() {
}

std::wstring CT_GeomGuideList::Xml() {
	return L"";
}

