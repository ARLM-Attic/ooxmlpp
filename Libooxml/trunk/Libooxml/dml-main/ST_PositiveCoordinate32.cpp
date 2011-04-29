#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PositiveCoordinate32::ST_PositiveCoordinate32(value _v) {
	v=_v;
}

ST_PositiveCoordinate32::ST_PositiveCoordinate32(std::wstring b) {

}

ST_PositiveCoordinate32::ST_PositiveCoordinate32(ST_PositiveCoordinate32 &b) {
	v=b.v;
}

ST_PositiveCoordinate32& ST_PositiveCoordinate32::operator =(value _v) {
	v=_v;
}

ST_PositiveCoordinate32& ST_PositiveCoordinate32::operator =(ST_PositiveCoordinate32& b) {
	v=b.v;
}

ST_PositiveCoordinate32& ST_PositiveCoordinate32::operator =(std::wstring b) {

}

ST_PositiveCoordinate32::operator const wchar_t*() const {

}
ST_PositiveCoordinate32::operator std::wstring () const {

}
