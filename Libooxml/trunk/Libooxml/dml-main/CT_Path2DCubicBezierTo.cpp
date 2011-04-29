#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DCubicBezierTo::CT_Path2DCubicBezierTo() {
	pt[0] = NULL;
	pt[1] = NULL;
	pt[2] = NULL;
}

CT_Path2DCubicBezierTo::CT_Path2DCubicBezierTo(CT_Path2DCubicBezierTo &b) {
	pt[0] = b.pt[0];
	pt[1] = b.pt[1];
	pt[2] = b.pt[2];
}

CT_Path2DCubicBezierTo::CT_Path2DCubicBezierTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pt[0] = NULL;
	pt[1] = NULL;
	pt[2] = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt[0]") == 0) {
			pt[0].reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt[1]") == 0) {
			pt[1].reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pt[2]") == 0) {
			pt[2].reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Path2DCubicBezierTo& CT_Path2DCubicBezierTo::operator=(CT_Path2DCubicBezierTo &b) {
	pt[0] = b.pt[0];
	pt[1] = b.pt[1];
	pt[2] = b.pt[2];
	return *this;
}

CT_Path2DCubicBezierTo::~CT_Path2DCubicBezierTo() {
}

std::wstring CT_Path2DCubicBezierTo::Xml() {
	return L"";
}

