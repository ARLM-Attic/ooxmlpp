#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextFont::CT_TextFont() {
}

CT_TextFont::CT_TextFont(CT_TextFont &b) {
	pitchAndFamily = b.pitchAndFamily;
	charset = b.charset;
	typeface = b.typeface;
	panose = b.panose;
}

CT_TextFont::CT_TextFont(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"pitchAndFamily")) {
		pitchAndFamily = attributes->getNamedItem(L"pitchAndFamily")->getNodeValue();
	}
	if (attributes->getNamedItem(L"charset")) {
		charset = attributes->getNamedItem(L"charset")->getNodeValue();
	}
	if (attributes->getNamedItem(L"typeface")) {
		typeface = attributes->getNamedItem(L"typeface")->getNodeValue();
	}
	if (attributes->getNamedItem(L"panose")) {
		panose = attributes->getNamedItem(L"panose")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextFont& CT_TextFont::operator=(CT_TextFont &b) {
	pitchAndFamily = b.pitchAndFamily;
	charset = b.charset;
	typeface = b.typeface;
	panose = b.panose;
	return *this;
}

CT_TextFont::~CT_TextFont() {
}

std::wstring CT_TextFont::Xml() {
	return L"";
}

