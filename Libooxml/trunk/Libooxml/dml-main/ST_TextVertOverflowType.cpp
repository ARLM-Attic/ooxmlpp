#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextVertOverflowType::ST_TextVertOverflowType(value _v) {
	v=_v;
}

ST_TextVertOverflowType::ST_TextVertOverflowType(std::wstring b) {

}

ST_TextVertOverflowType::ST_TextVertOverflowType(ST_TextVertOverflowType &b) {
	v=b.v;
}

ST_TextVertOverflowType& ST_TextVertOverflowType::operator =(value _v) {
	v=_v;
}

ST_TextVertOverflowType& ST_TextVertOverflowType::operator =(ST_TextVertOverflowType& b) {
	v=b.v;
}

ST_TextVertOverflowType& ST_TextVertOverflowType::operator =(std::wstring b) {

}

ST_TextVertOverflowType::operator const wchar_t*() const {

}
ST_TextVertOverflowType::operator std::wstring () const {

}
