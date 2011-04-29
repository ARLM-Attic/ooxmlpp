#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_HslColor::CT_HslColor() {
	colorTransform = NULL;
}

CT_HslColor::CT_HslColor(CT_HslColor &b) {
	colorTransform = b.colorTransform;
	sat = b.sat;
	lum = b.lum;
	hue = b.hue;
}

CT_HslColor::CT_HslColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform = NULL;
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
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorTransform") == 0) {
			colorTransform.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_HslColor& CT_HslColor::operator=(CT_HslColor &b) {
	colorTransform = b.colorTransform;
	sat = b.sat;
	lum = b.lum;
	hue = b.hue;
	return *this;
}

CT_HslColor::~CT_HslColor() {
}

std::wstring CT_HslColor::Xml() {
	return L"";
}

