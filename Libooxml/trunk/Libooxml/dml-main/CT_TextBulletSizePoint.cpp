#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBulletSizePoint::CT_TextBulletSizePoint(ST_TextFontSize &_val) {
	val = _val;
}

CT_TextBulletSizePoint::CT_TextBulletSizePoint(CT_TextBulletSizePoint &b) {
	val = b.val;
}

CT_TextBulletSizePoint::CT_TextBulletSizePoint(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextBulletSizePoint& CT_TextBulletSizePoint::operator=(CT_TextBulletSizePoint &b) {
	val = b.val;
	return *this;
}

CT_TextBulletSizePoint::~CT_TextBulletSizePoint() {
}

std::wstring CT_TextBulletSizePoint::Xml() {
	return L"";
}

