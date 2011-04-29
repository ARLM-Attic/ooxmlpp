#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PresetShadowEffect::CT_PresetShadowEffect() {
	colorChoice = NULL;
}

CT_PresetShadowEffect::CT_PresetShadowEffect(CT_PresetShadowEffect &b) {
	colorChoice = b.colorChoice;
	dist = b.dist;
	dir = b.dir;
	prst = b.prst;
}

CT_PresetShadowEffect::CT_PresetShadowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"dist")) {
		dist = attributes->getNamedItem(L"dist")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	if (attributes->getNamedItem(L"prst")) {
		prst = attributes->getNamedItem(L"prst")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_PresetShadowEffect& CT_PresetShadowEffect::operator=(CT_PresetShadowEffect &b) {
	colorChoice = b.colorChoice;
	dist = b.dist;
	dir = b.dir;
	prst = b.prst;
	return *this;
}

CT_PresetShadowEffect::~CT_PresetShadowEffect() {
}

std::wstring CT_PresetShadowEffect::Xml() {
	return L"";
}

