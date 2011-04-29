#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBlipBullet::CT_TextBlipBullet() {
	blip = NULL;
}

CT_TextBlipBullet::CT_TextBlipBullet(CT_TextBlipBullet &b) {
	blip = b.blip;
}

CT_TextBlipBullet::CT_TextBlipBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	blip = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blip") == 0) {
			blip.reset(new CT_Blip(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextBlipBullet& CT_TextBlipBullet::operator=(CT_TextBlipBullet &b) {
	blip = b.blip;
	return *this;
}

CT_TextBlipBullet::~CT_TextBlipBullet() {
}

std::wstring CT_TextBlipBullet::Xml() {
	return L"";
}

