#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CommentAuthor::CT_CommentAuthor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	if (attributes->getNamedItem(L"initials")) {
		initials = attributes->getNamedItem(L"initials")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lastIdx")) {
		lastIdx = attributes->getNamedItem(L"lastIdx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"clrIdx")) {
		clrIdx = attributes->getNamedItem(L"clrIdx")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_CommentAuthor::~CT_CommentAuthor() {
	delete extLst;
}
