#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlPicture::CT_GvmlPicture() {
	blipFill = NULL;
	nvvPicPr = NULL;
	extLst = NULL;
	spPr = NULL;
	style = NULL;
}

CT_GvmlPicture::CT_GvmlPicture(CT_GvmlPicture &b) {
	blipFill = b.blipFill;
	nvvPicPr = b.nvvPicPr;
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
}

CT_GvmlPicture::CT_GvmlPicture(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	blipFill = NULL;
	nvvPicPr = NULL;
	extLst = NULL;
	spPr = NULL;
	style = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"blipFill") == 0) {
			blipFill.reset(new CT_BlipFillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"nvvPicPr") == 0) {
			nvvPicPr.reset(new CT_GvmlPictureNonVisual(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"spPr") == 0) {
			spPr.reset(new CT_ShapeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"style") == 0) {
			style.reset(new CT_ShapeStyle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GvmlPicture& CT_GvmlPicture::operator=(CT_GvmlPicture &b) {
	blipFill = b.blipFill;
	nvvPicPr = b.nvvPicPr;
	extLst = b.extLst;
	spPr = b.spPr;
	style = b.style;
	return *this;
}

CT_GvmlPicture::~CT_GvmlPicture() {
}

std::wstring CT_GvmlPicture::Xml() {
	return L"";
}

