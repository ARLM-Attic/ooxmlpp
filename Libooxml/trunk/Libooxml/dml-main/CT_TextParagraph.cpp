#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextParagraph::CT_TextParagraph() {
	endParaRPr = NULL;
	pPr = NULL;
	textRun.clear();
}

CT_TextParagraph::CT_TextParagraph(CT_TextParagraph &b) {
	endParaRPr = b.endParaRPr;
	pPr = b.pPr;
	textRun = b.textRun;
}

CT_TextParagraph::CT_TextParagraph(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	endParaRPr = NULL;
	pPr = NULL;
	textRun.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"endParaRPr") == 0) {
			endParaRPr.reset(new CT_TextCharacterProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pPr") == 0) {
			pPr.reset(new CT_TextParagraphProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textRun") == 0) {
			textRun.reset(new EG_TextRun(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextParagraph& CT_TextParagraph::operator=(CT_TextParagraph &b) {
	endParaRPr = b.endParaRPr;
	pPr = b.pPr;
	textRun = b.textRun;
	return *this;
}

CT_TextParagraph::~CT_TextParagraph() {
}

std::wstring CT_TextParagraph::Xml() {
	return L"";
}

