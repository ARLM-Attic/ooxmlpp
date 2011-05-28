#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlConnectorNonVisual::CT_GvmlConnectorNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr, std::shared_ptr<CT_NonVisualConnectorProperties> &_cNvCxnSpPr) {
	cNvCxnSpPr = _cNvCxnSpPr;
	cNvPr = _cNvPr;
}

CT_GvmlConnectorNonVisual::CT_GvmlConnectorNonVisual(CT_GvmlConnectorNonVisual &b) {
	cNvCxnSpPr = b.cNvCxnSpPr;
	cNvPr = b.cNvPr;
}

CT_GvmlConnectorNonVisual::CT_GvmlConnectorNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cNvCxnSpPr = NULL;
	cNvPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvCxnSpPr") == 0) {
			cNvCxnSpPr.reset(new CT_NonVisualConnectorProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr.reset(new CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlConnectorNonVisual& CT_GvmlConnectorNonVisual::operator=(CT_GvmlConnectorNonVisual &b) {
	cNvCxnSpPr = b.cNvCxnSpPr;
	cNvPr = b.cNvPr;
	return *this;
}

CT_GvmlConnectorNonVisual::~CT_GvmlConnectorNonVisual() {
}

std::wstring CT_GvmlConnectorNonVisual::Xml() {
	return L"";
}

