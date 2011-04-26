#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_ApplicationNonVisualDrawingProps::CT_ApplicationNonVisualDrawingProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	custDataLst = NULL;
	extLst = NULL;
	ph = NULL;
	audioCD = NULL;
	audioFile = NULL;
	wavAudioFile = NULL;
	quickTimeFile = NULL;
	videoFile = NULL;
	if (attributes->getNamedItem(L"isPhoto")) {
		isPhoto = attributes->getNamedItem(L"isPhoto")->getNodeValue();
	}
	if (attributes->getNamedItem(L"userDrawn")) {
		userDrawn = attributes->getNamedItem(L"userDrawn")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custDataLst") == 0) {
			custDataLst = new CT_CustomerDataList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ph") == 0) {
			ph = new CT_Placeholder(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"audioCD") == 0) {
			audioCD = new drawingml::main::CT_AudioCD(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"audioFile") == 0) {
			audioFile = new drawingml::main::CT_AudioFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"wavAudioFile") == 0) {
			wavAudioFile = new drawingml::main::CT_EmbeddedWAVAudioFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"quickTimeFile") == 0) {
			quickTimeFile = new drawingml::main::CT_QuickTimeFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"videoFile") == 0) {
			videoFile = new drawingml::main::CT_VideoFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_ApplicationNonVisualDrawingProps::~CT_ApplicationNonVisualDrawingProps() {
	delete custDataLst;
	delete extLst;
	delete ph;
	delete audioCD;
	delete audioFile;
	delete wavAudioFile;
	delete quickTimeFile;
	delete videoFile;
}
