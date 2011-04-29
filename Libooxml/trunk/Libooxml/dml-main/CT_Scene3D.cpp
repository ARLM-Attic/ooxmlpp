#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Scene3D::CT_Scene3D() {
	backdrop = NULL;
	camera = NULL;
	lightRig = NULL;
	extLst = NULL;
}

CT_Scene3D::CT_Scene3D(CT_Scene3D &b) {
	backdrop = b.backdrop;
	camera = b.camera;
	lightRig = b.lightRig;
	extLst = b.extLst;
}

CT_Scene3D::CT_Scene3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	backdrop = NULL;
	camera = NULL;
	lightRig = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"backdrop") == 0) {
			backdrop.reset(new CT_Backdrop(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"camera") == 0) {
			camera.reset(new CT_Camera(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lightRig") == 0) {
			lightRig.reset(new CT_LightRig(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Scene3D& CT_Scene3D::operator=(CT_Scene3D &b) {
	backdrop = b.backdrop;
	camera = b.camera;
	lightRig = b.lightRig;
	extLst = b.extLst;
	return *this;
}

CT_Scene3D::~CT_Scene3D() {
}

std::wstring CT_Scene3D::Xml() {
	return L"";
}

