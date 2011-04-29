#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextSpacingPoint::ST_TextSpacingPoint(value _v) {
	v=_v;
}

ST_TextSpacingPoint::ST_TextSpacingPoint(std::wstring b) {

}

ST_TextSpacingPoint::ST_TextSpacingPoint(ST_TextSpacingPoint &b) {
	v=b.v;
}

ST_TextSpacingPoint& ST_TextSpacingPoint::operator =(value _v) {
	v=_v;
}

ST_TextSpacingPoint& ST_TextSpacingPoint::operator =(ST_TextSpacingPoint& b) {
	v=b.v;
}

ST_TextSpacingPoint& ST_TextSpacingPoint::operator =(std::wstring b) {

}

ST_TextSpacingPoint::operator const wchar_t*() const {

}
ST_TextSpacingPoint::operator std::wstring () const {

}
