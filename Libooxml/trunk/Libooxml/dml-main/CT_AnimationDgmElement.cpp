#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AnimationDgmElement::CT_AnimationDgmElement() {
}

CT_AnimationDgmElement::CT_AnimationDgmElement(CT_AnimationDgmElement &b) {
	bldStep = b.bldStep;
	id = b.id;
}

CT_AnimationDgmElement::CT_AnimationDgmElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"bldStep")) {
		bldStep = attributes->getNamedItem(L"bldStep")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AnimationDgmElement& CT_AnimationDgmElement::operator=(CT_AnimationDgmElement &b) {
	bldStep = b.bldStep;
	id = b.id;
	return *this;
}

CT_AnimationDgmElement::~CT_AnimationDgmElement() {
}

std::wstring CT_AnimationDgmElement::Xml() {
	return L"";
}

