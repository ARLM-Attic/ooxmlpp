#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_StyleMatrix::CT_StyleMatrix() {
	bgFillStyleLst = NULL;
	effectStyleLst = NULL;
	fillStyleList = NULL;
	lnStyleLst = NULL;
}

CT_StyleMatrix::CT_StyleMatrix(CT_StyleMatrix &b) {
	bgFillStyleLst = b.bgFillStyleLst;
	effectStyleLst = b.effectStyleLst;
	fillStyleList = b.fillStyleList;
	lnStyleLst = b.lnStyleLst;
	name = b.name;
}

CT_StyleMatrix::CT_StyleMatrix(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bgFillStyleLst = NULL;
	effectStyleLst = NULL;
	fillStyleList = NULL;
	lnStyleLst = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bgFillStyleLst") == 0) {
			bgFillStyleLst.reset(new CT_BackgroundFillStyleList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectStyleLst") == 0) {
			effectStyleLst.reset(new CT_EffectStyleList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillStyleList") == 0) {
			fillStyleList.reset(new CT_FillStyleList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnStyleLst") == 0) {
			lnStyleLst.reset(new CT_LineStyleList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_StyleMatrix& CT_StyleMatrix::operator=(CT_StyleMatrix &b) {
	bgFillStyleLst = b.bgFillStyleLst;
	effectStyleLst = b.effectStyleLst;
	fillStyleList = b.fillStyleList;
	lnStyleLst = b.lnStyleLst;
	name = b.name;
	return *this;
}

CT_StyleMatrix::~CT_StyleMatrix() {
}

std::wstring CT_StyleMatrix::Xml() {
	return L"";
}

