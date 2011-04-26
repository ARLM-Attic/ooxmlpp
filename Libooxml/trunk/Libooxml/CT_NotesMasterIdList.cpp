#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_NotesMasterIdList::CT_NotesMasterIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	notesMasterId = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"notesMasterId") == 0) {
			notesMasterId = new CT_NotesMasterIdListEntry(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_NotesMasterIdList::~CT_NotesMasterIdList() {
	delete notesMasterId;
}
