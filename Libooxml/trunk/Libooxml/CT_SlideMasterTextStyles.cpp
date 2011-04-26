#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideMasterTextStyles::CT_SlideMasterTextStyles(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	titleStyle = NULL;
	bodyStyle = NULL;
	otherStyle = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"titleStyle") == 0) {
			titleStyle = new drawingml::main::CT_TextListStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bodyStyle") == 0) {
			bodyStyle = new drawingml::main::CT_TextListStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"otherStyle") == 0) {
			otherStyle = new drawingml::main::CT_TextListStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideMasterTextStyles::~CT_SlideMasterTextStyles() {
	delete extLst;
	delete titleStyle;
	delete bodyStyle;
	delete otherStyle;
}
