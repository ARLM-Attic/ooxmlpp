#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ShapeProperties::CT_ShapeProperties() {
	ln = NULL;
	extLst = NULL;
	scene3d = NULL;
	sp3d = NULL;
	xfrm = NULL;
	effectProperties = NULL;
	fillProperties = NULL;
	geometry = NULL;
}

CT_ShapeProperties::CT_ShapeProperties(CT_ShapeProperties &b) {
	ln = b.ln;
	extLst = b.extLst;
	scene3d = b.scene3d;
	sp3d = b.sp3d;
	xfrm = b.xfrm;
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	geometry = b.geometry;
	bwMode = b.bwMode;
}

CT_ShapeProperties::CT_ShapeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	ln = NULL;
	extLst = NULL;
	scene3d = NULL;
	sp3d = NULL;
	xfrm = NULL;
	effectProperties = NULL;
	fillProperties = NULL;
	geometry = NULL;
	if (attributes->getNamedItem(L"bwMode")) {
		bwMode = attributes->getNamedItem(L"bwMode")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ln") == 0) {
			ln.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"scene3d") == 0) {
			scene3d.reset(new CT_Scene3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sp3d") == 0) {
			sp3d.reset(new CT_Shape3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"xfrm") == 0) {
			xfrm.reset(new CT_Transform2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"geometry") == 0) {
			geometry.reset(new EG_Geometry(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ShapeProperties& CT_ShapeProperties::operator=(CT_ShapeProperties &b) {
	ln = b.ln;
	extLst = b.extLst;
	scene3d = b.scene3d;
	sp3d = b.sp3d;
	xfrm = b.xfrm;
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	geometry = b.geometry;
	bwMode = b.bwMode;
	return *this;
}

CT_ShapeProperties::~CT_ShapeProperties() {
}

std::wstring CT_ShapeProperties::Xml() {
	return L"";
}

