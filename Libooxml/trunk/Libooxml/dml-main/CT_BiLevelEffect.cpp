#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BiLevelEffect::CT_BiLevelEffect(ST_PositiveFixedPercentage _thresh) : thresh(_thresh) {
}

CT_BiLevelEffect::CT_BiLevelEffect(CT_BiLevelEffect &b) {
	thresh = b.thresh;
}

CT_BiLevelEffect::CT_BiLevelEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"thresh")) {
		thresh = attributes->getNamedItem(L"thresh")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_BiLevelEffect& CT_BiLevelEffect::operator=(CT_BiLevelEffect &b) {
	thresh = b.thresh;
	return *this;
}

CT_BiLevelEffect::~CT_BiLevelEffect() {
}

std::wstring CT_BiLevelEffect::Xml() {
	return L"";
}

