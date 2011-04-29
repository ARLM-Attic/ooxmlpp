#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Vector3D::CT_Vector3D() {
}

CT_Vector3D::CT_Vector3D(CT_Vector3D &b) {
	dx = b.dx;
	dy = b.dy;
	dz = b.dz;
}

CT_Vector3D::CT_Vector3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"dx")) {
		dx = attributes->getNamedItem(L"dx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dy")) {
		dy = attributes->getNamedItem(L"dy")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dz")) {
		dz = attributes->getNamedItem(L"dz")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Vector3D& CT_Vector3D::operator=(CT_Vector3D &b) {
	dx = b.dx;
	dy = b.dy;
	dz = b.dz;
	return *this;
}

CT_Vector3D::~CT_Vector3D() {
}

std::wstring CT_Vector3D::Xml() {
	return L"";
}

