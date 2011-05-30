#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Transform2D::CT_Transform2D() {
	off = NULL;
	ext = NULL;
	rot = 0;
	flipH = false;
	flipV = false;
}

CT_Transform2D::CT_Transform2D(CT_Transform2D &b) {
	off = b.off;
	ext = b.ext;
	flipH = b.flipH;
	flipV = b.flipV;
	rot = b.rot;
}

CT_Transform2D::CT_Transform2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	off = NULL;
	ext = NULL;
	rot = 0;
	flipH = false;
	flipV = false;
	if (attributes->getNamedItem(L"flipH")) {
		flipH = attributes->getNamedItem(L"flipH")->getNodeValue();
	}
	if (attributes->getNamedItem(L"flipV")) {
		flipV = attributes->getNamedItem(L"flipV")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rot")) {
		rot = attributes->getNamedItem(L"rot")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"off") == 0) {
			off.reset(new CT_Point2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ext") == 0) {
			ext.reset(new CT_PositiveSize2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Transform2D& CT_Transform2D::operator=(CT_Transform2D &b) {
	off = b.off;
	ext = b.ext;
	flipH = b.flipH;
	flipV = b.flipV;
	rot = b.rot;
	return *this;
}

CT_Transform2D::~CT_Transform2D() {
}

std::wstring CT_Transform2D::Xml() {
	return L"";
}

