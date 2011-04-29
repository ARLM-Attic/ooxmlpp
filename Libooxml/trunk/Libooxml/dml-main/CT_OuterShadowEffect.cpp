#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_OuterShadowEffect::CT_OuterShadowEffect() {
	colorChoice = NULL;
}

CT_OuterShadowEffect::CT_OuterShadowEffect(CT_OuterShadowEffect &b) {
	colorChoice = b.colorChoice;
	rotWithShape = b.rotWithShape;
	kx = b.kx;
	ky = b.ky;
	sx = b.sx;
	sy = b.sy;
	blurRad = b.blurRad;
	dist = b.dist;
	dir = b.dir;
	algn = b.algn;
}

CT_OuterShadowEffect::CT_OuterShadowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"rotWithShape")) {
		rotWithShape = attributes->getNamedItem(L"rotWithShape")->getNodeValue();
	}
	if (attributes->getNamedItem(L"kx")) {
		kx = attributes->getNamedItem(L"kx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ky")) {
		ky = attributes->getNamedItem(L"ky")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sx")) {
		sx = attributes->getNamedItem(L"sx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sy")) {
		sy = attributes->getNamedItem(L"sy")->getNodeValue();
	}
	if (attributes->getNamedItem(L"blurRad")) {
		blurRad = attributes->getNamedItem(L"blurRad")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dist")) {
		dist = attributes->getNamedItem(L"dist")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algn")) {
		algn = attributes->getNamedItem(L"algn")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_OuterShadowEffect& CT_OuterShadowEffect::operator=(CT_OuterShadowEffect &b) {
	colorChoice = b.colorChoice;
	rotWithShape = b.rotWithShape;
	kx = b.kx;
	ky = b.ky;
	sx = b.sx;
	sy = b.sy;
	blurRad = b.blurRad;
	dist = b.dist;
	dir = b.dir;
	algn = b.algn;
	return *this;
}

CT_OuterShadowEffect::~CT_OuterShadowEffect() {
}

std::wstring CT_OuterShadowEffect::Xml() {
	return L"";
}

