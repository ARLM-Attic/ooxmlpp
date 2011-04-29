#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextSpacingPercentOrPercentString::ST_TextSpacingPercentOrPercentString(value _v) {
	v=_v;
}

ST_TextSpacingPercentOrPercentString::ST_TextSpacingPercentOrPercentString(std::wstring b) {

}

ST_TextSpacingPercentOrPercentString::ST_TextSpacingPercentOrPercentString(ST_TextSpacingPercentOrPercentString &b) {
	v=b.v;
}

ST_TextSpacingPercentOrPercentString& ST_TextSpacingPercentOrPercentString::operator =(value _v) {
	v=_v;
}

ST_TextSpacingPercentOrPercentString& ST_TextSpacingPercentOrPercentString::operator =(ST_TextSpacingPercentOrPercentString& b) {
	v=b.v;
}

ST_TextSpacingPercentOrPercentString& ST_TextSpacingPercentOrPercentString::operator =(std::wstring b) {

}

ST_TextSpacingPercentOrPercentString::operator const wchar_t*() const {

}
ST_TextSpacingPercentOrPercentString::operator std::wstring () const {

}
