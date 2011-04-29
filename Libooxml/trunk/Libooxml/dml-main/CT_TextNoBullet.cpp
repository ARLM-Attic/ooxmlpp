#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextNoBullet::CT_TextNoBullet() {
}

CT_TextNoBullet::CT_TextNoBullet(CT_TextNoBullet &b) {
}

CT_TextNoBullet::CT_TextNoBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextNoBullet& CT_TextNoBullet::operator=(CT_TextNoBullet &b) {
	return *this;
}

CT_TextNoBullet::~CT_TextNoBullet() {
}

std::wstring CT_TextNoBullet::Xml() {
	return L"";
}

