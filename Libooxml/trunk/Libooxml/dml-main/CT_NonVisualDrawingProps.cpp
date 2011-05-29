#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NonVisualDrawingProps::CT_NonVisualDrawingProps(ST_DrawingElementId &_id, std::wstring &_name) {
	hlinkClick = NULL;
	hlinkHover = NULL;
	extLst = NULL;
	id = _id;
	name = _name;
}

CT_NonVisualDrawingProps::CT_NonVisualDrawingProps(CT_NonVisualDrawingProps &b) {
	hlinkClick = b.hlinkClick;
	hlinkHover = b.hlinkHover;
	extLst = b.extLst;
	hidden = b.hidden;
	id = b.id;
	name = b.name;
	descr = b.descr;
	title = b.title;
}

CT_NonVisualDrawingProps::CT_NonVisualDrawingProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	hlinkClick = NULL;
	hlinkHover = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"hidden")) {
		hidden = attributes->getNamedItem(L"hidden")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	if (attributes->getNamedItem(L"descr")) {
		descr = attributes->getNamedItem(L"descr")->getNodeValue();
	}
	if (attributes->getNamedItem(L"title")) {
		title = attributes->getNamedItem(L"title")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hlinkClick") == 0) {
			hlinkClick.reset(new CT_Hyperlink(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hlinkHover") == 0) {
			hlinkHover.reset(new CT_Hyperlink(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_NonVisualDrawingProps& CT_NonVisualDrawingProps::operator=(CT_NonVisualDrawingProps &b) {
	hlinkClick = b.hlinkClick;
	hlinkHover = b.hlinkHover;
	extLst = b.extLst;
	hidden = b.hidden;
	id = b.id;
	name = b.name;
	descr = b.descr;
	title = b.title;
	return *this;
}

CT_NonVisualDrawingProps::~CT_NonVisualDrawingProps() {
}

std::wstring CT_NonVisualDrawingProps::Xml() {
	return L"";
}

