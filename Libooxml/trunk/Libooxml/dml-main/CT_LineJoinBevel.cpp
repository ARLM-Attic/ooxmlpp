#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LineJoinBevel::CT_LineJoinBevel() {
}

CT_LineJoinBevel::CT_LineJoinBevel(CT_LineJoinBevel &b) {
}

CT_LineJoinBevel::CT_LineJoinBevel(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_LineJoinBevel& CT_LineJoinBevel::operator=(CT_LineJoinBevel &b) {
	return *this;
}

CT_LineJoinBevel::~CT_LineJoinBevel() {
}

std::wstring CT_LineJoinBevel::Xml() {
	return L"";
}

