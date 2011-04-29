#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextFontAlignType::ST_TextFontAlignType(value _v) {
	v=_v;
}

ST_TextFontAlignType::ST_TextFontAlignType(std::wstring b) {

}

ST_TextFontAlignType::ST_TextFontAlignType(ST_TextFontAlignType &b) {
	v=b.v;
}

ST_TextFontAlignType& ST_TextFontAlignType::operator =(value _v) {
	v=_v;
}

ST_TextFontAlignType& ST_TextFontAlignType::operator =(ST_TextFontAlignType& b) {
	v=b.v;
}

ST_TextFontAlignType& ST_TextFontAlignType::operator =(std::wstring b) {

}

ST_TextFontAlignType::operator const wchar_t*() const {

}
ST_TextFontAlignType::operator std::wstring () const {

}
