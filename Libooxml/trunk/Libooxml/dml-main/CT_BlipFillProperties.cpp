#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BlipFillProperties::CT_BlipFillProperties() {
	blip = NULL;
	srcRect = NULL;
	fillModeProperties;//optional = NULL;
}

CT_BlipFillProperties::CT_BlipFillProperties(CT_BlipFillProperties &b) {
	blip = b.blip;
	srcRect = b.srcRect;
	fillModeProperties;//optional = b.fillModeProperties;//optional;
	rotWithShape = b.rotWithShape;
	dpi = b.dpi;
}

CT_BlipFillProperties::CT_BlipFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	blip = NULL;
	srcRect = NULL;
	fillModeProperties;//optional = NULL;
	if (attributes->getNamedItem(L"rotWithShape")) {
		rotWithShape = attributes->getNamedItem(L"rotWithShape")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dpi")) {
		dpi = attributes->getNamedItem(L"dpi")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blip") == 0) {
			blip.reset(new CT_Blip(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"srcRect") == 0) {
			srcRect.reset(new CT_RelativeRect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillModeProperties;//optional") == 0) {
			fillModeProperties;//optional.reset(new EG_FillModeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_BlipFillProperties& CT_BlipFillProperties::operator=(CT_BlipFillProperties &b) {
	blip = b.blip;
	srcRect = b.srcRect;
	fillModeProperties;//optional = b.fillModeProperties;//optional;
	rotWithShape = b.rotWithShape;
	dpi = b.dpi;
	return *this;
}

CT_BlipFillProperties::~CT_BlipFillProperties() {
}

std::wstring CT_BlipFillProperties::Xml() {
	return L"";
}

