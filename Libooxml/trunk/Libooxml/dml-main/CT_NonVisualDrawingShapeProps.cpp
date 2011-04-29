#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NonVisualDrawingShapeProps::CT_NonVisualDrawingShapeProps() {
	extLst = NULL;
	spLocks = NULL;
}

CT_NonVisualDrawingShapeProps::CT_NonVisualDrawingShapeProps(CT_NonVisualDrawingShapeProps &b) {
	extLst = b.extLst;
	spLocks = b.spLocks;
	txBox = b.txBox;
}

CT_NonVisualDrawingShapeProps::CT_NonVisualDrawingShapeProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	spLocks = NULL;
	if (attributes->getNamedItem(L"txBox")) {
		txBox = attributes->getNamedItem(L"txBox")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spLocks") == 0) {
			spLocks.reset(new CT_ShapeLocking(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_NonVisualDrawingShapeProps& CT_NonVisualDrawingShapeProps::operator=(CT_NonVisualDrawingShapeProps &b) {
	extLst = b.extLst;
	spLocks = b.spLocks;
	txBox = b.txBox;
	return *this;
}

CT_NonVisualDrawingShapeProps::~CT_NonVisualDrawingShapeProps() {
}

std::wstring CT_NonVisualDrawingShapeProps::Xml() {
	return L"";
}

