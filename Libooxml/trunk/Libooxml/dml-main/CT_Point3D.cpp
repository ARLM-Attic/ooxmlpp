#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Point3D::CT_Point3D(ST_Coordinate &_x, ST_Coordinate &_y, ST_Coordinate &_z) {
	x = _x;
	y = _y;
	z = _z;
}

CT_Point3D::CT_Point3D(CT_Point3D &b) {
	x = b.x;
	y = b.y;
	z = b.z;
}

CT_Point3D::CT_Point3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"x")) {
		x = attributes->getNamedItem(L"x")->getNodeValue();
	}
	if (attributes->getNamedItem(L"y")) {
		y = attributes->getNamedItem(L"y")->getNodeValue();
	}
	if (attributes->getNamedItem(L"z")) {
		z = attributes->getNamedItem(L"z")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Point3D& CT_Point3D::operator=(CT_Point3D &b) {
	x = b.x;
	y = b.y;
	z = b.z;
	return *this;
}

CT_Point3D::~CT_Point3D() {
}

std::wstring CT_Point3D::Xml() {
	return L"";
}

