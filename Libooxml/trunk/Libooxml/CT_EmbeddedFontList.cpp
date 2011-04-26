#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_EmbeddedFontList::CT_EmbeddedFontList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	mbeddedFont = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"mbeddedFont") == 0) {
			mbeddedFont = new std::vector<CT_EmbeddedFontListEntry*>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_EmbeddedFontList::~CT_EmbeddedFontList() {
	delete mbeddedFont;
}
