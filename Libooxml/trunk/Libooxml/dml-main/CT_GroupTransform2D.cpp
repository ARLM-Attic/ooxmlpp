#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GroupTransform2D::CT_GroupTransform2D() {
	off = NULL;
	chOff = NULL;
	ext = NULL;
	chExt = NULL;
}

CT_GroupTransform2D::CT_GroupTransform2D(CT_GroupTransform2D &b) {
	off = b.off;
	chOff = b.chOff;
	ext = b.ext;
	chExt = b.chExt;
	flipH = b.flipH;
	flipV = b.flipV;
	rot = b.rot;
}

CT_GroupTransform2D::CT_GroupTransform2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	off = NULL;
	chOff = NULL;
	ext = NULL;
	chExt = NULL;
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
		if (wcscmp(nodelist->item(i)->getLocalName(),L"chOff") == 0) {
			chOff.reset(new CT_Point2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ext") == 0) {
			ext.reset(new CT_PositiveSize2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"chExt") == 0) {
			chExt.reset(new CT_PositiveSize2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GroupTransform2D& CT_GroupTransform2D::operator=(CT_GroupTransform2D &b) {
	off = b.off;
	chOff = b.chOff;
	ext = b.ext;
	chExt = b.chExt;
	flipH = b.flipH;
	flipV = b.flipV;
	rot = b.rot;
	return *this;
}

CT_GroupTransform2D::~CT_GroupTransform2D() {
}

std::wstring CT_GroupTransform2D::Xml() {
	return L"";
}

