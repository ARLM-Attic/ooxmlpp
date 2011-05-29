#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_RelativeOffsetEffect::CT_RelativeOffsetEffect() {
	tx = L"0%";
	ty = L"0%";
}

CT_RelativeOffsetEffect::CT_RelativeOffsetEffect(CT_RelativeOffsetEffect &b) {
	tx = b.tx;
	ty = b.ty;
}

CT_RelativeOffsetEffect::CT_RelativeOffsetEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tx = L"0%";
	ty = L"0%";
	if (attributes->getNamedItem(L"tx")) {
		tx = attributes->getNamedItem(L"tx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"ty")) {
		ty = attributes->getNamedItem(L"ty")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_RelativeOffsetEffect& CT_RelativeOffsetEffect::operator=(CT_RelativeOffsetEffect &b) {
	tx = b.tx;
	ty = b.ty;
	return *this;
}

CT_RelativeOffsetEffect::~CT_RelativeOffsetEffect() {
}

std::wstring CT_RelativeOffsetEffect::Xml() {
	return L"";
}

