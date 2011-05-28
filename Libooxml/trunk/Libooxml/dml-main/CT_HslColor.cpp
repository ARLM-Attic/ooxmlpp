#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_HslColor::CT_HslColor(ST_PositiveFixedAngle &_hue, ST_Percentage &_sat,	ST_Percentage &_lum) {
	colorTransform.clear();
	hue = _hue;
	sat = _sat;
	lum = _lum;
}

CT_HslColor::CT_HslColor(CT_HslColor &b) {
	colorTransform = b.colorTransform;
	sat = b.sat;
	lum = b.lum;
	hue = b.hue;
}

CT_HslColor::CT_HslColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform.clear();
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
			std::shared_ptr<EG_ColorTransform> temp;
			temp.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			colorTransform.push_back(temp);
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

