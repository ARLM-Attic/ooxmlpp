#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TablePartStyle::CT_TablePartStyle() {
	tcStyle = NULL;
	tcTxStyle = NULL;
}

CT_TablePartStyle::CT_TablePartStyle(CT_TablePartStyle &b) {
	tcStyle = b.tcStyle;
	tcTxStyle = b.tcTxStyle;
}

CT_TablePartStyle::CT_TablePartStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tcStyle = NULL;
	tcTxStyle = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tcStyle") == 0) {
			tcStyle.reset(new CT_TableStyleCellStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tcTxStyle") == 0) {
			tcTxStyle.reset(new CT_TableStyleTextStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TablePartStyle& CT_TablePartStyle::operator=(CT_TablePartStyle &b) {
	tcStyle = b.tcStyle;
	tcTxStyle = b.tcTxStyle;
	return *this;
}

CT_TablePartStyle::~CT_TablePartStyle() {
}

std::wstring CT_TablePartStyle::Xml() {
	return L"";
}

