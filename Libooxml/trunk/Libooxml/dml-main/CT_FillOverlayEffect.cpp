#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FillOverlayEffect::CT_FillOverlayEffect(std::shared_ptr<EG_FillProperties> &_fillProperties, ST_BlendMode &_blend) {
	fillProperties = _fillProperties;
	blend = _blend;
}

CT_FillOverlayEffect::CT_FillOverlayEffect(CT_FillOverlayEffect &b) {
	fillProperties = b.fillProperties;
	blend = b.blend;
}

CT_FillOverlayEffect::CT_FillOverlayEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fillProperties = NULL;
	if (attributes->getNamedItem(L"blend")) {
		blend = attributes->getNamedItem(L"blend")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_FillOverlayEffect& CT_FillOverlayEffect::operator=(CT_FillOverlayEffect &b) {
	fillProperties = b.fillProperties;
	blend = b.blend;
	return *this;
}

CT_FillOverlayEffect::~CT_FillOverlayEffect() {
}

std::wstring CT_FillOverlayEffect::Xml() {
	return L"";
}

