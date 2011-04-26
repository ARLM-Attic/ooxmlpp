#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TimeNodeList::CT_TimeNodeList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	anim = NULL;
	animClr = NULL;
	animEffect = NULL;
	animMotion = NULL;
	animRot = NULL;
	animScale = NULL;
	cmd = NULL;
	audio = NULL;
	video = NULL;
	set = NULL;
	excl = NULL;
	par = NULL;
	seq = NULL;
	hoice = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"anim") == 0) {
			anim = new CT_TLAnimateBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"animClr") == 0) {
			animClr = new CT_TLAnimateColorBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"animEffect") == 0) {
			animEffect = new CT_TLAnimateEffectBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"animMotion") == 0) {
			animMotion = new CT_TLAnimateMotionBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"animRot") == 0) {
			animRot = new CT_TLAnimateRotationBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"animScale") == 0) {
			animScale = new CT_TLAnimateScaleBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cmd") == 0) {
			cmd = new CT_TLCommandBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"audio") == 0) {
			audio = new CT_TLMediaNodeAudio(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"video") == 0) {
			video = new CT_TLMediaNodeVideo(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"set") == 0) {
			set = new CT_TLSetBehavior(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"excl") == 0) {
			excl = new CT_TLTimeNodeExclusive(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"par") == 0) {
			par = new CT_TLTimeNodeParallel(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"seq") == 0) {
			seq = new CT_TLTimeNodeSequence(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hoice") == 0) {
			hoice = new std::vector<_choice>(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_TimeNodeList::~CT_TimeNodeList() {
	delete anim;
	delete animClr;
	delete animEffect;
	delete animMotion;
	delete animRot;
	delete animScale;
	delete cmd;
	delete audio;
	delete video;
	delete set;
	delete excl;
	delete par;
	delete seq;
	delete hoice;
}
