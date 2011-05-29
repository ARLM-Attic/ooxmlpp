#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PositiveFixedAngle::CT_PositiveFixedAngle(ST_PositiveFixedAngle &_val) {
	val = _val;
}

CT_PositiveFixedAngle::CT_PositiveFixedAngle(CT_PositiveFixedAngle &b) {
	val = b.val;
}

CT_PositiveFixedAngle::CT_PositiveFixedAngle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_PositiveFixedAngle& CT_PositiveFixedAngle::operator=(CT_PositiveFixedAngle &b) {
	val = b.val;
	return *this;
}

CT_PositiveFixedAngle::~CT_PositiveFixedAngle() {
}

std::wstring CT_PositiveFixedAngle::Xml() {
	return L"";
}

