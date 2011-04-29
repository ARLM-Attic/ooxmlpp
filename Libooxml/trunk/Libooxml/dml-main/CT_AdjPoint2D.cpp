#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AdjPoint2D::CT_AdjPoint2D() {
}

CT_AdjPoint2D::CT_AdjPoint2D(CT_AdjPoint2D &b) {
	x = b.x;
	y = b.y;
}

CT_AdjPoint2D::CT_AdjPoint2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"x")) {
		x = attributes->getNamedItem(L"x")->getNodeValue();
	}
	if (attributes->getNamedItem(L"y")) {
		y = attributes->getNamedItem(L"y")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AdjPoint2D& CT_AdjPoint2D::operator=(CT_AdjPoint2D &b) {
	x = b.x;
	y = b.y;
	return *this;
}

CT_AdjPoint2D::~CT_AdjPoint2D() {
}

std::wstring CT_AdjPoint2D::Xml() {
	return L"";
}

