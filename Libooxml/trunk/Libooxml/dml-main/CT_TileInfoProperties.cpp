#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TileInfoProperties::CT_TileInfoProperties() {
}

CT_TileInfoProperties::CT_TileInfoProperties(CT_TileInfoProperties &b) {
	tx = b.tx;
	ty = b.ty;
	sx = b.sx;
	sy = b.sy;
	algn = b.algn;
	flip = b.flip;
}

CT_TileInfoProperties::CT_TileInfoProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"tx")) {
		tx = attributes->getNamedItem(L"tx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ty")) {
		ty = attributes->getNamedItem(L"ty")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sx")) {
		sx = attributes->getNamedItem(L"sx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sy")) {
		sy = attributes->getNamedItem(L"sy")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algn")) {
		algn = attributes->getNamedItem(L"algn")->getNodeValue();
	}
	if (attributes->getNamedItem(L"flip")) {
		flip = attributes->getNamedItem(L"flip")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TileInfoProperties& CT_TileInfoProperties::operator=(CT_TileInfoProperties &b) {
	tx = b.tx;
	ty = b.ty;
	sx = b.sx;
	sy = b.sy;
	algn = b.algn;
	flip = b.flip;
	return *this;
}

CT_TileInfoProperties::~CT_TileInfoProperties() {
}

std::wstring CT_TileInfoProperties::Xml() {
	return L"";
}

