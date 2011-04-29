#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextHorzOverflowType::ST_TextHorzOverflowType(value _v) {
	v=_v;
}

ST_TextHorzOverflowType::ST_TextHorzOverflowType(std::wstring b) {

}

ST_TextHorzOverflowType::ST_TextHorzOverflowType(ST_TextHorzOverflowType &b) {
	v=b.v;
}

ST_TextHorzOverflowType& ST_TextHorzOverflowType::operator =(value _v) {
	v=_v;
}

ST_TextHorzOverflowType& ST_TextHorzOverflowType::operator =(ST_TextHorzOverflowType& b) {
	v=b.v;
}

ST_TextHorzOverflowType& ST_TextHorzOverflowType::operator =(std::wstring b) {

}

ST_TextHorzOverflowType::operator const wchar_t*() const {

}
ST_TextHorzOverflowType::operator std::wstring () const {

}
