#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_HtmlPublishProperties::CT_HtmlPublishProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	custShow = NULL;
	sldAll = NULL;
	extLst = NULL;
	sldRg = NULL;
	if (attributes->getNamedItem(L"showSpeakerNotes")) {
		showSpeakerNotes = attributes->getNamedItem(L"showSpeakerNotes")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"target")) {
		target = attributes->getNamedItem(L"target")->getNodeValue();
	}
	if (attributes->getNamedItem(L"title")) {
		title = attributes->getNamedItem(L"title")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custShow") == 0) {
			custShow = new CT_CustomShowId(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldAll") == 0) {
			sldAll = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldRg") == 0) {
			sldRg = new CT_IndexRange(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_HtmlPublishProperties::~CT_HtmlPublishProperties() {
	delete custShow;
	delete sldAll;
	delete extLst;
	delete sldRg;
}
