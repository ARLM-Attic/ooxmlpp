#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextShapeType::ST_TextShapeType(value _v) {
	v=_v;
}

ST_TextShapeType::ST_TextShapeType(std::wstring b) {

}

ST_TextShapeType::ST_TextShapeType(ST_TextShapeType &b) {
	v=b.v;
}

ST_TextShapeType& ST_TextShapeType::operator =(value _v) {
	v=_v;
}

ST_TextShapeType& ST_TextShapeType::operator =(ST_TextShapeType& b) {
	v=b.v;
}

ST_TextShapeType& ST_TextShapeType::operator =(std::wstring b) {

}

ST_TextShapeType::operator const wchar_t*() const {

}
ST_TextShapeType::operator std::wstring () const {

}
