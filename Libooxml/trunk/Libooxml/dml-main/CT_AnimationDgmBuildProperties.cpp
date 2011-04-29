#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AnimationDgmBuildProperties::CT_AnimationDgmBuildProperties() {
}

CT_AnimationDgmBuildProperties::CT_AnimationDgmBuildProperties(CT_AnimationDgmBuildProperties &b) {
	rev = b.rev;
	bld = b.bld;
}

CT_AnimationDgmBuildProperties::CT_AnimationDgmBuildProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"rev")) {
		rev = attributes->getNamedItem(L"rev")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bld")) {
		bld = attributes->getNamedItem(L"bld")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AnimationDgmBuildProperties& CT_AnimationDgmBuildProperties::operator=(CT_AnimationDgmBuildProperties &b) {
	rev = b.rev;
	bld = b.bld;
	return *this;
}

CT_AnimationDgmBuildProperties::~CT_AnimationDgmBuildProperties() {
}

std::wstring CT_AnimationDgmBuildProperties::Xml() {
	return L"";
}

