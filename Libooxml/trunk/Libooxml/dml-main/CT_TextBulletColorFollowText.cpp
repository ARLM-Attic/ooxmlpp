#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBulletColorFollowText::CT_TextBulletColorFollowText() {
}

CT_TextBulletColorFollowText::CT_TextBulletColorFollowText(CT_TextBulletColorFollowText &b) {
}

CT_TextBulletColorFollowText::CT_TextBulletColorFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextBulletColorFollowText& CT_TextBulletColorFollowText::operator=(CT_TextBulletColorFollowText &b) {
	return *this;
}

CT_TextBulletColorFollowText::~CT_TextBulletColorFollowText() {
}

std::wstring CT_TextBulletColorFollowText::Xml() {
	return L"";
}

