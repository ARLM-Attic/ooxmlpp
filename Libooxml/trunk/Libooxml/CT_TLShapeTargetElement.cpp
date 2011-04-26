#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLShapeTargetElement::CT_TLShapeTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bg = NULL;
	oleChartEl = NULL;
	subSp = NULL;
	txEl = NULL;
	graphicEl = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bg") == 0) {
			bg = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"oleChartEl") == 0) {
			oleChartEl = new CT_TLOleChartTargetElement(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"subSp") == 0) {
			subSp = new CT_TLSubShapeId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txEl") == 0) {
			txEl = new CT_TLTextTargetElement(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"graphicEl") == 0) {
			graphicEl = new drawingml::main::CT_AnimationElementChoice(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLShapeTargetElement::~CT_TLShapeTargetElement() {
	delete bg;
	delete oleChartEl;
	delete subSp;
	delete txEl;
	delete graphicEl;
}
