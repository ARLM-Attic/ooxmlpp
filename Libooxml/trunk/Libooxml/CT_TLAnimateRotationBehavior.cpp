#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimateRotationBehavior::CT_TLAnimateRotationBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cBhvr = NULL;
	by = NULL;
	from = NULL;
	to = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cBhvr") == 0) {
			cBhvr = new CT_TLCommonBehaviorData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"by") == 0) {
			by = new drawingml::main::ST_Angle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"from") == 0) {
			from = new drawingml::main::ST_Angle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"to") == 0) {
			to = new drawingml::main::ST_Angle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLAnimateRotationBehavior::~CT_TLAnimateRotationBehavior() {
	delete cBhvr;
	delete by;
	delete from;
	delete to;
}
