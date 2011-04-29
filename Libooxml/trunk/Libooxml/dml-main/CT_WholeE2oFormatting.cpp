#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_WholeE2oFormatting::CT_WholeE2oFormatting() {
	effectDag = NULL;
	effectLst = NULL;
	ln = NULL;
	effectProperties = NULL;
}

CT_WholeE2oFormatting::CT_WholeE2oFormatting(CT_WholeE2oFormatting &b) {
	effectDag = b.effectDag;
	effectLst = b.effectLst;
	ln = b.ln;
	effectProperties = b.effectProperties;
}

CT_WholeE2oFormatting::CT_WholeE2oFormatting(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	effectDag = NULL;
	effectLst = NULL;
	ln = NULL;
	effectProperties = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectDag") == 0) {
			effectDag.reset(new CT_EffectContainer(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectLst") == 0) {
			effectLst.reset(new CT_EffectList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ln") == 0) {
			ln.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_WholeE2oFormatting& CT_WholeE2oFormatting::operator=(CT_WholeE2oFormatting &b) {
	effectDag = b.effectDag;
	effectLst = b.effectLst;
	ln = b.ln;
	effectProperties = b.effectProperties;
	return *this;
}

CT_WholeE2oFormatting::~CT_WholeE2oFormatting() {
}

std::wstring CT_WholeE2oFormatting::Xml() {
	return L"";
}

