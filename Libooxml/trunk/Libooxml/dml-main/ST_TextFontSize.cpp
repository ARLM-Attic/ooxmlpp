#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextFontSize::ST_TextFontSize(value _v) {
	v=_v;
}

ST_TextFontSize::ST_TextFontSize(std::wstring b) {

}

ST_TextFontSize::ST_TextFontSize(ST_TextFontSize &b) {
	v=b.v;
}

ST_TextFontSize& ST_TextFontSize::operator =(value _v) {
	v=_v;
}

ST_TextFontSize& ST_TextFontSize::operator =(ST_TextFontSize& b) {
	v=b.v;
}

ST_TextFontSize& ST_TextFontSize::operator =(std::wstring b) {

}

ST_TextFontSize::operator const wchar_t*() const {

}
ST_TextFontSize::operator std::wstring () const {

}
