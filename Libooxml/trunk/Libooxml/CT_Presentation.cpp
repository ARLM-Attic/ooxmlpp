#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_Presentation::CT_Presentation(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	custShowLst = NULL;
	custDataLst = NULL;
	embeddedFontList = NULL;
	extLst = NULL;
	handoutMasterIdLst = NULL;
	kinsoku = NULL;
	modifyVerifier = NULL;
	notesMasterIdLst = NULL;
	photoAlbum = NULL;
	sldIdLst = NULL;
	sldMasterIdLst = NULL;
	sldSz = NULL;
	smartTags = NULL;
	notesSz = NULL;
	defaultTextStyle = NULL;
	if (attributes->getNamedItem(L"bookmarkIdSeed")) {
		bookmarkIdSeed = attributes->getNamedItem(L"bookmarkIdSeed")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showSpecialPlsOnTitleSld")) {
		showSpecialPlsOnTitleSld = attributes->getNamedItem(L"showSpecialPlsOnTitleSld")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rtl")) {
		rtl = attributes->getNamedItem(L"rtl")->getNodeValue();
	}
	if (attributes->getNamedItem(L"removePersonalInfoOnSave")) {
		removePersonalInfoOnSave = attributes->getNamedItem(L"removePersonalInfoOnSave")->getNodeValue();
	}
	if (attributes->getNamedItem(L"compatMode")) {
		compatMode = attributes->getNamedItem(L"compatMode")->getNodeValue();
	}
	if (attributes->getNamedItem(L"strictFirstAndLastChars")) {
		strictFirstAndLastChars = attributes->getNamedItem(L"strictFirstAndLastChars")->getNodeValue();
	}
	if (attributes->getNamedItem(L"embedTrueTypeFonts")) {
		embedTrueTypeFonts = attributes->getNamedItem(L"embedTrueTypeFonts")->getNodeValue();
	}
	if (attributes->getNamedItem(L"saveSubsetFonts")) {
		saveSubsetFonts = attributes->getNamedItem(L"saveSubsetFonts")->getNodeValue();
	}
	if (attributes->getNamedItem(L"autoCompressPictures")) {
		autoCompressPictures = attributes->getNamedItem(L"autoCompressPictures")->getNodeValue();
	}
	if (attributes->getNamedItem(L"serverZoom")) {
		serverZoom = attributes->getNamedItem(L"serverZoom")->getNodeValue();
	}
	if (attributes->getNamedItem(L"firstSlidclass")) {
		firstSlidclass = attributes->getNamedItem(L"firstSlidclass")->getNodeValue();
	}
	if (attributes->getNamedItem(L"conformance")) {
		conformance = attributes->getNamedItem(L"conformance")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custShowLst") == 0) {
			custShowLst = new CT_CustomShowList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custDataLst") == 0) {
			custDataLst = new CT_CustomerDataList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"embeddedFontList") == 0) {
			embeddedFontList = new CT_EmbeddedFontList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"handoutMasterIdLst") == 0) {
			handoutMasterIdLst = new CT_HandoutMasterIdList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"kinsoku") == 0) {
			kinsoku = new CT_Kinsoku(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"modifyVerifier") == 0) {
			modifyVerifier = new CT_ModifyVerifier(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"notesMasterIdLst") == 0) {
			notesMasterIdLst = new CT_NotesMasterIdList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"photoAlbum") == 0) {
			photoAlbum = new CT_PhotoAlbum(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldIdLst") == 0) {
			sldIdLst = new CT_SlideIdList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldMasterIdLst") == 0) {
			sldMasterIdLst = new CT_SlideMasterIdList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldSz") == 0) {
			sldSz = new CT_SlideSize(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"smartTags") == 0) {
			smartTags = new CT_SmartTags(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"notesSz") == 0) {
			notesSz = new drawingml::main::CT_PositiveSize2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"defaultTextStyle") == 0) {
			defaultTextStyle = new drawingml::main::CT_TextListStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_Presentation::~CT_Presentation() {
	delete custShowLst;
	delete custDataLst;
	delete embeddedFontList;
	delete extLst;
	delete handoutMasterIdLst;
	delete kinsoku;
	delete modifyVerifier;
	delete notesMasterIdLst;
	delete photoAlbum;
	delete sldIdLst;
	delete sldMasterIdLst;
	delete sldSz;
	delete smartTags;
	delete notesSz;
	delete defaultTextStyle;
}
