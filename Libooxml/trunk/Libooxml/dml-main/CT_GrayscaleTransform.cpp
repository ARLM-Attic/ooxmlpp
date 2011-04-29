#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GrayscaleTransform::CT_GrayscaleTransform() {
}

CT_GrayscaleTransform::CT_GrayscaleTransform(CT_GrayscaleTransform &b) {
}

CT_GrayscaleTransform::CT_GrayscaleTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GrayscaleTransform& CT_GrayscaleTransform::operator=(CT_GrayscaleTransform &b) {
	return *this;
}

CT_GrayscaleTransform::~CT_GrayscaleTransform() {
}

std::wstring CT_GrayscaleTransform::Xml() {
	return L"";
}

