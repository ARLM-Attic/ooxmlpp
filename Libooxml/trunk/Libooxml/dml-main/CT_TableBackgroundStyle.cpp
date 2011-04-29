#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TableBackgroundStyle::CT_TableBackgroundStyle() {
	themeableEffectStyle = NULL;
	themeableFillStyle = NULL;
}

CT_TableBackgroundStyle::CT_TableBackgroundStyle(CT_TableBackgroundStyle &b) {
	themeableEffectStyle = b.themeableEffectStyle;
	themeableFillStyle = b.themeableFillStyle;
}

CT_TableBackgroundStyle::CT_TableBackgroundStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	themeableEffectStyle = NULL;
	themeableFillStyle = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"themeableEffectStyle") == 0) {
			themeableEffectStyle.reset(new EG_ThemeableEffectStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"themeableFillStyle") == 0) {
			themeableFillStyle.reset(new EG_ThemeableFillStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TableBackgroundStyle& CT_TableBackgroundStyle::operator=(CT_TableBackgroundStyle &b) {
	themeableEffectStyle = b.themeableEffectStyle;
	themeableFillStyle = b.themeableFillStyle;
	return *this;
}

CT_TableBackgroundStyle::~CT_TableBackgroundStyle() {
}

std::wstring CT_TableBackgroundStyle::Xml() {
	return L"";
}

