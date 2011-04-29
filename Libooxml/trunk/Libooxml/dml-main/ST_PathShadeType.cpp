#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PathShadeType::ST_PathShadeType(value _v) {
	v=_v;
}

ST_PathShadeType::ST_PathShadeType(std::wstring b) {

}

ST_PathShadeType::ST_PathShadeType(ST_PathShadeType &b) {
	v=b.v;
}

ST_PathShadeType& ST_PathShadeType::operator =(value _v) {
	v=_v;
}

ST_PathShadeType& ST_PathShadeType::operator =(ST_PathShadeType& b) {
	v=b.v;
}

ST_PathShadeType& ST_PathShadeType::operator =(std::wstring b) {

}

ST_PathShadeType::operator const wchar_t*() const {

}
ST_PathShadeType::operator std::wstring () const {

}
