#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EffectList::CT_EffectList() {
	blur = NULL;
	fillOverlay = NULL;
	glow = NULL;
	innerShdw = NULL;
	outerShdw = NULL;
	prstShdw = NULL;
	reflection = NULL;
	softEdge = NULL;
}

CT_EffectList::CT_EffectList(CT_EffectList &b) {
	blur = b.blur;
	fillOverlay = b.fillOverlay;
	glow = b.glow;
	innerShdw = b.innerShdw;
	outerShdw = b.outerShdw;
	prstShdw = b.prstShdw;
	reflection = b.reflection;
	softEdge = b.softEdge;
}

CT_EffectList::CT_EffectList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	blur = NULL;
	fillOverlay = NULL;
	glow = NULL;
	innerShdw = NULL;
	outerShdw = NULL;
	prstShdw = NULL;
	reflection = NULL;
	softEdge = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blur") == 0) {
			blur.reset(new CT_BlurEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillOverlay") == 0) {
			fillOverlay.reset(new CT_FillOverlayEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"glow") == 0) {
			glow.reset(new CT_GlowEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"innerShdw") == 0) {
			innerShdw.reset(new CT_InnerShadowEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"outerShdw") == 0) {
			outerShdw.reset(new CT_OuterShadowEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"prstShdw") == 0) {
			prstShdw.reset(new CT_PresetShadowEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"reflection") == 0) {
			reflection.reset(new CT_ReflectionEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"softEdge") == 0) {
			softEdge.reset(new CT_SoftEdgesEffect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_EffectList& CT_EffectList::operator=(CT_EffectList &b) {
	blur = b.blur;
	fillOverlay = b.fillOverlay;
	glow = b.glow;
	innerShdw = b.innerShdw;
	outerShdw = b.outerShdw;
	prstShdw = b.prstShdw;
	reflection = b.reflection;
	softEdge = b.softEdge;
	return *this;
}

CT_EffectList::~CT_EffectList() {
}

std::wstring CT_EffectList::Xml() {
	return L"";
}

