#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EmbeddedWAVAudioFile::CT_EmbeddedWAVAudioFile() {
}

CT_EmbeddedWAVAudioFile::CT_EmbeddedWAVAudioFile(CT_EmbeddedWAVAudioFile &b) {
	embed = b.embed;
	name = b.name;
}

CT_EmbeddedWAVAudioFile::CT_EmbeddedWAVAudioFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"embed")) {
		embed = attributes->getNamedItem(L"embed")->getNodeValue();
	}
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_EmbeddedWAVAudioFile& CT_EmbeddedWAVAudioFile::operator=(CT_EmbeddedWAVAudioFile &b) {
	embed = b.embed;
	name = b.name;
	return *this;
}

CT_EmbeddedWAVAudioFile::~CT_EmbeddedWAVAudioFile() {
}

std::wstring CT_EmbeddedWAVAudioFile::Xml() {
	return L"";
}

