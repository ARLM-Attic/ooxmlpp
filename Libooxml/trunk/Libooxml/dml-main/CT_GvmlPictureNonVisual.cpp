#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlPictureNonVisual::CT_GvmlPictureNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr,	std::shared_ptr<CT_NonVisualPictureProperties> &_cNvPicPr) {
	cNvPr = _cNvPr;
	cNvPicPr = _cNvPicPr;
}

CT_GvmlPictureNonVisual::CT_GvmlPictureNonVisual(CT_GvmlPictureNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvPicPr = b.cNvPicPr;
}

CT_GvmlPictureNonVisual::CT_GvmlPictureNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cNvPr = NULL;
	cNvPicPr = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPr") == 0) {
			cNvPr.reset(new CT_NonVisualDrawingProps(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cNvPicPr") == 0) {
			cNvPicPr.reset(new CT_NonVisualPictureProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlPictureNonVisual& CT_GvmlPictureNonVisual::operator=(CT_GvmlPictureNonVisual &b) {
	cNvPr = b.cNvPr;
	cNvPicPr = b.cNvPicPr;
	return *this;
}

CT_GvmlPictureNonVisual::~CT_GvmlPictureNonVisual() {
}

std::wstring CT_GvmlPictureNonVisual::Xml() {
	return L"";
}

