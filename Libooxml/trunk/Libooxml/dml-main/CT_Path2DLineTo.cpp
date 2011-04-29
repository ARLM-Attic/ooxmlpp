#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DLineTo::CT_Path2DLineTo() {
	pt = NULL;
}

CT_Path2DLineTo::CT_Path2DLineTo(CT_Path2DLineTo &b) {
	pt = b.pt;
}

CT_Path2DLineTo::CT_Path2DLineTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pt = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt") == 0) {
			pt.reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Path2DLineTo& CT_Path2DLineTo::operator=(CT_Path2DLineTo &b) {
	pt = b.pt;
	return *this;
}

CT_Path2DLineTo::~CT_Path2DLineTo() {
}

std::wstring CT_Path2DLineTo::Xml() {
	return L"";
}

