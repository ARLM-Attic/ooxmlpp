#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LineEndWidth::ST_LineEndWidth(value _v) {
	v=_v;
}

ST_LineEndWidth::ST_LineEndWidth(std::wstring b) {

}

ST_LineEndWidth::ST_LineEndWidth(ST_LineEndWidth &b) {
	v=b.v;
}

ST_LineEndWidth& ST_LineEndWidth::operator =(value _v) {
	v=_v;
}

ST_LineEndWidth& ST_LineEndWidth::operator =(ST_LineEndWidth& b) {
	v=b.v;
}

ST_LineEndWidth& ST_LineEndWidth::operator =(std::wstring b) {

}

ST_LineEndWidth::operator const wchar_t*() const {

}
ST_LineEndWidth::operator std::wstring () const {

}
