#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FontCollection::CT_FontCollection(std::shared_ptr<CT_TextFont> _latin,std::shared_ptr<CT_TextFont> _ea,std::shared_ptr<CT_TextFont> _cs) {
	extLst = NULL;
	font.clear();
	latin = _latin;
	ea = _ea;
	cs = _cs;
}

CT_FontCollection::CT_FontCollection(CT_FontCollection &b) {
	extLst = b.extLst;
	font = b.font;
	latin = b.latin;
	ea = b.ea;
	cs = b.cs;
}

CT_FontCollection::CT_FontCollection(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	font.clear();
	latin = NULL;
	ea = NULL;
	cs = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"font") == 0) {
			std::shared_ptr<CT_SupplementalFont> temp;
			temp.reset(new CT_SupplementalFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
			font.push_back(temp);
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"latin") == 0) {
			latin.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ea") == 0) {
			ea.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cs") == 0) {
			cs.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_FontCollection& CT_FontCollection::operator=(CT_FontCollection &b) {
	extLst = b.extLst;
	font = b.font;
	latin = b.latin;
	ea = b.ea;
	cs = b.cs;
	return *this;
}

CT_FontCollection::~CT_FontCollection() {
}

std::wstring CT_FontCollection::Xml() {
	return L"";
}

