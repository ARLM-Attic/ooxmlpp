#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BlendEffect::CT_BlendEffect(std::shared_ptr<CT_EffectContainer> &_cont,ST_BlendMode &_blend) : cont(_cont), blend(_blend) {
}

CT_BlendEffect::CT_BlendEffect(CT_BlendEffect &b) {
	cont = b.cont;
	blend = b.blend;
}

CT_BlendEffect::CT_BlendEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cont = NULL;
	if (attributes->getNamedItem(L"blend")) {
		blend = attributes->getNamedItem(L"blend")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cont") == 0) {
			cont.reset(new CT_EffectContainer(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_BlendEffect& CT_BlendEffect::operator=(CT_BlendEffect &b) {
	cont = b.cont;
	blend = b.blend;
	return *this;
}

CT_BlendEffect::~CT_BlendEffect() {
}

std::wstring CT_BlendEffect::Xml() {
	return L"";
}

