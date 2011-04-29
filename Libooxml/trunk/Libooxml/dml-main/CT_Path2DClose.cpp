#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Path2DClose::CT_Path2DClose() {
}

CT_Path2DClose::CT_Path2DClose(CT_Path2DClose &b) {
}

CT_Path2DClose::CT_Path2DClose(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Path2DClose& CT_Path2DClose::operator=(CT_Path2DClose &b) {
	return *this;
}

CT_Path2DClose::~CT_Path2DClose() {
}

std::wstring CT_Path2DClose::Xml() {
	return L"";
}

