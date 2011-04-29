#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LineProperties::CT_LineProperties() {
	headEnd = NULL;
	tailEnd = NULL;
	extLst = NULL;
	lineDash = NULL;
	lineFill = NULL;
	lineJoin = NULL;
}

CT_LineProperties::CT_LineProperties(CT_LineProperties &b) {
	headEnd = b.headEnd;
	tailEnd = b.tailEnd;
	extLst = b.extLst;
	lineDash = b.lineDash;
	lineFill = b.lineFill;
	lineJoin = b.lineJoin;
	cmpd = b.cmpd;
	cap = b.cap;
	w = b.w;
	algn = b.algn;
}

CT_LineProperties::CT_LineProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	headEnd = NULL;
	tailEnd = NULL;
	extLst = NULL;
	lineDash = NULL;
	lineFill = NULL;
	lineJoin = NULL;
	if (attributes->getNamedItem(L"cmpd")) {
		cmpd = attributes->getNamedItem(L"cmpd")->getNodeValue();
	}
	if (attributes->getNamedItem(L"cap")) {
		cap = attributes->getNamedItem(L"cap")->getNodeValue();
	}
	if (attributes->getNamedItem(L"w")) {
		w = attributes->getNamedItem(L"w")->getNodeValue();
	}
	if (attributes->getNamedItem(L"algn")) {
		algn = attributes->getNamedItem(L"algn")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"headEnd") == 0) {
			headEnd.reset(new CT_LineEndProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tailEnd") == 0) {
			tailEnd.reset(new CT_LineEndProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lineDash") == 0) {
			lineDash.reset(new EG_LineDashProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lineFill") == 0) {
			lineFill.reset(new EG_LineFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lineJoin") == 0) {
			lineJoin.reset(new EG_LineJoinProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_LineProperties& CT_LineProperties::operator=(CT_LineProperties &b) {
	headEnd = b.headEnd;
	tailEnd = b.tailEnd;
	extLst = b.extLst;
	lineDash = b.lineDash;
	lineFill = b.lineFill;
	lineJoin = b.lineJoin;
	cmpd = b.cmpd;
	cap = b.cap;
	w = b.w;
	algn = b.algn;
	return *this;
}

CT_LineProperties::~CT_LineProperties() {
}

std::wstring CT_LineProperties::Xml() {
	return L"";
}

