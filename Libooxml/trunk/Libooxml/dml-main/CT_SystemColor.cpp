#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_SystemColor::CT_SystemColor(ST_SystemColorVal &_val) {
	colorTransform.clear();
	val = _val;
}

CT_SystemColor::CT_SystemColor(CT_SystemColor &b) {
	colorTransform = b.colorTransform;
	val = b.val;
	lastClr = b.lastClr;
}

CT_SystemColor::CT_SystemColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	colorTransform.clear();
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lastClr")) {
		lastClr = attributes->getNamedItem(L"lastClr")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"colorTransform") == 0) {
			std::shared_ptr<EG_ColorTransform> temp;
			temp.reset(new EG_ColorTransform(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			colorTransform.push_back(temp);
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

