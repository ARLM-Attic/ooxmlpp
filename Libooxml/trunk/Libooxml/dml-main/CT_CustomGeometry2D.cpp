#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_CustomGeometry2D::CT_CustomGeometry2D(std::shared_ptr<CT_Path2DList> &_pathLst) {
	ahList = NULL;
	cxnList = NULL;
	avList = NULL;
	gdList = NULL;
	rect = NULL;
	pathLst = _pathLst;
}

CT_CustomGeometry2D::CT_CustomGeometry2D(CT_CustomGeometry2D &b) {
	ahList = b.ahList;
	cxnList = b.cxnList;
	avList = b.avList;
	gdList = b.gdList;
	rect = b.rect;
	pathLst = b.pathLst;
}

CT_CustomGeometry2D::CT_CustomGeometry2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ahList = NULL;
	cxnList = NULL;
	avList = NULL;
	gdList = NULL;
	rect = NULL;
	pathLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ahList") == 0) {
			ahList.reset(new CT_AdjustHandleList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cxnList") == 0) {
			cxnList.reset(new CT_ConnectionSiteList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"avList") == 0) {
			avList.reset(new CT_GeomGuideList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gdList") == 0) {
			gdList.reset(new CT_GeomGuideList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rect") == 0) {
			rect.reset(new CT_GeomRect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pathLst") == 0) {
			pathLst.reset(new CT_Path2DList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_CustomGeometry2D& CT_CustomGeometry2D::operator=(CT_CustomGeometry2D &b) {
	ahList = b.ahList;
	cxnList = b.cxnList;
	avList = b.avList;
	gdList = b.gdList;
	rect = b.rect;
	pathLst = b.pathLst;
	return *this;
}

CT_CustomGeometry2D::~CT_CustomGeometry2D() {
}

std::wstring CT_CustomGeometry2D::Xml() {
	return L"";
}

