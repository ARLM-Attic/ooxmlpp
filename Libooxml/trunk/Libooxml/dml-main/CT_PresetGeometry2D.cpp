#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PresetGeometry2D::CT_PresetGeometry2D() {
	avList = NULL;
}

CT_PresetGeometry2D::CT_PresetGeometry2D(CT_PresetGeometry2D &b) {
	avList = b.avList;
	prst = b.prst;
}

CT_PresetGeometry2D::CT_PresetGeometry2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	avList = NULL;
	if (attributes->getNamedItem(L"prst")) {
		prst = attributes->getNamedItem(L"prst")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"avList") == 0) {
			avList.reset(new CT_GeomGuideList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_PresetGeometry2D& CT_PresetGeometry2D::operator=(CT_PresetGeometry2D &b) {
	avList = b.avList;
	prst = b.prst;
	return *this;
}

CT_PresetGeometry2D::~CT_PresetGeometry2D() {
}

std::wstring CT_PresetGeometry2D::Xml() {
	return L"";
}

