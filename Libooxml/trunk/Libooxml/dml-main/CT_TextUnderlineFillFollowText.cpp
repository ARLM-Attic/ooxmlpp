#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextUnderlineFillFollowText::CT_TextUnderlineFillFollowText() {
}

CT_TextUnderlineFillFollowText::CT_TextUnderlineFillFollowText(CT_TextUnderlineFillFollowText &b) {
}

CT_TextUnderlineFillFollowText::CT_TextUnderlineFillFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextUnderlineFillFollowText& CT_TextUnderlineFillFollowText::operator=(CT_TextUnderlineFillFollowText &b) {
	return *this;
}

CT_TextUnderlineFillFollowText::~CT_TextUnderlineFillFollowText() {
}

std::wstring CT_TextUnderlineFillFollowText::Xml() {
	return L"";
}

