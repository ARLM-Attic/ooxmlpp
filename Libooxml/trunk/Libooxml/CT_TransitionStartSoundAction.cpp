#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TransitionStartSoundAction::CT_TransitionStartSoundAction(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	snd = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"snd") == 0) {
			snd = new drawingml::main::CT_EmbeddedWAVAudioFile(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TransitionStartSoundAction::~CT_TransitionStartSoundAction() {
	delete snd;
}
