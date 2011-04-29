#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EffectReference::CT_EffectReference() {
}

CT_EffectReference::CT_EffectReference(CT_EffectReference &b) {
	ref = b.ref;
}

CT_EffectReference::CT_EffectReference(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"ref")) {
		ref = attributes->getNamedItem(L"ref")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_EffectReference& CT_EffectReference::operator=(CT_EffectReference &b) {
	ref = b.ref;
	return *this;
}

CT_EffectReference::~CT_EffectReference() {
}

std::wstring CT_EffectReference::Xml() {
	return L"";
}

