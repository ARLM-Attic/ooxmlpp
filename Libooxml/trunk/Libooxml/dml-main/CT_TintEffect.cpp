#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TintEffect::CT_TintEffect() {
	hue = 0;
	amt = L"0%";
}

CT_TintEffect::CT_TintEffect(CT_TintEffect &b) {
	amt = b.amt;
	hue = b.hue;
}

CT_TintEffect::CT_TintEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	hue = 0;
	amt = L"0%";
	if (attributes->getNamedItem(L"amt")) {
		amt = attributes->getNamedItem(L"amt")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hue")) {
		hue = attributes->getNamedItem(L"hue")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TintEffect& CT_TintEffect::operator=(CT_TintEffect &b) {
	amt = b.amt;
	hue = b.hue;
	return *this;
}

CT_TintEffect::~CT_TintEffect() {
}

std::wstring CT_TintEffect::Xml() {
	return L"";
}

