#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GvmlTextShape::CT_GvmlTextShape(std::shared_ptr<CT_TextBody> &_txBody, Choice &_choice) {
	txBody = _txBody;
	choice = _choice;
	extLst = NULL;
}

CT_GvmlTextShape::CT_GvmlTextShape(CT_GvmlTextShape &b) {
	txBody = b.txBody;
	choice = b.choice;
	extLst = b.extLst;
}

CT_GvmlTextShape::CT_GvmlTextShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	txBody = NULL;
	//choice = NULL;
	extLst = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"txBody") == 0) {
			txBody.reset(new CT_TextBody(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"useSpRect") == 0) {
			choice = new CT_GvmlUseShapeRectangle(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"xfrm") == 0) {
			choice = new CT_Transform2D(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_GvmlTextShape& CT_GvmlTextShape::operator=(CT_GvmlTextShape &b) {
	txBody = b.txBody;
	choice = b.choice;
	extLst = b.extLst;
	return *this;
}

CT_GvmlTextShape::~CT_GvmlTextShape() {
}

std::wstring CT_GvmlTextShape::Xml() {
	return L"";
}


CT_GvmlTextShape::Choice::Choice() {
	vtype = Transform2D;
	_xfrm.reset(new CT_Transform2D());
}

CT_GvmlTextShape::Choice& CT_GvmlTextShape::Choice::operator=(std_shared_ptr_CT_GvmlUseShapeRectangle &__useSpRect) {
	_useSpRect = __useSpRect;
	vtype = GvmlUseShapeRectangle;
	_xfrm = NULL;
}
CT_GvmlTextShape::Choice& CT_GvmlTextShape::Choice::operator=(std_shared_ptr_CT_Transform2D &__xfrm) {
	_xfrm = __xfrm;
	vtype = Transform2D;
	_useSpRect;
}
CT_GvmlTextShape::Choice& CT_GvmlTextShape::Choice::operator=(CT_GvmlUseShapeRectangle *__useSpRect) {
	CT_GvmlUseShapeRectangle *t = new CT_GvmlUseShapeRectangle(*__useSpRect);//make a copy;
	_useSpRect.reset(t);
}
CT_GvmlTextShape::Choice& CT_GvmlTextShape::Choice::operator=(CT_Transform2D *__xfrm) {
	CT_Transform2D *t = new CT_Transform2D(*__xfrm);//copy
	_xfrm.reset(t);
}
CT_GvmlTextShape::Choice::std_shared_ptr_CT_GvmlUseShapeRectangle CT_GvmlTextShape::Choice::useSpRect() {
	return _useSpRect;
}
CT_GvmlTextShape::Choice::std_shared_ptr_CT_Transform2D CT_GvmlTextShape::Choice::xfrm() {
	return _xfrm;
}
CT_GvmlTextShape::Choice::valuetype CT_GvmlTextShape::Choice::type() {
	return vtype;
}