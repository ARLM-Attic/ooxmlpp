#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_InnerShadowEffect::CT_InnerShadowEffect(std::shared_ptr<EG_ColorChoice> &_colorChoice) {
	colorChoice = NULL;
	blurRad = 0;
	dist = 0;
	dir = 0;
}

CT_InnerShadowEffect::CT_InnerShadowEffect(CT_InnerShadowEffect &b) {
	colorChoice = b.colorChoice;
	blurRad = b.blurRad;
	dist = b.dist;
	dir = b.dir;
}

CT_InnerShadowEffect::CT_InnerShadowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"blurRad")) {
		blurRad = attributes->getNamedItem(L"blurRad")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dist")) {
		dist = attributes->getNamedItem(L"dist")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_InnerShadowEffect& CT_InnerShadowEffect::operator=(CT_InnerShadowEffect &b) {
	colorChoice = b.colorChoice;
	blurRad = b.blurRad;
	dist = b.dist;
	dir = b.dir;
	return *this;
}

CT_InnerShadowEffect::~CT_InnerShadowEffect() {
}

std::wstring CT_InnerShadowEffect::Xml() {
	return L"";
}

