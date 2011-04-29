#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PresetColor::CT_PresetColor() {
	colorTransform = NULL;
}

CT_PresetColor::CT_PresetColor(CT_PresetColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
}

CT_PresetColor::CT_PresetColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform = NULL;
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorTransform") == 0) {
			colorTransform.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_PresetColor& CT_PresetColor::operator=(CT_PresetColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
	return *this;
}

CT_PresetColor::~CT_PresetColor() {
}

std::wstring CT_PresetColor::Xml() {
	return L"";
}

