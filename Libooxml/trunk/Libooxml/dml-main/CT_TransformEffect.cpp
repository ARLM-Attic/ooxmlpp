#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TransformEffect::CT_TransformEffect() {
	sx = L"100%";
	sy = L"100%";
	kx = 0;
	ky = 0;
	tx = 0;
	ty = 0;
}

CT_TransformEffect::CT_TransformEffect(CT_TransformEffect &b) {
	tx = b.tx;
	ty = b.ty;
	kx = b.kx;
	ky = b.ky;
	sx = b.sx;
	sy = b.sy;
}

CT_TransformEffect::CT_TransformEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	sx = L"100%";
	sy = L"100%";
	kx = 0;
	ky = 0;
	tx = 0;
	ty = 0;
	if (attributes->getNamedItem(L"tx")) {
		tx = attributes->getNamedItem(L"tx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ty")) {
		ty = attributes->getNamedItem(L"ty")->getNodeValue();
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
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TransformEffect& CT_TransformEffect::operator=(CT_TransformEffect &b) {
	tx = b.tx;
	ty = b.ty;
	kx = b.kx;
	ky = b.ky;
	sx = b.sx;
	sy = b.sy;
	return *this;
}

CT_TransformEffect::~CT_TransformEffect() {
}

std::wstring CT_TransformEffect::Xml() {
	return L"";
}

