#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_QuickTimeFile::CT_QuickTimeFile() {
	extLst = NULL;
}

CT_QuickTimeFile::CT_QuickTimeFile(CT_QuickTimeFile &b) {
	extLst = b.extLst;
	link = b.link;
}

CT_QuickTimeFile::CT_QuickTimeFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"link")) {
		link = attributes->getNamedItem(L"link")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_QuickTimeFile& CT_QuickTimeFile::operator=(CT_QuickTimeFile &b) {
	extLst = b.extLst;
	link = b.link;
	return *this;
}

CT_QuickTimeFile::~CT_QuickTimeFile() {
}

std::wstring CT_QuickTimeFile::Xml() {
	return L"";
}

