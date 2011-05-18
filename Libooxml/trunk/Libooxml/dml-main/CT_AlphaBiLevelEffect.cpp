#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AlphaBiLevelEffect::CT_AlphaBiLevelEffect(ST_PositiveFixedPercentage _thresh) : thresh(_thresh) {
}

CT_AlphaBiLevelEffect::CT_AlphaBiLevelEffect(CT_AlphaBiLevelEffect &b) {
	thresh = b.thresh;
}

CT_AlphaBiLevelEffect::CT_AlphaBiLevelEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"thresh")) {
		thresh = attributes->getNamedItem(L"thresh")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AlphaBiLevelEffect& CT_AlphaBiLevelEffect::operator=(CT_AlphaBiLevelEffect &b) {
	thresh = b.thresh;
	return *this;
}

CT_AlphaBiLevelEffect::~CT_AlphaBiLevelEffect() {
}

std::wstring CT_AlphaBiLevelEffect::Xml() {
	return L"";
}

