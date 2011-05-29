#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_OfficeArtExtension::CT_OfficeArtExtension(std::wstring &_uri) {
	uri = _uri;
}

CT_OfficeArtExtension::CT_OfficeArtExtension(CT_OfficeArtExtension &b) {
	uri = b.uri;
}

CT_OfficeArtExtension::CT_OfficeArtExtension(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"uri")) {
		uri = attributes->getNamedItem(L"uri")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_OfficeArtExtension& CT_OfficeArtExtension::operator=(CT_OfficeArtExtension &b) {
	uri = b.uri;
	return *this;
}

CT_OfficeArtExtension::~CT_OfficeArtExtension() {
}

std::wstring CT_OfficeArtExtension::Xml() {
	return L"";
}

