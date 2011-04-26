#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_EmbeddedFontListEntry::CT_EmbeddedFontListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	regular = NULL;
	bold = NULL;
	italic = NULL;
	boldItalic = NULL;
	font = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"regular") == 0) {
			regular = new CT_EmbeddedFontDataId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bold") == 0) {
			bold = new CT_EmbeddedFontDataId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"italic") == 0) {
			italic = new CT_EmbeddedFontDataId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"boldItalic") == 0) {
			boldItalic = new CT_EmbeddedFontDataId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"font") == 0) {
			font = new drawingml::main::CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_EmbeddedFontListEntry::~CT_EmbeddedFontListEntry() {
	delete regular;
	delete bold;
	delete italic;
	delete boldItalic;
	delete font;
}
