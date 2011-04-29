#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_RectAlignment::ST_RectAlignment(value _v) {
	v=_v;
}

ST_RectAlignment::ST_RectAlignment(std::wstring b) {

}

ST_RectAlignment::ST_RectAlignment(ST_RectAlignment &b) {
	v=b.v;
}

ST_RectAlignment& ST_RectAlignment::operator =(value _v) {
	v=_v;
}

ST_RectAlignment& ST_RectAlignment::operator =(ST_RectAlignment& b) {
	v=b.v;
}

ST_RectAlignment& ST_RectAlignment::operator =(std::wstring b) {

}

ST_RectAlignment::operator const wchar_t*() const {

}
ST_RectAlignment::operator std::wstring () const {

}
