#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_AudioCDTime::CT_AudioCDTime() {
}

CT_AudioCDTime::CT_AudioCDTime(CT_AudioCDTime &b) {
	track = b.track;
	time = b.time;
}

CT_AudioCDTime::CT_AudioCDTime(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"track")) {
		track = attributes->getNamedItem(L"track")->getNodeValue();
	}
	if (attributes->getNamedItem(L"time")) {
		time = attributes->getNamedItem(L"time")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_AudioCDTime& CT_AudioCDTime::operator=(CT_AudioCDTime &b) {
	track = b.track;
	time = b.time;
	return *this;
}

CT_AudioCDTime::~CT_AudioCDTime() {
}

std::wstring CT_AudioCDTime::Xml() {
	return L"";
}

