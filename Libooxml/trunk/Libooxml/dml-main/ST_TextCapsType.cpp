#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextCapsType::ST_TextCapsType(value _v) {
	v=_v;
}

ST_TextCapsType::ST_TextCapsType(std::wstring b) {

}

ST_TextCapsType::ST_TextCapsType(ST_TextCapsType &b) {
	v=b.v;
}

ST_TextCapsType& ST_TextCapsType::operator =(value _v) {
	v=_v;
}

ST_TextCapsType& ST_TextCapsType::operator =(ST_TextCapsType& b) {
	v=b.v;
}

ST_TextCapsType& ST_TextCapsType::operator =(std::wstring b) {

}

ST_TextCapsType::operator const wchar_t*() const {

}
ST_TextCapsType::operator std::wstring () const {

}
