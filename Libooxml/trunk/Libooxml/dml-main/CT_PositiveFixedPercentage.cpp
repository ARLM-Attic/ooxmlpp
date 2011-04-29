#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PositiveFixedPercentage::CT_PositiveFixedPercentage() {
}

CT_PositiveFixedPercentage::CT_PositiveFixedPercentage(CT_PositiveFixedPercentage &b) {
	val = b.val;
}

CT_PositiveFixedPercentage::CT_PositiveFixedPercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_PositiveFixedPercentage& CT_PositiveFixedPercentage::operator=(CT_PositiveFixedPercentage &b) {
	val = b.val;
	return *this;
}

CT_PositiveFixedPercentage::~CT_PositiveFixedPercentage() {
}

std::wstring CT_PositiveFixedPercentage::Xml() {
	return L"";
}

