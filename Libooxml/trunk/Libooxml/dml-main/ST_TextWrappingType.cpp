#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextWrappingType::ST_TextWrappingType(value _v) {
	v=_v;
}

ST_TextWrappingType::ST_TextWrappingType(std::wstring b) {

}

ST_TextWrappingType::ST_TextWrappingType(ST_TextWrappingType &b) {
	v=b.v;
}

ST_TextWrappingType& ST_TextWrappingType::operator =(value _v) {
	v=_v;
}

ST_TextWrappingType& ST_TextWrappingType::operator =(ST_TextWrappingType& b) {
	v=b.v;
}

ST_TextWrappingType& ST_TextWrappingType::operator =(std::wstring b) {

}

ST_TextWrappingType::operator const wchar_t*() const {

}
ST_TextWrappingType::operator std::wstring () const {

}
