#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_BlipCompression::ST_BlipCompression(value _v) {
	v=_v;
}

ST_BlipCompression::ST_BlipCompression(std::wstring b) {

}

ST_BlipCompression::ST_BlipCompression(ST_BlipCompression &b) {
	v=b.v;
}

ST_BlipCompression& ST_BlipCompression::operator =(value _v) {
	v=_v;
}

ST_BlipCompression& ST_BlipCompression::operator =(ST_BlipCompression& b) {
	v=b.v;
}

ST_BlipCompression& ST_BlipCompression::operator =(std::wstring b) {

}

ST_BlipCompression::operator const wchar_t*() const {

}
ST_BlipCompression::operator std::wstring () const {

}
