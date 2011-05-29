#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_StyleMatrixReference::CT_StyleMatrixReference(ST_StyleMatrixColumnIndex &_idx) {
	colorChoice = NULL;
	idx = _idx;
}

CT_StyleMatrixReference::CT_StyleMatrixReference(CT_StyleMatrixReference &b) {
	colorChoice = b.colorChoice;
	idx = b.idx;
}

CT_StyleMatrixReference::CT_StyleMatrixReference(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorChoice = NULL;
	if (attributes->getNamedItem(L"idx")) {
		idx = attributes->getNamedItem(L"idx")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorChoice") == 0) {
			colorChoice.reset(new EG_ColorChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_StyleMatrixReference& CT_StyleMatrixReference::operator=(CT_StyleMatrixReference &b) {
	colorChoice = b.colorChoice;
	idx = b.idx;
	return *this;
}

CT_StyleMatrixReference::~CT_StyleMatrixReference() {
}

std::wstring CT_StyleMatrixReference::Xml() {
	return L"";
}

