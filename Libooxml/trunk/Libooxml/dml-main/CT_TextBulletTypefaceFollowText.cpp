#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBulletTypefaceFollowText::CT_TextBulletTypefaceFollowText() {
}

CT_TextBulletTypefaceFollowText::CT_TextBulletTypefaceFollowText(CT_TextBulletTypefaceFollowText &b) {
}

CT_TextBulletTypefaceFollowText::CT_TextBulletTypefaceFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextBulletTypefaceFollowText& CT_TextBulletTypefaceFollowText::operator=(CT_TextBulletTypefaceFollowText &b) {
	return *this;
}

CT_TextBulletTypefaceFollowText::~CT_TextBulletTypefaceFollowText() {
}

std::wstring CT_TextBulletTypefaceFollowText::Xml() {
	return L"";
}

