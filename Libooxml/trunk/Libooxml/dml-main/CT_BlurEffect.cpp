#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BlurEffect::CT_BlurEffect(): rad(0), grow(true) {
}

CT_BlurEffect::CT_BlurEffect(CT_BlurEffect &b) {
	grow = b.grow;
	rad = b.rad;
}

CT_BlurEffect::CT_BlurEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"grow")) {
		grow = attributes->getNamedItem(L"grow")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rad")) {
		rad = attributes->getNamedItem(L"rad")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_BlurEffect& CT_BlurEffect::operator=(CT_BlurEffect &b) {
	grow = b.grow;
	rad = b.rad;
	return *this;
}

CT_BlurEffect::~CT_BlurEffect() {
}

std::wstring CT_BlurEffect::Xml() {
	return L"";
}

