#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GrayscaleEffect::CT_GrayscaleEffect() {
}

CT_GrayscaleEffect::CT_GrayscaleEffect(CT_GrayscaleEffect &b) {
}

CT_GrayscaleEffect::CT_GrayscaleEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GrayscaleEffect& CT_GrayscaleEffect::operator=(CT_GrayscaleEffect &b) {
	return *this;
}

CT_GrayscaleEffect::~CT_GrayscaleEffect() {
}

std::wstring CT_GrayscaleEffect::Xml() {
	return L"";
}

