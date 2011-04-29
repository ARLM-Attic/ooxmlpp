#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBulletSizeFollowText::CT_TextBulletSizeFollowText() {
}

CT_TextBulletSizeFollowText::CT_TextBulletSizeFollowText(CT_TextBulletSizeFollowText &b) {
}

CT_TextBulletSizeFollowText::CT_TextBulletSizeFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextBulletSizeFollowText& CT_TextBulletSizeFollowText::operator=(CT_TextBulletSizeFollowText &b) {
	return *this;
}

CT_TextBulletSizeFollowText::~CT_TextBulletSizeFollowText() {
}

std::wstring CT_TextBulletSizeFollowText::Xml() {
	return L"";
}

