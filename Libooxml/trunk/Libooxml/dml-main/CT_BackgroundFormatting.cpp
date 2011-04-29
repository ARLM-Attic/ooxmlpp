#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_BackgroundFormatting::CT_BackgroundFormatting() {
	effectProperties = NULL;
	fillProperties = NULL;
}

CT_BackgroundFormatting::CT_BackgroundFormatting(CT_BackgroundFormatting &b) {
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
}

CT_BackgroundFormatting::CT_BackgroundFormatting(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	effectProperties = NULL;
	fillProperties = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_BackgroundFormatting& CT_BackgroundFormatting::operator=(CT_BackgroundFormatting &b) {
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	return *this;
}

CT_BackgroundFormatting::~CT_BackgroundFormatting() {
}

std::wstring CT_BackgroundFormatting::Xml() {
	return L"";
}

