#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AnimationChartBuildProperties::CT_AnimationChartBuildProperties() {
}

CT_AnimationChartBuildProperties::CT_AnimationChartBuildProperties(CT_AnimationChartBuildProperties &b) {
	animBg = b.animBg;
	bld = b.bld;
}

CT_AnimationChartBuildProperties::CT_AnimationChartBuildProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"animBg")) {
		animBg = attributes->getNamedItem(L"animBg")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bld")) {
		bld = attributes->getNamedItem(L"bld")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AnimationChartBuildProperties& CT_AnimationChartBuildProperties::operator=(CT_AnimationChartBuildProperties &b) {
	animBg = b.animBg;
	bld = b.bld;
	return *this;
}

CT_AnimationChartBuildProperties::~CT_AnimationChartBuildProperties() {
}

std::wstring CT_AnimationChartBuildProperties::Xml() {
	return L"";
}

