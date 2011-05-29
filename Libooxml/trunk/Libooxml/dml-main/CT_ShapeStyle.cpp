#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_ShapeStyle::CT_ShapeStyle(std::shared_ptr<CT_StyleMatrixReference> &_lnRef,std::shared_ptr<CT_StyleMatrixReference> &_fillRef,	std::shared_ptr<CT_StyleMatrixReference> &_effectRef,	std::shared_ptr<CT_FontReference> &_fontRef) {
	fontRef = _fontRef;
	lnRef = _lnRef;
	fillRef = _fillRef;
	effectRef = _effectRef;
}

CT_ShapeStyle::CT_ShapeStyle(CT_ShapeStyle &b) {
	fontRef = b.fontRef;
	lnRef = b.lnRef;
	fillRef = b.fillRef;
	effectRef = b.effectRef;
}

CT_ShapeStyle::CT_ShapeStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	fontRef = NULL;
	lnRef = NULL;
	fillRef = NULL;
	effectRef = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fontRef") == 0) {
			fontRef.reset(new CT_FontReference(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"lnRef") == 0) {
			lnRef.reset(new CT_StyleMatrixReference(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillRef") == 0) {
			fillRef.reset(new CT_StyleMatrixReference(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectRef") == 0) {
			effectRef.reset(new CT_StyleMatrixReference(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_ShapeStyle& CT_ShapeStyle::operator=(CT_ShapeStyle &b) {
	fontRef = b.fontRef;
	lnRef = b.lnRef;
	fillRef = b.fillRef;
	effectRef = b.effectRef;
	return *this;
}

CT_ShapeStyle::~CT_ShapeStyle() {
}

std::wstring CT_ShapeStyle::Xml() {
	return L"";
}

