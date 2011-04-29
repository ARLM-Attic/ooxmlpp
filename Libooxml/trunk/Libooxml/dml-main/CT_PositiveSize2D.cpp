#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PositiveSize2D::CT_PositiveSize2D() {
}

CT_PositiveSize2D::CT_PositiveSize2D(CT_PositiveSize2D &b) {
	cx = b.cx;
	cy = b.cy;
}

CT_PositiveSize2D::CT_PositiveSize2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"cx")) {
		cx = attributes->getNamedItem(L"cx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"cy")) {
		cy = attributes->getNamedItem(L"cy")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_PositiveSize2D& CT_PositiveSize2D::operator=(CT_PositiveSize2D &b) {
	cx = b.cx;
	cy = b.cy;
	return *this;
}

CT_PositiveSize2D::~CT_PositiveSize2D() {
}

std::wstring CT_PositiveSize2D::Xml() {
	return L"";
}

