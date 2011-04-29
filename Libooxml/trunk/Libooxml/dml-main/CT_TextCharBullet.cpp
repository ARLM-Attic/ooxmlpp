#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextCharBullet::CT_TextCharBullet() {
}

CT_TextCharBullet::CT_TextCharBullet(CT_TextCharBullet &b) {
	_char = b._char;
}

CT_TextCharBullet::CT_TextCharBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"_char")) {
		_char = attributes->getNamedItem(L"_char")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextCharBullet& CT_TextCharBullet::operator=(CT_TextCharBullet &b) {
	_char = b._char;
	return *this;
}

CT_TextCharBullet::~CT_TextCharBullet() {
}

std::wstring CT_TextCharBullet::Xml() {
	return L"";
}

