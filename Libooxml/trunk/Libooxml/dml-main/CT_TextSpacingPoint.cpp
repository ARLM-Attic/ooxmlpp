#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextSpacingPoint::CT_TextSpacingPoint(ST_TextSpacingPoint &_val) {
	val = _val;
}

CT_TextSpacingPoint::CT_TextSpacingPoint(CT_TextSpacingPoint &b) {
	val = b.val;
}

CT_TextSpacingPoint::CT_TextSpacingPoint(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextSpacingPoint& CT_TextSpacingPoint::operator=(CT_TextSpacingPoint &b) {
	val = b.val;
	return *this;
}

CT_TextSpacingPoint::~CT_TextSpacingPoint() {
}

std::wstring CT_TextSpacingPoint::Xml() {
	return L"";
}

