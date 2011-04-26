#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimVariant::CT_TLAnimVariant(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	boolVal = NULL;
	fltVal = NULL;
	intVal = NULL;
	strVal = NULL;
	clrVal = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"boolVal") == 0) {
			boolVal = new CT_TLAnimVariantBooleanVal(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fltVal") == 0) {
			fltVal = new CT_TLAnimVariantFloatVal(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"intVal") == 0) {
			intVal = new CT_TLAnimVariantIntegerVal(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"strVal") == 0) {
			strVal = new CT_TLAnimVariantStringVal(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrVal") == 0) {
			clrVal = new drawingml::main::CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimVariant::~CT_TLAnimVariant() {
	delete boolVal;
	delete fltVal;
	delete intVal;
	delete strVal;
	delete clrVal;
}
