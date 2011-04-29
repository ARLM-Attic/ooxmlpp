#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextPoint::ST_TextPoint(value _v) {
	v=_v;
}

ST_TextPoint::ST_TextPoint(std::wstring b) {

}

ST_TextPoint::ST_TextPoint(ST_TextPoint &b) {
	v=b.v;
}

ST_TextPoint& ST_TextPoint::operator =(value _v) {
	v=_v;
}

ST_TextPoint& ST_TextPoint::operator =(ST_TextPoint& b) {
	v=b.v;
}

ST_TextPoint& ST_TextPoint::operator =(std::wstring b) {

}

ST_TextPoint::operator const wchar_t*() const {

}
ST_TextPoint::operator std::wstring () const {

}
