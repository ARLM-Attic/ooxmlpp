#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_DashStop::CT_DashStop(ST_PositivePercentage &_d, ST_PositivePercentage &_sp) {
	d = _d;
	sp = _sp;
}

CT_DashStop::CT_DashStop(CT_DashStop &b) {
	d = b.d;
	sp = b.sp;
}

CT_DashStop::CT_DashStop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"d")) {
		d = attributes->getNamedItem(L"d")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sp")) {
		sp = attributes->getNamedItem(L"sp")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_DashStop& CT_DashStop::operator=(CT_DashStop &b) {
	d = b.d;
	sp = b.sp;
	return *this;
}

CT_DashStop::~CT_DashStop() {
}

std::wstring CT_DashStop::Xml() {
	return L"";
}

