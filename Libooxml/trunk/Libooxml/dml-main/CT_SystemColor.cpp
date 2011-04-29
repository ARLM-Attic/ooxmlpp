#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_SystemColor::CT_SystemColor() {
	colorTransform = NULL;
}

CT_SystemColor::CT_SystemColor(CT_SystemColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
	lastClr = b.lastClr;
}

CT_SystemColor::CT_SystemColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform = NULL;
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lastClr")) {
		lastClr = attributes->getNamedItem(L"lastClr")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorTransform") == 0) {
			colorTransform.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_SystemColor& CT_SystemColor::operator=(CT_SystemColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
	lastClr = b.lastClr;
	return *this;
}

CT_SystemColor::~CT_SystemColor() {
}

std::wstring CT_SystemColor::Xml() {
	return L"";
}

