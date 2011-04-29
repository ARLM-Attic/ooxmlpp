#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_XYAdjustHandle::CT_XYAdjustHandle() {
	pos = NULL;
}

CT_XYAdjustHandle::CT_XYAdjustHandle(CT_XYAdjustHandle &b) {
	pos = b.pos;
	minX = b.minX;
	maxX = b.maxX;
	minY = b.minY;
	maxY = b.maxY;
	gdRefX = b.gdRefX;
	gdRefY = b.gdRefY;
}

CT_XYAdjustHandle::CT_XYAdjustHandle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pos = NULL;
	if (attributes->getNamedItem(L"minX")) {
		minX = attributes->getNamedItem(L"minX")->getNodeValue();
	}
	if (attributes->getNamedItem(L"maxX")) {
		maxX = attributes->getNamedItem(L"maxX")->getNodeValue();
	}
	if (attributes->getNamedItem(L"minY")) {
		minY = attributes->getNamedItem(L"minY")->getNodeValue();
	}
	if (attributes->getNamedItem(L"maxY")) {
		maxY = attributes->getNamedItem(L"maxY")->getNodeValue();
	}
	if (attributes->getNamedItem(L"gdRefX")) {
		gdRefX = attributes->getNamedItem(L"gdRefX")->getNodeValue();
	}
	if (attributes->getNamedItem(L"gdRefY")) {
		gdRefY = attributes->getNamedItem(L"gdRefY")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pos") == 0) {
			pos.reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_XYAdjustHandle& CT_XYAdjustHandle::operator=(CT_XYAdjustHandle &b) {
	pos = b.pos;
	minX = b.minX;
	maxX = b.maxX;
	minY = b.minY;
	maxY = b.maxY;
	gdRefX = b.gdRefX;
	gdRefY = b.gdRefY;
	return *this;
}

CT_XYAdjustHandle::~CT_XYAdjustHandle() {
}

std::wstring CT_XYAdjustHandle::Xml() {
	return L"";
}

