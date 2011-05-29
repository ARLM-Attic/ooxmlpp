#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PresetTextShape::CT_PresetTextShape(ST_ShapeType &_prst) {
	avList = NULL;
	prst = _prst;
}

CT_PresetTextShape::CT_PresetTextShape(CT_PresetTextShape &b) {
	avList = b.avList;
	prst = b.prst;
}

CT_PresetTextShape::CT_PresetTextShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
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

CT_PresetTextShape& CT_PresetTextShape::operator=(CT_PresetTextShape &b) {
	avList = b.avList;
	prst = b.prst;
	return *this;
}

CT_PresetTextShape::~CT_PresetTextShape() {
}

std::wstring CT_PresetTextShape::Xml() {
	return L"";
}

