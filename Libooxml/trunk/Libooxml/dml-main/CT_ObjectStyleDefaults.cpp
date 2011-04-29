#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ObjectStyleDefaults::CT_ObjectStyleDefaults() {
	spDef = NULL;
	lnDef = NULL;
	txDef = NULL;
	extLst = NULL;
}

CT_ObjectStyleDefaults::CT_ObjectStyleDefaults(CT_ObjectStyleDefaults &b) {
	spDef = b.spDef;
	lnDef = b.lnDef;
	txDef = b.txDef;
	extLst = b.extLst;
}

CT_ObjectStyleDefaults::CT_ObjectStyleDefaults(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	spDef = NULL;
	lnDef = NULL;
	txDef = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spDef") == 0) {
			spDef.reset(new CT_DefaultShapeDefinition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnDef") == 0) {
			lnDef.reset(new CT_DefaultShapeDefinition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txDef") == 0) {
			txDef.reset(new CT_DefaultShapeDefinition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ObjectStyleDefaults& CT_ObjectStyleDefaults::operator=(CT_ObjectStyleDefaults &b) {
	spDef = b.spDef;
	lnDef = b.lnDef;
	txDef = b.txDef;
	extLst = b.extLst;
	return *this;
}

CT_ObjectStyleDefaults::~CT_ObjectStyleDefaults() {
}

std::wstring CT_ObjectStyleDefaults::Xml() {
	return L"";
}

