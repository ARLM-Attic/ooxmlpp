#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideTransition::CT_SlideTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	strips = NULL;
	cover = NULL;
	pull = NULL;
	circle = NULL;
	dissolve = NULL;
	diamond = NULL;
	newsflash = NULL;
	plus = NULL;
	random = NULL;
	wedge = NULL;
	extLst = NULL;
	zoom = NULL;
	cut = NULL;
	fade = NULL;
	blinds = NULL;
	checker = NULL;
	comb = NULL;
	randomBar = NULL;
	push = NULL;
	wipe = NULL;
	split = NULL;
	sndAc = NULL;
	wheel = NULL;
	if (attributes->getNamedItem(L"spd")) {
		spd = attributes->getNamedItem(L"spd")->getNodeValue();
	}
	if (attributes->getNamedItem(L"advTm")) {
		advTm = attributes->getNamedItem(L"advTm")->getNodeValue();
	}
	if (attributes->getNamedItem(L"advClick")) {
		advClick = attributes->getNamedItem(L"advClick")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"strips") == 0) {
			strips = new CT_CornerDirectionTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cover") == 0) {
			cover = new CT_EightDirectionTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pull") == 0) {
			pull = new CT_EightDirectionTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"circle") == 0) {
			circle = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"dissolve") == 0) {
			dissolve = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"diamond") == 0) {
			diamond = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"newsflash") == 0) {
			newsflash = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"plus") == 0) {
			plus = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"random") == 0) {
			random = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"wedge") == 0) {
			wedge = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"zoom") == 0) {
			zoom = new CT_InOutTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cut") == 0) {
			cut = new CT_OptionalBlackTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fade") == 0) {
			fade = new CT_OptionalBlackTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blinds") == 0) {
			blinds = new CT_OrientationTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"checker") == 0) {
			checker = new CT_OrientationTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"comb") == 0) {
			comb = new CT_OrientationTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"randomBar") == 0) {
			randomBar = new CT_OrientationTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"push") == 0) {
			push = new CT_SideDirectionTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"wipe") == 0) {
			wipe = new CT_SideDirectionTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"split") == 0) {
			split = new CT_SplitTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sndAc") == 0) {
			sndAc = new CT_TransitionSoundAction(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"wheel") == 0) {
			wheel = new CT_WheelTransition(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideTransition::~CT_SlideTransition() {
	delete strips;
	delete cover;
	delete pull;
	delete circle;
	delete dissolve;
	delete diamond;
	delete newsflash;
	delete plus;
	delete random;
	delete wedge;
	delete extLst;
	delete zoom;
	delete cut;
	delete fade;
	delete blinds;
	delete checker;
	delete comb;
	delete randomBar;
	delete push;
	delete wipe;
	delete split;
	delete sndAc;
	delete wheel;
}
