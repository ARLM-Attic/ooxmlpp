#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_FillProperties::CT_FillProperties(std::shared_ptr<EG_FillProperties> &_fillProperties) {
	fillProperties = _fillProperties;
}

CT_FillProperties::CT_FillProperties(CT_FillProperties &b) {
	fillProperties = b.fillProperties;
}

CT_FillProperties::CT_FillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fillProperties = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_FillProperties& CT_FillProperties::operator=(CT_FillProperties &b) {
	fillProperties = b.fillProperties;
	return *this;
}

CT_FillProperties::~CT_FillProperties() {
}

std::wstring CT_FillProperties::Xml() {
	return L"";
}

