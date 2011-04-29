#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_SphereCoords::CT_SphereCoords() {
}

CT_SphereCoords::CT_SphereCoords(CT_SphereCoords &b) {
	lat = b.lat;
	lon = b.lon;
	rev = b.rev;
}

CT_SphereCoords::CT_SphereCoords(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"lat")) {
		lat = attributes->getNamedItem(L"lat")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lon")) {
		lon = attributes->getNamedItem(L"lon")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rev")) {
		rev = attributes->getNamedItem(L"rev")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_SphereCoords& CT_SphereCoords::operator=(CT_SphereCoords &b) {
	lat = b.lat;
	lon = b.lon;
	rev = b.rev;
	return *this;
}

CT_SphereCoords::~CT_SphereCoords() {
}

std::wstring CT_SphereCoords::Xml() {
	return L"";
}

