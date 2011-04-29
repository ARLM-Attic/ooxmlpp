#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Camera::CT_Camera() {
	rot = NULL;
}

CT_Camera::CT_Camera(CT_Camera &b) {
	rot = b.rot;
	fov = b.fov;
	zoom = b.zoom;
	prst = b.prst;
}

CT_Camera::CT_Camera(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rot = NULL;
	if (attributes->getNamedItem(L"fov")) {
		fov = attributes->getNamedItem(L"fov")->getNodeValue();
	}
	if (attributes->getNamedItem(L"zoom")) {
		zoom = attributes->getNamedItem(L"zoom")->getNodeValue();
	}
	if (attributes->getNamedItem(L"prst")) {
		prst = attributes->getNamedItem(L"prst")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rot") == 0) {
			rot.reset(new CT_SphereCoords(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Camera& CT_Camera::operator=(CT_Camera &b) {
	rot = b.rot;
	fov = b.fov;
	zoom = b.zoom;
	prst = b.prst;
	return *this;
}

CT_Camera::~CT_Camera() {
}

std::wstring CT_Camera::Xml() {
	return L"";
}

