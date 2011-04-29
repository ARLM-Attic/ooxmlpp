#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Scale2D::CT_Scale2D() {
	cx = NULL;
	cy = NULL;
}

CT_Scale2D::CT_Scale2D(CT_Scale2D &b) {
	cx = b.cx;
	cy = b.cy;
}

CT_Scale2D::CT_Scale2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cx = NULL;
	cy = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cx") == 0) {
			cx.reset(new CT_Ratio(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cy") == 0) {
			cy.reset(new CT_Ratio(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Scale2D& CT_Scale2D::operator=(CT_Scale2D &b) {
	cx = b.cx;
	cy = b.cy;
	return *this;
}

CT_Scale2D::~CT_Scale2D() {
}

std::wstring CT_Scale2D::Xml() {
	return L"";
}

