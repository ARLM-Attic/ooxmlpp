#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ColorMapping::CT_ColorMapping() {
	extLst = NULL;
}

CT_ColorMapping::CT_ColorMapping(CT_ColorMapping &b) {
	extLst = b.extLst;
	bg1 = b.bg1;
	tx1 = b.tx1;
	bg2 = b.bg2;
	tx2 = b.tx2;
	accent1 = b.accent1;
	accent2 = b.accent2;
	accent3 = b.accent3;
	accent4 = b.accent4;
	accent5 = b.accent5;
	accent6 = b.accent6;
	hlink = b.hlink;
	folHlink = b.folHlink;
}

CT_ColorMapping::CT_ColorMapping(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"bg1")) {
		bg1 = attributes->getNamedItem(L"bg1")->getNodeValue();
	}
	if (attributes->getNamedItem(L"tx1")) {
		tx1 = attributes->getNamedItem(L"tx1")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bg2")) {
		bg2 = attributes->getNamedItem(L"bg2")->getNodeValue();
	}
	if (attributes->getNamedItem(L"tx2")) {
		tx2 = attributes->getNamedItem(L"tx2")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accent1")) {
		accent1 = attributes->getNamedItem(L"accent1")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accent2")) {
		accent2 = attributes->getNamedItem(L"accent2")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accent3")) {
		accent3 = attributes->getNamedItem(L"accent3")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accent4")) {
		accent4 = attributes->getNamedItem(L"accent4")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accent5")) {
		accent5 = attributes->getNamedItem(L"accent5")->getNodeValue();
	}
	if (attributes->getNamedItem(L"accent6")) {
		accent6 = attributes->getNamedItem(L"accent6")->getNodeValue();
	}
	if (attributes->getNamedItem(L"hlink")) {
		hlink = attributes->getNamedItem(L"hlink")->getNodeValue();
	}
	if (attributes->getNamedItem(L"folHlink")) {
		folHlink = attributes->getNamedItem(L"folHlink")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ColorMapping& CT_ColorMapping::operator=(CT_ColorMapping &b) {
	extLst = b.extLst;
	bg1 = b.bg1;
	tx1 = b.tx1;
	bg2 = b.bg2;
	tx2 = b.tx2;
	accent1 = b.accent1;
	accent2 = b.accent2;
	accent3 = b.accent3;
	accent4 = b.accent4;
	accent5 = b.accent5;
	accent6 = b.accent6;
	hlink = b.hlink;
	folHlink = b.folHlink;
	return *this;
}

CT_ColorMapping::~CT_ColorMapping() {
}

std::wstring CT_ColorMapping::Xml() {
	return L"";
}

