#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PositiveCoordinate::ST_PositiveCoordinate(value _v) {
	v=_v;
}

ST_PositiveCoordinate::ST_PositiveCoordinate(std::wstring b) {

}

ST_PositiveCoordinate::ST_PositiveCoordinate(ST_PositiveCoordinate &b) {
	v=b.v;
}

ST_PositiveCoordinate& ST_PositiveCoordinate::operator =(value _v) {
	v=_v;
}

ST_PositiveCoordinate& ST_PositiveCoordinate::operator =(ST_PositiveCoordinate& b) {
	v=b.v;
}

ST_PositiveCoordinate& ST_PositiveCoordinate::operator =(std::wstring b) {

}

ST_PositiveCoordinate::operator const wchar_t*() const {

}
ST_PositiveCoordinate::operator std::wstring () const {

}
