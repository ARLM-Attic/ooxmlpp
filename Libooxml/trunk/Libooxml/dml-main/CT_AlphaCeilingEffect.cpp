#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaCeilingEffect::CT_AlphaCeilingEffect() {
}

CT_AlphaCeilingEffect::CT_AlphaCeilingEffect(CT_AlphaCeilingEffect &b) {
}

CT_AlphaCeilingEffect::CT_AlphaCeilingEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AlphaCeilingEffect& CT_AlphaCeilingEffect::operator=(CT_AlphaCeilingEffect &b) {
	return *this;
}

CT_AlphaCeilingEffect::~CT_AlphaCeilingEffect() {
}

std::wstring CT_AlphaCeilingEffect::Xml() {
	return L"";
}

