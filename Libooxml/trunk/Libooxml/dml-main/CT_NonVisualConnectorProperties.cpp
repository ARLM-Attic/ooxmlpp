#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NonVisualConnectorProperties::CT_NonVisualConnectorProperties() {
	stCxn = NULL;
	endCxn = NULL;
	cxnSpLocks = NULL;
	extLst = NULL;
}

CT_NonVisualConnectorProperties::CT_NonVisualConnectorProperties(CT_NonVisualConnectorProperties &b) {
	stCxn = b.stCxn;
	endCxn = b.endCxn;
	cxnSpLocks = b.cxnSpLocks;
	extLst = b.extLst;
}

CT_NonVisualConnectorProperties::CT_NonVisualConnectorProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	stCxn = NULL;
	endCxn = NULL;
	cxnSpLocks = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"stCxn") == 0) {
			stCxn.reset(new CT_Connection(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"endCxn") == 0) {
			endCxn.reset(new CT_Connection(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cxnSpLocks") == 0) {
			cxnSpLocks.reset(new CT_ConnectorLocking(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_NonVisualConnectorProperties& CT_NonVisualConnectorProperties::operator=(CT_NonVisualConnectorProperties &b) {
	stCxn = b.stCxn;
	endCxn = b.endCxn;
	cxnSpLocks = b.cxnSpLocks;
	extLst = b.extLst;
	return *this;
}

CT_NonVisualConnectorProperties::~CT_NonVisualConnectorProperties() {
}

std::wstring CT_NonVisualConnectorProperties::Xml() {
	return L"";
}

