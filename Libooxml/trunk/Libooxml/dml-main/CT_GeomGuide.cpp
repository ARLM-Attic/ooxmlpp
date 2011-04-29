#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GeomGuide::CT_GeomGuide() {
}

CT_GeomGuide::CT_GeomGuide(CT_GeomGuide &b) {
	fmla = b.fmla;
	name = b.name;
}

CT_GeomGuide::CT_GeomGuide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"fmla")) {
		fmla = attributes->getNamedItem(L"fmla")->getNodeValue();
	}
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GeomGuide& CT_GeomGuide::operator=(CT_GeomGuide &b) {
	fmla = b.fmla;
	name = b.name;
	return *this;
}

CT_GeomGuide::~CT_GeomGuide() {
}

std::wstring CT_GeomGuide::Xml() {
	return L"";
}

