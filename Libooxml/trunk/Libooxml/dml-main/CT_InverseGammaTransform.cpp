#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_InverseGammaTransform::CT_InverseGammaTransform() {
}

CT_InverseGammaTransform::CT_InverseGammaTransform(CT_InverseGammaTransform &b) {
}

CT_InverseGammaTransform::CT_InverseGammaTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_InverseGammaTransform& CT_InverseGammaTransform::operator=(CT_InverseGammaTransform &b) {
	return *this;
}

CT_InverseGammaTransform::~CT_InverseGammaTransform() {
}

std::wstring CT_InverseGammaTransform::Xml() {
	return L"";
}

