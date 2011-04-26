#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ViewProperties::CT_ViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	normalViewPr = NULL;
	notesTextViewPr = NULL;
	notesViewPr = NULL;
	outlineViewPr = NULL;
	sorterViewPr = NULL;
	slideviewPr = NULL;
	gridSpacing = NULL;
	if (attributes->getNamedItem(L"*nodelist")) {
		*nodelist = attributes->getNamedItem(L"*nodelist")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lastView")) {
		lastView = attributes->getNamedItem(L"lastView")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showComments")) {
		showComments = attributes->getNamedItem(L"showComments")->getNodeValue();
	}
	if (attributes->getNamedItem(L"*attributes)")) {
		*attributes) = attributes->getNamedItem(L"*attributes)")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"normalViewPr") == 0) {
			normalViewPr = new CT_NormalViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"notesTextViewPr") == 0) {
			notesTextViewPr = new CT_NotesTextViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"notesViewPr") == 0) {
			notesViewPr = new CT_NotesViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"outlineViewPr") == 0) {
			outlineViewPr = new CT_OutlineViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sorterViewPr") == 0) {
			sorterViewPr = new CT_SlideSorterViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"slideviewPr") == 0) {
			slideviewPr = new CT_SlideViewProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gridSpacing") == 0) {
			gridSpacing = new drawingml::main::CT_PositiveSize2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_ViewProperties::~CT_ViewProperties() {
	delete extLst;
	delete normalViewPr;
	delete notesTextViewPr;
	delete notesViewPr;
	delete outlineViewPr;
	delete sorterViewPr;
	delete slideviewPr;
	delete gridSpacing;
}
