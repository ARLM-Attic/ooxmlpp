#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DQuadBezierTo::CT_Path2DQuadBezierTo() {
	pt[0] = NULL;
	pt[1] = NULL;
}

CT_Path2DQuadBezierTo::CT_Path2DQuadBezierTo(CT_Path2DQuadBezierTo &b) {
	pt[0] = b.pt[0];
	pt[1] = b.pt[1];
}

CT_Path2DQuadBezierTo::CT_Path2DQuadBezierTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pt[0] = NULL;
	pt[1] = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt[0]") == 0) {
			pt[0].reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt[1]") == 0) {
			pt[1].reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Path2DQuadBezierTo& CT_Path2DQuadBezierTo::operator=(CT_Path2DQuadBezierTo &b) {
	pt[0] = b.pt[0];
	pt[1] = b.pt[1];
	return *this;
}

CT_Path2DQuadBezierTo::~CT_Path2DQuadBezierTo() {
}

std::wstring CT_Path2DQuadBezierTo::Xml() {
	return L"";
}

