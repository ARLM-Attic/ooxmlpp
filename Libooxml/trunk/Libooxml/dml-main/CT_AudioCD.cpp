#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AudioCD::CT_AudioCD(std::shared_ptr<CT_AudioCDTime> &_st,std::shared_ptr<CT_AudioCDTime> &_end) {
	st = _st;
	end = _end;
	extLst = NULL;
}

CT_AudioCD::CT_AudioCD(CT_AudioCD &b) {
	st = b.st;
	end = b.end;
	extLst = b.extLst;
}

CT_AudioCD::CT_AudioCD(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	st = NULL;
	end = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"st") == 0) {
			st.reset(new CT_AudioCDTime(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"end") == 0) {
			end.reset(new CT_AudioCDTime(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_AudioCD& CT_AudioCD::operator=(CT_AudioCD &b) {
	st = b.st;
	end = b.end;
	extLst = b.extLst;
	return *this;
}

CT_AudioCD::~CT_AudioCD() {
}

std::wstring CT_AudioCD::Xml() {
	return L"";
}

