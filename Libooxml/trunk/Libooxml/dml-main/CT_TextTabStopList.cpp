#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextTabStopList::CT_TextTabStopList() {
	tab[0] = NULL;
	tab[1] = NULL;
	tab[2] = NULL;
	tab[3] = NULL;
	tab[4] = NULL;
	tab[5] = NULL;
	tab[6] = NULL;
	tab[7] = NULL;
	tab[8] = NULL;
	tab[9] = NULL;
	tab[10] = NULL;
	tab[11] = NULL;
	tab[12] = NULL;
	tab[13] = NULL;
	tab[14] = NULL;
	tab[15] = NULL;
	tab[16] = NULL;
	tab[17] = NULL;
	tab[18] = NULL;
	tab[19] = NULL;
	tab[20] = NULL;
	tab[21] = NULL;
	tab[22] = NULL;
	tab[23] = NULL;
	tab[24] = NULL;
	tab[25] = NULL;
	tab[26] = NULL;
	tab[27] = NULL;
	tab[28] = NULL;
	tab[29] = NULL;
	tab[30] = NULL;
	tab[31] = NULL;
}

CT_TextTabStopList::CT_TextTabStopList(CT_TextTabStopList &b) {
	tab[0] = b.tab[0];
	tab[1] = b.tab[1];
	tab[2] = b.tab[2];
	tab[3] = b.tab[3];
	tab[4] = b.tab[4];
	tab[5] = b.tab[5];
	tab[6] = b.tab[6];
	tab[7] = b.tab[7];
	tab[8] = b.tab[8];
	tab[9] = b.tab[9];
	tab[10] = b.tab[10];
	tab[11] = b.tab[11];
	tab[12] = b.tab[12];
	tab[13] = b.tab[13];
	tab[14] = b.tab[14];
	tab[15] = b.tab[15];
	tab[16] = b.tab[16];
	tab[17] = b.tab[17];
	tab[18] = b.tab[18];
	tab[19] = b.tab[19];
	tab[20] = b.tab[20];
	tab[21] = b.tab[21];
	tab[22] = b.tab[22];
	tab[23] = b.tab[23];
	tab[24] = b.tab[24];
	tab[25] = b.tab[25];
	tab[26] = b.tab[26];
	tab[27] = b.tab[27];
	tab[28] = b.tab[28];
	tab[29] = b.tab[29];
	tab[30] = b.tab[30];
	tab[31] = b.tab[31];
}

CT_TextTabStopList::CT_TextTabStopList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	tab[0] = NULL;
	tab[1] = NULL;
	tab[2] = NULL;
	tab[3] = NULL;
	tab[4] = NULL;
	tab[5] = NULL;
	tab[6] = NULL;
	tab[7] = NULL;
	tab[8] = NULL;
	tab[9] = NULL;
	tab[10] = NULL;
	tab[11] = NULL;
	tab[12] = NULL;
	tab[13] = NULL;
	tab[14] = NULL;
	tab[15] = NULL;
	tab[16] = NULL;
	tab[17] = NULL;
	tab[18] = NULL;
	tab[19] = NULL;
	tab[20] = NULL;
	tab[21] = NULL;
	tab[22] = NULL;
	tab[23] = NULL;
	tab[24] = NULL;
	tab[25] = NULL;
	tab[26] = NULL;
	tab[27] = NULL;
	tab[28] = NULL;
	tab[29] = NULL;
	tab[30] = NULL;
	tab[31] = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tab") == 0) {
			tab[i].reset(new CT_TextTabStop(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextTabStopList& CT_TextTabStopList::operator=(CT_TextTabStopList &b) {
	tab[0] = b.tab[0];
	tab[1] = b.tab[1];
	tab[2] = b.tab[2];
	tab[3] = b.tab[3];
	tab[4] = b.tab[4];
	tab[5] = b.tab[5];
	tab[6] = b.tab[6];
	tab[7] = b.tab[7];
	tab[8] = b.tab[8];
	tab[9] = b.tab[9];
	tab[10] = b.tab[10];
	tab[11] = b.tab[11];
	tab[12] = b.tab[12];
	tab[13] = b.tab[13];
	tab[14] = b.tab[14];
	tab[15] = b.tab[15];
	tab[16] = b.tab[16];
	tab[17] = b.tab[17];
	tab[18] = b.tab[18];
	tab[19] = b.tab[19];
	tab[20] = b.tab[20];
	tab[21] = b.tab[21];
	tab[22] = b.tab[22];
	tab[23] = b.tab[23];
	tab[24] = b.tab[24];
	tab[25] = b.tab[25];
	tab[26] = b.tab[26];
	tab[27] = b.tab[27];
	tab[28] = b.tab[28];
	tab[29] = b.tab[29];
	tab[30] = b.tab[30];
	tab[31] = b.tab[31];
	return *this;
}

CT_TextTabStopList::~CT_TextTabStopList() {
}

std::wstring CT_TextTabStopList::Xml() {
	return L"";
}

