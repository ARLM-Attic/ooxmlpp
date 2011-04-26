#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_OleObject::CT_OleObject(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	embed = NULL;
	link = NULL;
	pic = NULL;
	if (attributes->getNamedItem(L"showAsIcon")) {
		showAsIcon = attributes->getNamedItem(L"showAsIcon")->getNodeValue();
	}
	if (attributes->getNamedItem(L"imgW")) {
		imgW = attributes->getNamedItem(L"imgW")->getNodeValue();
	}
	if (attributes->getNamedItem(L"imgH")) {
		imgH = attributes->getNamedItem(L"imgH")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rId")) {
		rId = attributes->getNamedItem(L"rId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	if (attributes->getNamedItem(L"progId")) {
		progId = attributes->getNamedItem(L"progId")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"embed") == 0) {
			embed = new CT_OleObjectEmbed(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"link") == 0) {
			link = new CT_OleObjectLink(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pic") == 0) {
			pic = new CT_Picture(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_OleObject::~CT_OleObject() {
	delete embed;
	delete link;
	delete pic;
}
