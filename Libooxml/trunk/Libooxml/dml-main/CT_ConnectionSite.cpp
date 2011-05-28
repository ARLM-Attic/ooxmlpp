#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ConnectionSite::CT_ConnectionSite(std::shared_ptr<CT_AdjPoint2D> &_pos,ST_AdjAngle &_ang): pos(_pos), ang(_ang) {
}

CT_ConnectionSite::CT_ConnectionSite(CT_ConnectionSite &b) {
	pos = b.pos;
	ang = b.ang;
}

CT_ConnectionSite::CT_ConnectionSite(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pos = NULL;
	if (attributes->getNamedItem(L"ang")) {
		ang = attributes->getNamedItem(L"ang")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pos") == 0) {
			pos.reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ConnectionSite& CT_ConnectionSite::operator=(CT_ConnectionSite &b) {
	pos = b.pos;
	ang = b.ang;
	return *this;
}

CT_ConnectionSite::~CT_ConnectionSite() {
}

std::wstring CT_ConnectionSite::Xml() {
	return L"";
}

