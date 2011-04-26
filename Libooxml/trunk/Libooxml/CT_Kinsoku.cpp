#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Kinsoku::CT_Kinsoku(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"lang")) {
		lang = attributes->getNamedItem(L"lang")->getNodeValue();
	}
	if (attributes->getNamedItem(L"invalStChars")) {
		invalStChars = attributes->getNamedItem(L"invalStChars")->getNodeValue();
	}
	if (attributes->getNamedItem(L"invalEndChars")) {
		invalEndChars = attributes->getNamedItem(L"invalEndChars")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_Kinsoku::~CT_Kinsoku() {
}
