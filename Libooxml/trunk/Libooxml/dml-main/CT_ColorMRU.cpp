#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorMRU::CT_ColorMRU() {
	colorChoices.clear();
}

CT_ColorMRU::CT_ColorMRU(CT_ColorMRU &b) {
	colorChoices = b.colorChoices;
}

CT_ColorMRU::CT_ColorMRU(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoices.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoices") == 0) {
			colorChoices.push_back(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorMRU& CT_ColorMRU::operator=(CT_ColorMRU &b) {
	colorChoices = b.colorChoices;
	return *this;
}

CT_ColorMRU::~CT_ColorMRU() {
}

std::wstring CT_ColorMRU::Xml() {
	return L"";
}

