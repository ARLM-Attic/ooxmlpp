#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_SupplementalFont::CT_SupplementalFont(std::wstring &_script, ST_TextTypeface &_typeface) {
	script = _script;
	typeface = _typeface;
}

CT_SupplementalFont::CT_SupplementalFont(CT_SupplementalFont &b) {
	typeface = b.typeface;
	script = b.script;
}

CT_SupplementalFont::CT_SupplementalFont(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"typeface")) {
		typeface = attributes->getNamedItem(L"typeface")->getNodeValue();
	}
	if (attributes->getNamedItem(L"script")) {
		script = attributes->getNamedItem(L"script")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_SupplementalFont& CT_SupplementalFont::operator=(CT_SupplementalFont &b) {
	typeface = b.typeface;
	script = b.script;
	return *this;
}

CT_SupplementalFont::~CT_SupplementalFont() {
}

std::wstring CT_SupplementalFont::Xml() {
	return L"";
}

