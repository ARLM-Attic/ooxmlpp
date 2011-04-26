#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLTimeTargetElement::CT_TLTimeTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	sldTgt = NULL;
	spTgt = NULL;
	inkTgt = NULL;
	sndTgt = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldTgt") == 0) {
			sldTgt = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spTgt") == 0) {
			spTgt = new CT_TLShapeTargetElement(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"inkTgt") == 0) {
			inkTgt = new CT_TLSubShapeId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sndTgt") == 0) {
			sndTgt = new drawingml::main::CT_EmbeddedWAVAudioFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TLTimeTargetElement::~CT_TLTimeTargetElement() {
	delete sldTgt;
	delete spTgt;
	delete inkTgt;
	delete sndTgt;
}
