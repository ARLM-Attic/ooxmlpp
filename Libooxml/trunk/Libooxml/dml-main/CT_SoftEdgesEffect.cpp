#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_SoftEdgesEffect::CT_SoftEdgesEffect(ST_PositiveCoordinate &_rad) {
	rad = _rad;
}

CT_SoftEdgesEffect::CT_SoftEdgesEffect(CT_SoftEdgesEffect &b) {
	rad = b.rad;
}

CT_SoftEdgesEffect::CT_SoftEdgesEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"rad")) {
		rad = attributes->getNamedItem(L"rad")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_SoftEdgesEffect& CT_SoftEdgesEffect::operator=(CT_SoftEdgesEffect &b) {
	rad = b.rad;
	return *this;
}

CT_SoftEdgesEffect::~CT_SoftEdgesEffect() {
}

std::wstring CT_SoftEdgesEffect::Xml() {
	return L"";
}

