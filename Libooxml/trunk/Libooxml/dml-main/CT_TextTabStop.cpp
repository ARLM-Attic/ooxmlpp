#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextTabStop::CT_TextTabStop() {
}

CT_TextTabStop::CT_TextTabStop(CT_TextTabStop &b) {
	pos = b.pos;
	algn = b.algn;
}

CT_TextTabStop::CT_TextTabStop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"pos")) {
		pos = attributes->getNamedItem(L"pos")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algn")) {
		algn = attributes->getNamedItem(L"algn")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TextTabStop& CT_TextTabStop::operator=(CT_TextTabStop &b) {
	pos = b.pos;
	algn = b.algn;
	return *this;
}

CT_TextTabStop::~CT_TextTabStop() {
}

std::wstring CT_TextTabStop::Xml() {
	return L"";
}

