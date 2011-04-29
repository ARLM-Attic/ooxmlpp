#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_NonVisualPictureProperties::CT_NonVisualPictureProperties() {
	extLst = NULL;
	picLocks = NULL;
}

CT_NonVisualPictureProperties::CT_NonVisualPictureProperties(CT_NonVisualPictureProperties &b) {
	extLst = b.extLst;
	picLocks = b.picLocks;
	preferRelativeResize = b.preferRelativeResize;
}

CT_NonVisualPictureProperties::CT_NonVisualPictureProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	picLocks = NULL;
	if (attributes->getNamedItem(L"preferRelativeResize")) {
		preferRelativeResize = attributes->getNamedItem(L"preferRelativeResize")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"picLocks") == 0) {
			picLocks.reset(new CT_PictureLocking(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_NonVisualPictureProperties& CT_NonVisualPictureProperties::operator=(CT_NonVisualPictureProperties &b) {
	extLst = b.extLst;
	picLocks = b.picLocks;
	preferRelativeResize = b.preferRelativeResize;
	return *this;
}

CT_NonVisualPictureProperties::~CT_NonVisualPictureProperties() {
}

std::wstring CT_NonVisualPictureProperties::Xml() {
	return L"";
}

