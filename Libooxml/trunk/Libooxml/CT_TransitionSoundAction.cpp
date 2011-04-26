#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TransitionSoundAction::CT_TransitionSoundAction(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	endSnd = NULL;
	stSnd = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"endSnd") == 0) {
			endSnd = new CT_Empty(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"stSnd") == 0) {
			stSnd = new CT_TransitionStartSoundAction(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TransitionSoundAction::~CT_TransitionSoundAction() {
	delete endSnd;
	delete stSnd;
}
