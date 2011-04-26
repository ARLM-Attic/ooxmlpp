#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Empty::CT_Empty(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Empty::~CT_Empty() {
}
