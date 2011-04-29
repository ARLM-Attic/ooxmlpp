#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GradientStopList::CT_GradientStopList() {
	gs = NULL;
}

CT_GradientStopList::CT_GradientStopList(CT_GradientStopList &b) {
	gs = b.gs;
}

CT_GradientStopList::CT_GradientStopList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	gs = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gs") == 0) {
			gs.reset(new CT_GradientStop(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GradientStopList& CT_GradientStopList::operator=(CT_GradientStopList &b) {
	gs = b.gs;
	return *this;
}

CT_GradientStopList::~CT_GradientStopList() {
}

std::wstring CT_GradientStopList::Xml() {
	return L"";
}

