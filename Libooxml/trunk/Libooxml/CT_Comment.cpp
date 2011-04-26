#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Comment::CT_Comment(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	pos = NULL;
	if (attributes->getNamedItem(L"*extLst")) {
		*extLst = attributes->getNamedItem(L"*extLst")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dt")) {
		dt = attributes->getNamedItem(L"dt")->getNodeValue();
	}
	if (attributes->getNamedItem(L"idx")) {
		idx = attributes->getNamedItem(L"idx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"authorId")) {
		authorId = attributes->getNamedItem(L"authorId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"text")) {
		text = attributes->getNamedItem(L"text")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pos") == 0) {
			pos = new drawingml::main::CT_Point2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Comment::~CT_Comment() {
	delete pos;
}
