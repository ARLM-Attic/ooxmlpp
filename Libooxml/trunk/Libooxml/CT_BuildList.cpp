#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_BuildList::CT_BuildList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bldDgm = NULL;
	bldP = NULL;
	bldGraphic = NULL;
	bldOleChart = NULL;
	hoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bldDgm") == 0) {
			bldDgm = new CT_TLBuildDiagram(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bldP") == 0) {
			bldP = new CT_TLBuildParagraph(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bldGraphic") == 0) {
			bldGraphic = new CT_TLGraphicalObjectBuild(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bldOleChart") == 0) {
			bldOleChart = new CT_TLOleBuildChart(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hoice") == 0) {
			hoice = new std::vector<_choice>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_BuildList::~CT_BuildList() {
	delete bldDgm;
	delete bldP;
	delete bldGraphic;
	delete bldOleChart;
	delete hoice;
}
