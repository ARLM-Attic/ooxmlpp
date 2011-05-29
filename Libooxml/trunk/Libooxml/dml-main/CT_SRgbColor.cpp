#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_SRgbColor::CT_SRgbColor(officeDocument::sharedTypes::ST_HexColorRGB &_val) {
	colorTransform.clear();
}

CT_SRgbColor::CT_SRgbColor(CT_SRgbColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
}

CT_SRgbColor::CT_SRgbColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform.clear();
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorTransform") == 0) {
			std::shared_ptr<EG_ColorTransform> temp;
			temp.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			colorTransform.push_back(temp);
		}
	}
}

CT_SRgbColor& CT_SRgbColor::operator=(CT_SRgbColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
	return *this;
}

CT_SRgbColor::~CT_SRgbColor() {
}

std::wstring CT_SRgbColor::Xml() {
	return L"";
}

