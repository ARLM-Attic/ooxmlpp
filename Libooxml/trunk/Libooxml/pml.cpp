/*#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"
using namespace presentationml::main;
CT_Slide::CT_Slide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes): show(true), showMasterSp(true), showMasterPhAnim(true),  cSld(NULL), clrMapOvr(NULL), transition(NULL), timing(NULL), extLst(NULL) {
	if (nodelist == NULL) return;
	if (wcscmp(attributes->getNamedItem(L"show")->getNodeValue(),L"false") == 0) show = false;
	if (wcscmp(attributes->getNamedItem(L"showMasterSp")->getNodeValue(),L"false") == 0) showMasterSp = false;
	if (wcscmp(attributes->getNamedItem(L"showMasterPhAnim")->getNodeValue(),L"false") == 0) showMasterPhAnim = false;
	for (int i =0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cSld") == 0) {
			cSld = new CT_CommonSlideData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMapOvr") == 0) {
			//clrMapOvr = new drawingml::main::CT_ColorMappingOverride(nodelist->item(i)->getChildNodes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"transition") == 0) {
			//transition = new CT_SlideTransition(nodelist->item(i)->getChildNodes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"timing") == 0) {
			//timing = new CT_SlideTiming(nodelist->item(i)->getChildNodes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			//extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes());
		}
	}
}
CT_Slide::~CT_Slide() {
	delete cSld;
	//delete clrMapOvr;
	delete transition;
	delete timing;
	delete extLst;
}

CT_CommonSlideData::CT_CommonSlideData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) : name(L""), bg(NULL),spTree(NULL) {
	for (int i =0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bg") == 0) {
			bg = new CT_Background(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spTree") == 0) {
			spTree = new CT_GroupShape(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}
CT_CommonSlideData::~CT_CommonSlideData() {
	delete bg;
	delete spTree;
}

CT_GroupShape::CT_GroupShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	for (int i =0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvGrpSpPr") == 0) {
			//nvGrpSpPr = new CT_GroupShapeNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"grpSpPr") == 0) {
			grpSpPr = new drawingml::main::CT_GroupShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sp") == 0) {
			choice.push_back(new CT_Shape(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"grpSp") == 0) {
			choice.push_back(new CT_GroupShape(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"graphicFrame") == 0) {
			//choice.push_back(new CT_GraphicalObjectFrame(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cxnSp") == 0) {
			//choice.push_back(new CT_Connector(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"pic") == 0) {
			choice.push_back(new CT_Picture(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"contentPart") == 0) {
			//choice.push_back(new CT_Rel(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			//extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}
CT_GroupShape::~CT_GroupShape() {
	delete nvGrpSpPr;
	delete grpSpPr;
	for (auto iter = choice.begin(); iter != choice.end();++iter) {
		delete (*iter);
	}
	delete extLst;
}

CT_Shape::CT_Shape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) : useBgFill(false) {
	extLst = NULL;
	if (wcscmp(attributes->getNamedItem(L"useBgFill")->getNodeValue(),L"true") == 0) useBgFill = true;
	for (int i =0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvSpPr") == 0) {
			//nvGrpSpPr = new CT_GroupShapeNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr = new drawingml::main::CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style = new drawingml::main::CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txBody") == 0) {
			txBody = new drawingml::main::CT_TextBody(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			//extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}
CT_Shape::~CT_Shape() {
	delete nvSpPr;
	delete spPr;
	delete style;
	delete txBody;
	delete extLst;
}

CT_ShapeNonVisual::CT_ShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr = new drawingml::main::CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvSpPr") == 0) {
			cNvSpPr = new drawingml::main::CT_NonVisualDrawingShapeProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvPr") == 0) {
			nvPr = new CT_ApplicationNonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}
CT_ShapeNonVisual::~CT_ShapeNonVisual() {
	delete cNvPr;
	delete cNvSpPr;
	delete nvPr;

}

CT_ApplicationNonVisualDrawingProps::CT_ApplicationNonVisualDrawingProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) : isPhoto(false), userDrawn(false) {
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ph") == 0) {
			ph = new CT_Placeholder(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"custDataLst") == 0) {
			custDataLst = new CT_CustomerDataList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}
CT_ApplicationNonVisualDrawingProps::~CT_ApplicationNonVisualDrawingProps() {
	delete ph;
	delete custDataLst;
	delete extLst;
}

CT_Placeholder::CT_Placeholder(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) : type(ST_PlaceholderType::obj), orient(ST_Direction::horz),sz(ST_PlaceholderSize::full), idx(0), hasCustomPrompt(false) {
	/*if (wcscmp(attributes->getNamedItem(L"type")->getNodeValue(),L"true") == 0) useBgFill = true;
	if (wcscmp(attributes->getNamedItem(L"orient")->getNodeValue(),L"true") == 0) useBgFill = true;
	if (wcscmp(attributes->getNamedItem(L"sz")->getNodeValue(),L"true") == 0) useBgFill = true;
	if (wcscmp(attributes->getNamedItem(L"idx")->getNodeValue(),L"true") == 0) useBgFill = true;*/
	/*if (wcscmp(attributes->getNamedItem(L"hasCustomPrompt")->getNodeValue(),L"true") == 0) hasCustomPrompt = true;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionListModify(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}
CT_Placeholder::~CT_Placeholder() {
	delete extLst;
}
*/