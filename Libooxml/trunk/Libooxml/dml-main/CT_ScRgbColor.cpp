#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ScRgbColor::CT_ScRgbColor(ST_Percentage &_r, ST_Percentage &_g, ST_Percentage &_b) {
	colorTransform.clear();
	r = _r;
	g = _g;
	b = _b;
}

CT_ScRgbColor::CT_ScRgbColor(CT_ScRgbColor &b) {
	colorTransform = b.colorTransform;
	r = b.r;
	g = b.g;
	this->b = b.b;
}

CT_ScRgbColor::CT_ScRgbColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform.clear();
	if (attributes->getNamedItem(L"r")) {
		r = attributes->getNamedItem(L"r")->getNodeValue();
	}
	if (attributes->getNamedItem(L"g")) {
		g = attributes->getNamedItem(L"g")->getNodeValue();
	}
	if (attributes->getNamedItem(L"b")) {
		b = attributes->getNamedItem(L"b")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorTransform") == 0) {
			std::shared_ptr<EG_ColorTransform> temp;
			temp.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			colorTransform.push_back(temp);
		}
	}
}

CT_ScRgbColor& CT_ScRgbColor::operator=(CT_ScRgbColor &b) {
	colorTransform = b.colorTransform;
	r = b.r;
	g = b.g;
	b = b.b;
	return *this;
}

CT_ScRgbColor::~CT_ScRgbColor() {
}

std::wstring CT_ScRgbColor::Xml() {
	return L"";
}

