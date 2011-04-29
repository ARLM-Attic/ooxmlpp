#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextAutonumberBullet::CT_TextAutonumberBullet() {
}

CT_TextAutonumberBullet::CT_TextAutonumberBullet(CT_TextAutonumberBullet &b) {
	type = b.type;
	startAt = b.startAt;
}

CT_TextAutonumberBullet::CT_TextAutonumberBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"type")) {
		type = attributes->getNamedItem(L"type")->getNodeValue();
	}
	if (attributes->getNamedItem(L"startAt")) {
		startAt = attributes->getNamedItem(L"startAt")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextAutonumberBullet& CT_TextAutonumberBullet::operator=(CT_TextAutonumberBullet &b) {
	type = b.type;
	startAt = b.startAt;
	return *this;
}

CT_TextAutonumberBullet::~CT_TextAutonumberBullet() {
}

std::wstring CT_TextAutonumberBullet::Xml() {
	return L"";
}

