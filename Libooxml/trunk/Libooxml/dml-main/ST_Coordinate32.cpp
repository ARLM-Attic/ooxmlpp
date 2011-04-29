#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_Coordinate32::ST_Coordinate32(value _v) {
	v=_v;
}

ST_Coordinate32::ST_Coordinate32(std::wstring b) {

}

ST_Coordinate32::ST_Coordinate32(ST_Coordinate32 &b) {
	v=b.v;
}

ST_Coordinate32& ST_Coordinate32::operator =(value _v) {
	v=_v;
}

ST_Coordinate32& ST_Coordinate32::operator =(ST_Coordinate32& b) {
	v=b.v;
}

ST_Coordinate32& ST_Coordinate32::operator =(std::wstring b) {

}

ST_Coordinate32::operator const wchar_t*() const {

}
ST_Coordinate32::operator std::wstring () const {

}
