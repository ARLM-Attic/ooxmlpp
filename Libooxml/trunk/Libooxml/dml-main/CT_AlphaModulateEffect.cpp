#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaModulateEffect::CT_AlphaModulateEffect() {
	cont = NULL;
}

CT_AlphaModulateEffect::CT_AlphaModulateEffect(CT_AlphaModulateEffect &b) {
	cont = b.cont;
}

CT_AlphaModulateEffect::CT_AlphaModulateEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cont = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cont") == 0) {
			cont.reset(new CT_EffectContainer(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_AlphaModulateEffect& CT_AlphaModulateEffect::operator=(CT_AlphaModulateEffect &b) {
	cont = b.cont;
	return *this;
}

CT_AlphaModulateEffect::~CT_AlphaModulateEffect() {
}

std::wstring CT_AlphaModulateEffect::Xml() {
	return L"";
}

