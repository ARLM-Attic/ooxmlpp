#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EffectStyleList::CT_EffectStyleList() {
	effectStyle = NULL;
}

CT_EffectStyleList::CT_EffectStyleList(CT_EffectStyleList &b) {
	effectStyle = b.effectStyle;
}

CT_EffectStyleList::CT_EffectStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	effectStyle = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectStyle") == 0) {
			effectStyle.reset(new CT_EffectStyleItem(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_EffectStyleList& CT_EffectStyleList::operator=(CT_EffectStyleList &b) {
	effectStyle = b.effectStyle;
	return *this;
}

CT_EffectStyleList::~CT_EffectStyleList() {
}

std::wstring CT_EffectStyleList::Xml() {
	return L"";
}

