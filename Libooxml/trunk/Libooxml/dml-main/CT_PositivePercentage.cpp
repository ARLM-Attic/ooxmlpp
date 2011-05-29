#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_PositivePercentage::CT_PositivePercentage(ST_PositivePercentage &_val) {
	val = _val;
}

CT_PositivePercentage::CT_PositivePercentage(CT_PositivePercentage &b) {
	val = b.val;
}

CT_PositivePercentage::CT_PositivePercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_PositivePercentage& CT_PositivePercentage::operator=(CT_PositivePercentage &b) {
	val = b.val;
	return *this;
}

CT_PositivePercentage::~CT_PositivePercentage() {
}

std::wstring CT_PositivePercentage::Xml() {
	return L"";
}

