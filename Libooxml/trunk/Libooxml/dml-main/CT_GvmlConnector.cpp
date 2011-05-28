#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlConnector::CT_GvmlConnector(std::shared_ptr<CT_GvmlConnectorNonVisual> &_nvCxnSpPr,	std::shared_ptr<CT_ShapeProperties> &_spPr) {
	nvCxnSpPr = _nvCxnSpPr;
	extLst = NULL;
	spPr = _spPr;
	style = NULL;
}

CT_GvmlConnector::CT_GvmlConnector(CT_GvmlConnector &b) {
	nvCxnSpPr = b.nvCxnSpPr;
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
}

CT_GvmlConnector::CT_GvmlConnector(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	nvCxnSpPr = NULL;
	extLst = NULL;
	spPr = NULL;
	style = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvCxnSpPr") == 0) {
			nvCxnSpPr.reset(new CT_GvmlConnectorNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr.reset(new CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style.reset(new CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlConnector& CT_GvmlConnector::operator=(CT_GvmlConnector &b) {
	nvCxnSpPr = b.nvCxnSpPr;
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
	return *this;
}

CT_GvmlConnector::~CT_GvmlConnector() {
}

std::wstring CT_GvmlConnector::Xml() {
	return L"";
}

