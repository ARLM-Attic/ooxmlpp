#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ReflectionEffect::CT_ReflectionEffect() {
	blurRad = 0;
	stA = L"100%";
	stPos = L"0%";
	endA = L"0%";
	endPos = L"100%";
	dist = 0;
	dir = 0;
	fadeDir = 5400000;
	sx = L"100%";
	sy = L"100%";
	kx = 0;
	ky = 0;
	algn = ST_RectAlignment::b;
	rotWithShape = true;
}

CT_ReflectionEffect::CT_ReflectionEffect(CT_ReflectionEffect &b) {
	rotWithShape = b.rotWithShape;
	kx = b.kx;
	ky = b.ky;
	sx = b.sx;
	sy = b.sy;
	blurRad = b.blurRad;
	dist = b.dist;
	dir = b.dir;
	fadeDir = b.fadeDir;
	stA = b.stA;
	stPos = b.stPos;
	endA = b.endA;
	endPos = b.endPos;
	algn = b.algn;
}

CT_ReflectionEffect::CT_ReflectionEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	blurRad = 0;
	stA = L"100%";
	stPos = L"0%";
	endA = L"0%";
	endPos = L"100%";
	dist = 0;
	dir = 0;
	fadeDir = 5400000;
	sx = L"100%";
	sy = L"100%";
	kx = 0;
	ky = 0;
	algn = ST_RectAlignment::b;
	rotWithShape = true;
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
	if (attributes->getNamedItem(L"fadeDir")) {
		fadeDir = attributes->getNamedItem(L"fadeDir")->getNodeValue();
	}
	if (attributes->getNamedItem(L"stA")) {
		stA = attributes->getNamedItem(L"stA")->getNodeValue();
	}
	if (attributes->getNamedItem(L"stPos")) {
		stPos = attributes->getNamedItem(L"stPos")->getNodeValue();
	}
	if (attributes->getNamedItem(L"endA")) {
		endA = attributes->getNamedItem(L"endA")->getNodeValue();
	}
	if (attributes->getNamedItem(L"endPos")) {
		endPos = attributes->getNamedItem(L"endPos")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algn")) {
		algn = attributes->getNamedItem(L"algn")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_ReflectionEffect& CT_ReflectionEffect::operator=(CT_ReflectionEffect &b) {
	rotWithShape = b.rotWithShape;
	kx = b.kx;
	ky = b.ky;
	sx = b.sx;
	sy = b.sy;
	blurRad = b.blurRad;
	dist = b.dist;
	dir = b.dir;
	fadeDir = b.fadeDir;
	stA = b.stA;
	stPos = b.stPos;
	endA = b.endA;
	endPos = b.endPos;
	algn = b.algn;
	return *this;
}

CT_ReflectionEffect::~CT_ReflectionEffect() {
}

std::wstring CT_ReflectionEffect::Xml() {
	return L"";
}

