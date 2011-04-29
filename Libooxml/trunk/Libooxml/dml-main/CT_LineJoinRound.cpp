#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LineJoinRound::CT_LineJoinRound() {
}

CT_LineJoinRound::CT_LineJoinRound(CT_LineJoinRound &b) {
}

CT_LineJoinRound::CT_LineJoinRound(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_LineJoinRound& CT_LineJoinRound::operator=(CT_LineJoinRound &b) {
	return *this;
}

CT_LineJoinRound::~CT_LineJoinRound() {
}

std::wstring CT_LineJoinRound::Xml() {
	return L"";
}

