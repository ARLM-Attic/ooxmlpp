#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextFontScalePercentOrPercentString::ST_TextFontScalePercentOrPercentString(value _v) {
	v=_v;
}

ST_TextFontScalePercentOrPercentString::ST_TextFontScalePercentOrPercentString(std::wstring b) {

}

ST_TextFontScalePercentOrPercentString::ST_TextFontScalePercentOrPercentString(ST_TextFontScalePercentOrPercentString &b) {
	v=b.v;
}

ST_TextFontScalePercentOrPercentString& ST_TextFontScalePercentOrPercentString::operator =(value _v) {
	v=_v;
}

ST_TextFontScalePercentOrPercentString& ST_TextFontScalePercentOrPercentString::operator =(ST_TextFontScalePercentOrPercentString& b) {
	v=b.v;
}

ST_TextFontScalePercentOrPercentString& ST_TextFontScalePercentOrPercentString::operator =(std::wstring b) {

}

ST_TextFontScalePercentOrPercentString::operator const wchar_t*() const {

}
ST_TextFontScalePercentOrPercentString::operator std::wstring () const {

}
