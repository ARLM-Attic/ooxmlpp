#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableStyleList::CT_TableStyleList(officeDocument::sharedTypes::ST_Guid &_def) {
	tblStyle = NULL;
	def = _def;
}

CT_TableStyleList::CT_TableStyleList(CT_TableStyleList &b) {
	tblStyle = b.tblStyle;
	def = b.def;
}

CT_TableStyleList::CT_TableStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tblStyle = NULL;
	if (attributes->getNamedItem(L"def")) {
		def = attributes->getNamedItem(L"def")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tblStyle") == 0) {
			tblStyle.reset(new CT_TableStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableStyleList& CT_TableStyleList::operator=(CT_TableStyleList &b) {
	tblStyle = b.tblStyle;
	def = b.def;
	return *this;
}

CT_TableStyleList::~CT_TableStyleList() {
}

std::wstring CT_TableStyleList::Xml() {
	return L"";
}

