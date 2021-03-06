#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_OfficeArtExtensionList::CT_OfficeArtExtensionList() {
	ext.clear();
}

CT_OfficeArtExtensionList::CT_OfficeArtExtensionList(CT_OfficeArtExtensionList &b) {
	ext = b.ext;
}

CT_OfficeArtExtensionList::CT_OfficeArtExtensionList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ext.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ext") == 0) {
			std::shared_ptr<CT_OfficeArtExtension> temp;
			temp.reset(new CT_OfficeArtExtension(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			ext.push_back(temp);
		}
	}
}

CT_OfficeArtExtensionList& CT_OfficeArtExtensionList::operator=(CT_OfficeArtExtensionList &b) {
	ext = b.ext;
	return *this;
}

CT_OfficeArtExtensionList::~CT_OfficeArtExtensionList() {
}

std::wstring CT_OfficeArtExtensionList::Xml() {
	return L"";
}

