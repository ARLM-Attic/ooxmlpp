#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EffectProperties::CT_EffectProperties() {
	effectProperties = NULL;
}

CT_EffectProperties::CT_EffectProperties(CT_EffectProperties &b) {
	effectProperties = b.effectProperties;
}

CT_EffectProperties::CT_EffectProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	effectProperties = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_EffectProperties& CT_EffectProperties::operator=(CT_EffectProperties &b) {
	effectProperties = b.effectProperties;
	return *this;
}

CT_EffectProperties::~CT_EffectProperties() {
}

std::wstring CT_EffectProperties::Xml() {
	return L"";
}

