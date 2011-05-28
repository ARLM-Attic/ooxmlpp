#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorChangeEffect::CT_ColorChangeEffect(std::shared_ptr<CT_Color> _clrFrom,	std::shared_ptr<CT_Color> _clrTo): useA(true) {
	clrFrom = _clrFrom;
	clrTo = _clrTo;
}

CT_ColorChangeEffect::CT_ColorChangeEffect(CT_ColorChangeEffect &b) {
	clrFrom = b.clrFrom;
	clrTo = b.clrTo;
	useA = b.useA;
}

CT_ColorChangeEffect::CT_ColorChangeEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	clrFrom = NULL;
	clrTo = NULL;
	if (attributes->getNamedItem(L"useA")) {
		useA = attributes->getNamedItem(L"useA")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrFrom") == 0) {
			clrFrom.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrTo") == 0) {
			clrTo.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorChangeEffect& CT_ColorChangeEffect::operator=(CT_ColorChangeEffect &b) {
	clrFrom = b.clrFrom;
	clrTo = b.clrTo;
	useA = b.useA;
	return *this;
}

CT_ColorChangeEffect::~CT_ColorChangeEffect() {
}

std::wstring CT_ColorChangeEffect::Xml() {
	return L"";
}

