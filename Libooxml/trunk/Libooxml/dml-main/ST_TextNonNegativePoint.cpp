#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextNonNegativePoint::ST_TextNonNegativePoint(value _v) {
	v=_v;
}

ST_TextNonNegativePoint::ST_TextNonNegativePoint(std::wstring b) {

}

ST_TextNonNegativePoint::ST_TextNonNegativePoint(ST_TextNonNegativePoint &b) {
	v=b.v;
}

ST_TextNonNegativePoint& ST_TextNonNegativePoint::operator =(value _v) {
	v=_v;
}

ST_TextNonNegativePoint& ST_TextNonNegativePoint::operator =(ST_TextNonNegativePoint& b) {
	v=b.v;
}

ST_TextNonNegativePoint& ST_TextNonNegativePoint::operator =(std::wstring b) {

}

ST_TextNonNegativePoint::operator const wchar_t*() const {

}
ST_TextNonNegativePoint::operator std::wstring () const {

}
