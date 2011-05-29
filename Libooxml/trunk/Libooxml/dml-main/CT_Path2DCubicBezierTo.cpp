#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DCubicBezierTo::CT_Path2DCubicBezierTo(std::shared_ptr<CT_AdjPoint2D> &pt1,std::shared_ptr<CT_AdjPoint2D> &pt2,std::shared_ptr<CT_AdjPoint2D> &pt3) {
	pt[0] = pt1;
	pt[1] = pt2;
	pt[2] = pt3;
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

