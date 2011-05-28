#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_DefaultShapeDefinition::CT_DefaultShapeDefinition(std::shared_ptr<CT_ShapeProperties> &_spPr,	std::shared_ptr<CT_TextBodyProperties> &_bodyPr,std::shared_ptr<CT_TextListStyle> &_lstStyle) {
	extLst = NULL;
	spPr = _spPr;
	style = NULL;
	bodyPr = _bodyPr;
	lstStyle = _lstStyle;
}

CT_DefaultShapeDefinition::CT_DefaultShapeDefinition(CT_DefaultShapeDefinition &b) {
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
	bodyPr = b.bodyPr;
	lstStyle = b.lstStyle;
}

CT_DefaultShapeDefinition::CT_DefaultShapeDefinition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	spPr = NULL;
	style = NULL;
	bodyPr = NULL;
	lstStyle = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr.reset(new CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style.reset(new CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"bodyPr") == 0) {
			bodyPr.reset(new CT_TextBodyProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lstStyle") == 0) {
			lstStyle.reset(new CT_TextListStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_DefaultShapeDefinition& CT_DefaultShapeDefinition::operator=(CT_DefaultShapeDefinition &b) {
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
	bodyPr = b.bodyPr;
	lstStyle = b.lstStyle;
	return *this;
}

CT_DefaultShapeDefinition::~CT_DefaultShapeDefinition() {
}

std::wstring CT_DefaultShapeDefinition::Xml() {
	return L"";
}

