#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ComplementTransform::CT_ComplementTransform() {
}

CT_ComplementTransform::CT_ComplementTransform(CT_ComplementTransform &b) {
}

CT_ComplementTransform::CT_ComplementTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_ComplementTransform& CT_ComplementTransform::operator=(CT_ComplementTransform &b) {
	return *this;
}

CT_ComplementTransform::~CT_ComplementTransform() {
}

std::wstring CT_ComplementTransform::Xml() {
	return L"";
}

