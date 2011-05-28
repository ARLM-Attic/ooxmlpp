#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Cell3D::CT_Cell3D(std::shared_ptr<CT_Bevel> &_bevel) : prstMaterial(ST_PresetMaterialType::plastic) {
	bevel = NULL;
	lightRig = NULL;
	extLst = NULL;
}

CT_Cell3D::CT_Cell3D(CT_Cell3D &b) {
	bevel = b.bevel;
	lightRig = b.lightRig;
	extLst = b.extLst;
	prstMaterial = b.prstMaterial;
}

CT_Cell3D::CT_Cell3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bevel = NULL;
	lightRig = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"prstMaterial")) {
		prstMaterial = attributes->getNamedItem(L"prstMaterial")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bevel") == 0) {
			bevel.reset(new CT_Bevel(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lightRig") == 0) {
			lightRig.reset(new CT_LightRig(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Cell3D& CT_Cell3D::operator=(CT_Cell3D &b) {
	bevel = b.bevel;
	lightRig = b.lightRig;
	extLst = b.extLst;
	prstMaterial = b.prstMaterial;
	return *this;
}

CT_Cell3D::~CT_Cell3D() {
}

std::wstring CT_Cell3D::Xml() {
	return L"";
}

