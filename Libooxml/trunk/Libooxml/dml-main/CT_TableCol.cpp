#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableCol::CT_TableCol() {
	extLst = NULL;
}

CT_TableCol::CT_TableCol(CT_TableCol &b) {
	extLst = b.extLst;
	w = b.w;
}

CT_TableCol::CT_TableCol(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"w")) {
		w = attributes->getNamedItem(L"w")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableCol& CT_TableCol::operator=(CT_TableCol &b) {
	extLst = b.extLst;
	w = b.w;
	return *this;
}

CT_TableCol::~CT_TableCol() {
}

std::wstring CT_TableCol::Xml() {
	return L"";
}

