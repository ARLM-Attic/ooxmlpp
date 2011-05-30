#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextBody::CT_TextBody(std::shared_ptr<CT_TextBodyProperties> &_bodyPr,std::shared_ptr<CT_TextParagraph> &_p) {
	bodyPr = _bodyPr;
	lstStyle = NULL;
	p.clear();
	p.push_back(_p);
}

CT_TextBody::CT_TextBody(CT_TextBody &b) {
	bodyPr = b.bodyPr;
	lstStyle = b.lstStyle;
	p = b.p;
}

CT_TextBody::CT_TextBody(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bodyPr = NULL;
	lstStyle = NULL;
	p.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bodyPr") == 0) {
			bodyPr.reset(new CT_TextBodyProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lstStyle") == 0) {
			lstStyle.reset(new CT_TextListStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"p") == 0) {
			std::shared_ptr<CT_TextParagraph> temp;
			temp.reset(new CT_TextParagraph(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			p.push_back(temp);
		}
	}
}

CT_TextBody& CT_TextBody::operator=(CT_TextBody &b) {
	bodyPr = b.bodyPr;
	lstStyle = b.lstStyle;
	p = b.p;
	return *this;
}

CT_TextBody::~CT_TextBody() {
}

std::wstring CT_TextBody::Xml() {
	return L"";
}

