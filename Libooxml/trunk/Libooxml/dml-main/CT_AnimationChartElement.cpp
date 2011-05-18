#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AnimationChartElement::CT_AnimationChartElement(ST_ChartBuildStep _bldStep) {
	bldStep = _bldStep;
	seriesIdx = -1;
	categoryIdx = -1;
}

CT_AnimationChartElement::CT_AnimationChartElement(CT_AnimationChartElement &b) {
	seriesIdx = b.seriesIdx;
	categoryIdx = b.categoryIdx;
	bldStep = b.bldStep;
}

CT_AnimationChartElement::CT_AnimationChartElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"seriesIdx")) {
		seriesIdx = attributes->getNamedItem(L"seriesIdx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"categoryIdx")) {
		categoryIdx = attributes->getNamedItem(L"categoryIdx")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bldStep")) {
		bldStep = attributes->getNamedItem(L"bldStep")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AnimationChartElement& CT_AnimationChartElement::operator=(CT_AnimationChartElement &b) {
	seriesIdx = b.seriesIdx;
	categoryIdx = b.categoryIdx;
	bldStep = b.bldStep;
	return *this;
}

CT_AnimationChartElement::~CT_AnimationChartElement() {
}

std::wstring CT_AnimationChartElement::Xml() {
	return L"";
}

