#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PolarAdjustHandle::CT_PolarAdjustHandle() {
	pos = NULL;
}

CT_PolarAdjustHandle::CT_PolarAdjustHandle(CT_PolarAdjustHandle &b) {
	pos = b.pos;
	minAng = b.minAng;
	maxAng = b.maxAng;
	minR = b.minR;
	maxR = b.maxR;
	gdRefR = b.gdRefR;
	gdRefAng = b.gdRefAng;
}

CT_PolarAdjustHandle::CT_PolarAdjustHandle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pos = NULL;
	if (attributes->getNamedItem(L"minAng")) {
		minAng = attributes->getNamedItem(L"minAng")->getNodeValue();
	}
	if (attributes->getNamedItem(L"maxAng")) {
		maxAng = attributes->getNamedItem(L"maxAng")->getNodeValue();
	}
	if (attributes->getNamedItem(L"minR")) {
		minR = attributes->getNamedItem(L"minR")->getNodeValue();
	}
	if (attributes->getNamedItem(L"maxR")) {
		maxR = attributes->getNamedItem(L"maxR")->getNodeValue();
	}
	if (attributes->getNamedItem(L"gdRefR")) {
		gdRefR = attributes->getNamedItem(L"gdRefR")->getNodeValue();
	}
	if (attributes->getNamedItem(L"gdRefAng")) {
		gdRefAng = attributes->getNamedItem(L"gdRefAng")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pos") == 0) {
			pos.reset(new CT_AdjPoint2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_PolarAdjustHandle& CT_PolarAdjustHandle::operator=(CT_PolarAdjustHandle &b) {
	pos = b.pos;
	minAng = b.minAng;
	maxAng = b.maxAng;
	minR = b.minR;
	maxR = b.maxR;
	gdRefR = b.gdRefR;
	gdRefAng = b.gdRefAng;
	return *this;
}

CT_PolarAdjustHandle::~CT_PolarAdjustHandle() {
}

std::wstring CT_PolarAdjustHandle::Xml() {
	return L"";
}

