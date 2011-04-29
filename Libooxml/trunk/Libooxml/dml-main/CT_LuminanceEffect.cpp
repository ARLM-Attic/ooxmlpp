#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LuminanceEffect::CT_LuminanceEffect() {
}

CT_LuminanceEffect::CT_LuminanceEffect(CT_LuminanceEffect &b) {
	bright = b.bright;
	contrast = b.contrast;
}

CT_LuminanceEffect::CT_LuminanceEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"bright")) {
		bright = attributes->getNamedItem(L"bright")->getNodeValue();
	}
	if (attributes->getNamedItem(L"contrast")) {
		contrast = attributes->getNamedItem(L"contrast")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_LuminanceEffect& CT_LuminanceEffect::operator=(CT_LuminanceEffect &b) {
	bright = b.bright;
	contrast = b.contrast;
	return *this;
}

CT_LuminanceEffect::~CT_LuminanceEffect() {
}

std::wstring CT_LuminanceEffect::Xml() {
	return L"";
}

