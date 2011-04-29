#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GroupShapeProperties::CT_GroupShapeProperties() {
	xfrm = NULL;
	extLst = NULL;
	scene3d = NULL;
	effectProperties = NULL;
	fillProperties = NULL;
}

CT_GroupShapeProperties::CT_GroupShapeProperties(CT_GroupShapeProperties &b) {
	xfrm = b.xfrm;
	extLst = b.extLst;
	scene3d = b.scene3d;
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	bwMode = b.bwMode;
}

CT_GroupShapeProperties::CT_GroupShapeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	xfrm = NULL;
	extLst = NULL;
	scene3d = NULL;
	effectProperties = NULL;
	fillProperties = NULL;
	if (attributes->getNamedItem(L"bwMode")) {
		bwMode = attributes->getNamedItem(L"bwMode")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"xfrm") == 0) {
			xfrm.reset(new CT_GroupTransform2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"scene3d") == 0) {
			scene3d.reset(new CT_Scene3D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GroupShapeProperties& CT_GroupShapeProperties::operator=(CT_GroupShapeProperties &b) {
	xfrm = b.xfrm;
	extLst = b.extLst;
	scene3d = b.scene3d;
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	bwMode = b.bwMode;
	return *this;
}

CT_GroupShapeProperties::~CT_GroupShapeProperties() {
}

std::wstring CT_GroupShapeProperties::Xml() {
	return L"";
}

