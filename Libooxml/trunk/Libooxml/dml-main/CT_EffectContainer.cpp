#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EffectContainer::CT_EffectContainer() {
	effect.clear();
}

CT_EffectContainer::CT_EffectContainer(CT_EffectContainer &b) {
	effect = b.effect;
	type = b.type;
	name = b.name;
}

CT_EffectContainer::CT_EffectContainer(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	effect.clear();
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effect") == 0) {
			std::shared_ptr<EG_Effect> temp;
			temp.reset(new EG_Effect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			effect.push_back(temp);
		}
	}
}

CT_EffectContainer& CT_EffectContainer::operator=(CT_EffectContainer &b) {
	effect = b.effect;
	type = b.type;
	name = b.name;
	return *this;
}

CT_EffectContainer::~CT_EffectContainer() {
}

std::wstring CT_EffectContainer::Xml() {
	return L"";
}

