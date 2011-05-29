#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DArcTo::CT_Path2DArcTo(ST_AdjCoordinate &_wR, ST_AdjCoordinate &_hR,ST_AdjAngle &_stAng,ST_AdjAngle &_swAng) {
	wR = _wR;
	hR = _hR;
	stAng = _stAng;
	swAng = _swAng;
}

CT_Path2DArcTo::CT_Path2DArcTo(CT_Path2DArcTo &b) {
	stAng = b.stAng;
	swAng = b.swAng;
	wR = b.wR;
	hR = b.hR;
}

CT_Path2DArcTo::CT_Path2DArcTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"stAng")) {
		stAng = attributes->getNamedItem(L"stAng")->getNodeValue();
	}
	if (attributes->getNamedItem(L"swAng")) {
		swAng = attributes->getNamedItem(L"swAng")->getNodeValue();
	}
	if (attributes->getNamedItem(L"wR")) {
		wR = attributes->getNamedItem(L"wR")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hR")) {
		hR = attributes->getNamedItem(L"hR")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Path2DArcTo& CT_Path2DArcTo::operator=(CT_Path2DArcTo &b) {
	stAng = b.stAng;
	swAng = b.swAng;
	wR = b.wR;
	hR = b.hR;
	return *this;
}

CT_Path2DArcTo::~CT_Path2DArcTo() {
}

std::wstring CT_Path2DArcTo::Xml() {
	return L"";
}

