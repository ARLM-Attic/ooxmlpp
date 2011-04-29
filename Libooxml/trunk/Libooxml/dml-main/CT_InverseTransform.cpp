#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_InverseTransform::CT_InverseTransform() {
}

CT_InverseTransform::CT_InverseTransform(CT_InverseTransform &b) {
}

CT_InverseTransform::CT_InverseTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_InverseTransform& CT_InverseTransform::operator=(CT_InverseTransform &b) {
	return *this;
}

CT_InverseTransform::~CT_InverseTransform() {
}

std::wstring CT_InverseTransform::Xml() {
	return L"";
}

