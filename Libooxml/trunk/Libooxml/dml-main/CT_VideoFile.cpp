#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_VideoFile::CT_VideoFile() {
	extLst = NULL;
}

CT_VideoFile::CT_VideoFile(CT_VideoFile &b) {
	extLst = b.extLst;
	link = b.link;
	contentType = b.contentType;
}

CT_VideoFile::CT_VideoFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"link")) {
		link = attributes->getNamedItem(L"link")->getNodeValue();
	}
	if (attributes->getNamedItem(L"contentType")) {
		contentType = attributes->getNamedItem(L"contentType")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_VideoFile& CT_VideoFile::operator=(CT_VideoFile &b) {
	extLst = b.extLst;
	link = b.link;
	contentType = b.contentType;
	return *this;
}

CT_VideoFile::~CT_VideoFile() {
}

std::wstring CT_VideoFile::Xml() {
	return L"";
}

