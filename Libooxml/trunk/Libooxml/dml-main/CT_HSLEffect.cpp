#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_HSLEffect::CT_HSLEffect() {
}

CT_HSLEffect::CT_HSLEffect(CT_HSLEffect &b) {
	sat = b.sat;
	lum = b.lum;
	hue = b.hue;
}

CT_HSLEffect::CT_HSLEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"sat")) {
		sat = attributes->getNamedItem(L"sat")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lum")) {
		lum = attributes->getNamedItem(L"lum")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hue")) {
		hue = attributes->getNamedItem(L"hue")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_HSLEffect& CT_HSLEffect::operator=(CT_HSLEffect &b) {
	sat = b.sat;
	lum = b.lum;
	hue = b.hue;
	return *this;
}

CT_HSLEffect::~CT_HSLEffect() {
}

std::wstring CT_HSLEffect::Xml() {
	return L"";
}

