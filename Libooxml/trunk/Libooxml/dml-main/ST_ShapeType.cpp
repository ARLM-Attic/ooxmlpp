#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_ShapeType::ST_ShapeType(value _v) {
	v=_v;
}

ST_ShapeType::ST_ShapeType(std::wstring b) {

}

ST_ShapeType::ST_ShapeType(ST_ShapeType &b) {
	v=b.v;
}

ST_ShapeType& ST_ShapeType::operator =(value _v) {
	v=_v;
}

ST_ShapeType& ST_ShapeType::operator =(ST_ShapeType& b) {
	v=b.v;
}

ST_ShapeType& ST_ShapeType::operator =(std::wstring b) {

}

ST_ShapeType::operator const wchar_t*() const {

}
ST_ShapeType::operator std::wstring () const {

}
