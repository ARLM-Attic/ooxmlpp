#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextVerticalType::ST_TextVerticalType(value _v) {
	v=_v;
}

ST_TextVerticalType::ST_TextVerticalType(std::wstring b) {

}

ST_TextVerticalType::ST_TextVerticalType(ST_TextVerticalType &b) {
	v=b.v;
}

ST_TextVerticalType& ST_TextVerticalType::operator =(value _v) {
	v=_v;
}

ST_TextVerticalType& ST_TextVerticalType::operator =(ST_TextVerticalType& b) {
	v=b.v;
}

ST_TextVerticalType& ST_TextVerticalType::operator =(std::wstring b) {

}

ST_TextVerticalType::operator const wchar_t*() const {

}
ST_TextVerticalType::operator std::wstring () const {

}
