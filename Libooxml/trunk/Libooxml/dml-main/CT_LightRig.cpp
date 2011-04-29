#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_LightRig::CT_LightRig() {
	rot = NULL;
}

CT_LightRig::CT_LightRig(CT_LightRig &b) {
	rot = b.rot;
	dir = b.dir;
	rig = b.rig;
}

CT_LightRig::CT_LightRig(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rot = NULL;
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rig")) {
		rig = attributes->getNamedItem(L"rig")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rot") == 0) {
			rot.reset(new CT_SphereCoords(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_LightRig& CT_LightRig::operator=(CT_LightRig &b) {
	rot = b.rot;
	dir = b.dir;
	rig = b.rig;
	return *this;
}

CT_LightRig::~CT_LightRig() {
}

std::wstring CT_LightRig::Xml() {
	return L"";
}

