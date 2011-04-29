#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Shape3D::CT_Shape3D() {
	bevelT = NULL;
	bevelB = NULL;
	extrusionClr = NULL;
	contourClr = NULL;
	extLst = NULL;
}

CT_Shape3D::CT_Shape3D(CT_Shape3D &b) {
	bevelT = b.bevelT;
	bevelB = b.bevelB;
	extrusionClr = b.extrusionClr;
	contourClr = b.contourClr;
	extLst = b.extLst;
	z = b.z;
	extrusionH = b.extrusionH;
	contourW = b.contourW;
	prstMaterial = b.prstMaterial;
}

CT_Shape3D::CT_Shape3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	bevelT = NULL;
	bevelB = NULL;
	extrusionClr = NULL;
	contourClr = NULL;
	extLst = NULL;
	if (attributes->getNamedItem(L"z")) {
		z = attributes->getNamedItem(L"z")->getNodeValue();
	}
	if (attributes->getNamedItem(L"extrusionH")) {
		extrusionH = attributes->getNamedItem(L"extrusionH")->getNodeValue();
	}
	if (attributes->getNamedItem(L"contourW")) {
		contourW = attributes->getNamedItem(L"contourW")->getNodeValue();
	}
	if (attributes->getNamedItem(L"prstMaterial")) {
		prstMaterial = attributes->getNamedItem(L"prstMaterial")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bevelT") == 0) {
			bevelT.reset(new CT_Bevel(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bevelB") == 0) {
			bevelB.reset(new CT_Bevel(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extrusionClr") == 0) {
			extrusionClr.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"contourClr") == 0) {
			contourClr.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_Shape3D& CT_Shape3D::operator=(CT_Shape3D &b) {
	bevelT = b.bevelT;
	bevelB = b.bevelB;
	extrusionClr = b.extrusionClr;
	contourClr = b.contourClr;
	extLst = b.extLst;
	z = b.z;
	extrusionH = b.extrusionH;
	contourW = b.contourW;
	prstMaterial = b.prstMaterial;
	return *this;
}

CT_Shape3D::~CT_Shape3D() {
}

std::wstring CT_Shape3D::Xml() {
	return L"";
}

