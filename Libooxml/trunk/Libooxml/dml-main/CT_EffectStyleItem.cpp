#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EffectStyleItem::CT_EffectStyleItem(std::shared_ptr<EG_EffectProperties> &_effectProperties) {
	scene3d = NULL;
	sp3d = NULL;
	effectProperties = _effectProperties;
}

CT_EffectStyleItem::CT_EffectStyleItem(CT_EffectStyleItem &b) {
	scene3d = b.scene3d;
	sp3d = b.sp3d;
	effectProperties = b.effectProperties;
}

CT_EffectStyleItem::CT_EffectStyleItem(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	scene3d = NULL;
	sp3d = NULL;
	effectProperties = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"scene3d") == 0) {
			scene3d.reset(new CT_Scene3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sp3d") == 0) {
			sp3d.reset(new CT_Shape3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_EffectStyleItem& CT_EffectStyleItem::operator=(CT_EffectStyleItem &b) {
	scene3d = b.scene3d;
	sp3d = b.sp3d;
	effectProperties = b.effectProperties;
	return *this;
}

CT_EffectStyleItem::~CT_EffectStyleItem() {
}

std::wstring CT_EffectStyleItem::Xml() {
	return L"";
}

