#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Point2D::CT_Point2D() {
}

CT_Point2D::CT_Point2D(CT_Point2D &b) {
	x = b.x;
	y = b.y;
}

CT_Point2D::CT_Point2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"x")) {
		x = attributes->getNamedItem(L"x")->getNodeValue();
	}
	if (attributes->getNamedItem(L"y")) {
		y = attributes->getNamedItem(L"y")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Point2D& CT_Point2D::operator=(CT_Point2D &b) {
	x = b.x;
	y = b.y;
	return *this;
}

CT_Point2D::~CT_Point2D() {
}

std::wstring CT_Point2D::Xml() {
	return L"";
}

