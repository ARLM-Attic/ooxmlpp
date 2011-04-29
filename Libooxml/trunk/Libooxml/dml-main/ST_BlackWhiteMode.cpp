#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_BlackWhiteMode::ST_BlackWhiteMode(value _v) {
	v=_v;
}

ST_BlackWhiteMode::ST_BlackWhiteMode(std::wstring b) {

}

ST_BlackWhiteMode::ST_BlackWhiteMode(ST_BlackWhiteMode &b) {
	v=b.v;
}

ST_BlackWhiteMode& ST_BlackWhiteMode::operator =(value _v) {
	v=_v;
}

ST_BlackWhiteMode& ST_BlackWhiteMode::operator =(ST_BlackWhiteMode& b) {
	v=b.v;
}

ST_BlackWhiteMode& ST_BlackWhiteMode::operator =(std::wstring b) {

}

ST_BlackWhiteMode::operator const wchar_t*() const {

}
ST_BlackWhiteMode::operator std::wstring () const {

}
