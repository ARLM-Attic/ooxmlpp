#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_RegularTextRun::CT_RegularTextRun(std::wstring &_t) {
	t = _t;
	rPr = NULL;
}

CT_RegularTextRun::CT_RegularTextRun(CT_RegularTextRun &b) {
	t = b.t;
	rPr = b.rPr;
}

CT_RegularTextRun::CT_RegularTextRun(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"t") == 0) {
			t = nodelist->item(i)->getNodeValue();
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rPr") == 0) {
			rPr.reset(new CT_TextCharacterProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_RegularTextRun& CT_RegularTextRun::operator=(CT_RegularTextRun &b) {
	t = b.t;
	rPr = b.rPr;
	return *this;
}

CT_RegularTextRun::~CT_RegularTextRun() {
}

std::wstring CT_RegularTextRun::Xml() {
	return L"";
}

