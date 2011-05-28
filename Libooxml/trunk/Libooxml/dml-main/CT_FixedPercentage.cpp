#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FixedPercentage::CT_FixedPercentage(ST_FixedPercentage &_val) {
	val = _val;
}

CT_FixedPercentage::CT_FixedPercentage(CT_FixedPercentage &b) {
	val = b.val;
}

CT_FixedPercentage::CT_FixedPercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_FixedPercentage& CT_FixedPercentage::operator=(CT_FixedPercentage &b) {
	val = b.val;
	return *this;
}

CT_FixedPercentage::~CT_FixedPercentage() {
}

std::wstring CT_FixedPercentage::Xml() {
	return L"";
}

