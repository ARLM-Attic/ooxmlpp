#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextUnderlineLineFollowText::CT_TextUnderlineLineFollowText() {
}

CT_TextUnderlineLineFollowText::CT_TextUnderlineLineFollowText(CT_TextUnderlineLineFollowText &b) {
}

CT_TextUnderlineLineFollowText::CT_TextUnderlineLineFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextUnderlineLineFollowText& CT_TextUnderlineLineFollowText::operator=(CT_TextUnderlineLineFollowText &b) {
	return *this;
}

CT_TextUnderlineLineFollowText::~CT_TextUnderlineLineFollowText() {
}

std::wstring CT_TextUnderlineLineFollowText::Xml() {
	return L"";
}

