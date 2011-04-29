#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Backdrop::CT_Backdrop(std::shared_ptr<CT_Point3D> _anchor,std::shared_ptr<CT_Vector3D> _norm,std::shared_ptr<CT_Vector3D> _up) {
	extLst = NULL;
	anchor = _anchor;
	norm = _norm;
	up = _up;
}

CT_Backdrop::CT_Backdrop(CT_Backdrop &b) {
	extLst = b.extLst;
	anchor = b.anchor;
	norm = b.norm;
	up = b.up;
}

CT_Backdrop::CT_Backdrop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	anchor = NULL;
	norm = NULL;
	up = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"anchor") == 0) {
			anchor.reset(new CT_Point3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"norm") == 0) {
			norm.reset(new CT_Vector3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"up") == 0) {
			up.reset(new CT_Vector3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Backdrop& CT_Backdrop::operator=(CT_Backdrop &b) {
	extLst = b.extLst;
	anchor = b.anchor;
	norm = b.norm;
	up = b.up;
	return *this;
}

CT_Backdrop::~CT_Backdrop() {
}

std::wstring CT_Backdrop::Xml() {
	return L"";
}

