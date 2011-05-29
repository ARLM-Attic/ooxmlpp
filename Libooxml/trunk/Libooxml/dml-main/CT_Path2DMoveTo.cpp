#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DMoveTo::CT_Path2DMoveTo(std::shared_ptr<CT_AdjPoint2D> &_pt) {
	pt = _pt;
}

CT_Path2DMoveTo::CT_Path2DMoveTo(CT_Path2DMoveTo &b) {
	pt = b.pt;
}

CT_Path2DMoveTo::CT_Path2DMoveTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pt = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt") == 0) {
			pt.reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Path2DMoveTo& CT_Path2DMoveTo::operator=(CT_Path2DMoveTo &b) {
	pt = b.pt;
	return *this;
}

CT_Path2DMoveTo::~CT_Path2DMoveTo() {
}

std::wstring CT_Path2DMoveTo::Xml() {
	return L"";
}

