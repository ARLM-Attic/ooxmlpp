#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GradientFillProperties::CT_GradientFillProperties() {
	gsList = NULL;
	tileRect = NULL;
	shadeProperties = NULL;
}

CT_GradientFillProperties::CT_GradientFillProperties(CT_GradientFillProperties &b) {
	gsList = b.gsList;
	tileRect = b.tileRect;
	shadeProperties = b.shadeProperties;
	rotWithShape = b.rotWithShape;
	flip = b.flip;
}

CT_GradientFillProperties::CT_GradientFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	gsList = NULL;
	tileRect = NULL;
	shadeProperties = NULL;
	if (attributes->getNamedItem(L"rotWithShape")) {
		rotWithShape = attributes->getNamedItem(L"rotWithShape")->getNodeValue();
	}
	if (attributes->getNamedItem(L"flip")) {
		flip = attributes->getNamedItem(L"flip")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"gsList") == 0) {
			gsList.reset(new CT_GradientStopList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"tileRect") == 0) {
			tileRect.reset(new CT_RelativeRect(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"shadeProperties") == 0) {
			shadeProperties.reset(new EG_ShadeProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GradientFillProperties& CT_GradientFillProperties::operator=(CT_GradientFillProperties &b) {
	gsList = b.gsList;
	tileRect = b.tileRect;
	shadeProperties = b.shadeProperties;
	rotWithShape = b.rotWithShape;
	flip = b.flip;
	return *this;
}

CT_GradientFillProperties::~CT_GradientFillProperties() {
}

std::wstring CT_GradientFillProperties::Xml() {
	return L"";
}

