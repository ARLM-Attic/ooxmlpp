#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextSpacingPercent::CT_TextSpacingPercent() {
}

CT_TextSpacingPercent::CT_TextSpacingPercent(CT_TextSpacingPercent &b) {
	val = b.val;
}

CT_TextSpacingPercent::CT_TextSpacingPercent(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextSpacingPercent& CT_TextSpacingPercent::operator=(CT_TextSpacingPercent &b) {
	val = b.val;
	return *this;
}

CT_TextSpacingPercent::~CT_TextSpacingPercent() {
}

std::wstring CT_TextSpacingPercent::Xml() {
	return L"";
}

