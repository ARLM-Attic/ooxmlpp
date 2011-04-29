#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBulletSizePercent::CT_TextBulletSizePercent() {
}

CT_TextBulletSizePercent::CT_TextBulletSizePercent(CT_TextBulletSizePercent &b) {
	val = b.val;
}

CT_TextBulletSizePercent::CT_TextBulletSizePercent(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextBulletSizePercent& CT_TextBulletSizePercent::operator=(CT_TextBulletSizePercent &b) {
	val = b.val;
	return *this;
}

CT_TextBulletSizePercent::~CT_TextBulletSizePercent() {
}

std::wstring CT_TextBulletSizePercent::Xml() {
	return L"";
}

