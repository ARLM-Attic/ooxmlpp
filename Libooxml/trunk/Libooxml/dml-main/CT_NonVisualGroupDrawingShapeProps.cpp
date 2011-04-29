#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NonVisualGroupDrawingShapeProps::CT_NonVisualGroupDrawingShapeProps() {
	grpSpLocks = NULL;
	extLst = NULL;
}

CT_NonVisualGroupDrawingShapeProps::CT_NonVisualGroupDrawingShapeProps(CT_NonVisualGroupDrawingShapeProps &b) {
	grpSpLocks = b.grpSpLocks;
	extLst = b.extLst;
}

CT_NonVisualGroupDrawingShapeProps::CT_NonVisualGroupDrawingShapeProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	grpSpLocks = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"grpSpLocks") == 0) {
			grpSpLocks.reset(new CT_GroupLocking(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_NonVisualGroupDrawingShapeProps& CT_NonVisualGroupDrawingShapeProps::operator=(CT_NonVisualGroupDrawingShapeProps &b) {
	grpSpLocks = b.grpSpLocks;
	extLst = b.extLst;
	return *this;
}

CT_NonVisualGroupDrawingShapeProps::~CT_NonVisualGroupDrawingShapeProps() {
}

std::wstring CT_NonVisualGroupDrawingShapeProps::Xml() {
	return L"";
}

