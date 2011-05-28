#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Hyperlink::CT_Hyperlink() {
	snd = NULL;
	extLst = NULL;
	invalidUrl = L"";
	action = L"";
	tgtFrame = L"";
	tooltip = L"";
	history = true;
	highlightClick = false;
	endSnd = false;
}

CT_Hyperlink::CT_Hyperlink(CT_Hyperlink &b) {
	snd = b.snd;
	extLst = b.extLst;
	history = b.history;
	highlightClick = b.highlightClick;
	endSnd = b.endSnd;
	id = b.id;
	invalidUrl = b.invalidUrl;
	action = b.action;
	tgtFrame = b.tgtFrame;
	tooltip = b.tooltip;
}

CT_Hyperlink::CT_Hyperlink(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	snd = NULL;
	extLst = NULL;
	invalidUrl = L"";
	action = L"";
	tgtFrame = L"";
	tooltip = L"";
	history = true;
	highlightClick = false;
	endSnd = false;
	if (attributes->getNamedItem(L"history")) {
		history = attributes->getNamedItem(L"history")->getNodeValue();
	}
	if (attributes->getNamedItem(L"highlightClick")) {
		highlightClick = attributes->getNamedItem(L"highlightClick")->getNodeValue();
	}
	if (attributes->getNamedItem(L"endSnd")) {
		endSnd = attributes->getNamedItem(L"endSnd")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"invalidUrl")) {
		invalidUrl = attributes->getNamedItem(L"invalidUrl")->getNodeValue();
	}
	if (attributes->getNamedItem(L"action")) {
		action = attributes->getNamedItem(L"action")->getNodeValue();
	}
	if (attributes->getNamedItem(L"tgtFrame")) {
		tgtFrame = attributes->getNamedItem(L"tgtFrame")->getNodeValue();
	}
	if (attributes->getNamedItem(L"tooltip")) {
		tooltip = attributes->getNamedItem(L"tooltip")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"snd") == 0) {
			snd.reset(new CT_EmbeddedWAVAudioFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Hyperlink& CT_Hyperlink::operator=(CT_Hyperlink &b) {
	snd = b.snd;
	extLst = b.extLst;
	history = b.history;
	highlightClick = b.highlightClick;
	endSnd = b.endSnd;
	id = b.id;
	invalidUrl = b.invalidUrl;
	action = b.action;
	tgtFrame = b.tgtFrame;
	tooltip = b.tooltip;
	return *this;
}

CT_Hyperlink::~CT_Hyperlink() {
}

std::wstring CT_Hyperlink::Xml() {
	return L"";
}

