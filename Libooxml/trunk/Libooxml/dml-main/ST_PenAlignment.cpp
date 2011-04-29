#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PenAlignment::ST_PenAlignment(value _v) {
	v=_v;
}

ST_PenAlignment::ST_PenAlignment(std::wstring b) {

}

ST_PenAlignment::ST_PenAlignment(ST_PenAlignment &b) {
	v=b.v;
}

ST_PenAlignment& ST_PenAlignment::operator =(value _v) {
	v=_v;
}

ST_PenAlignment& ST_PenAlignment::operator =(ST_PenAlignment& b) {
	v=b.v;
}

ST_PenAlignment& ST_PenAlignment::operator =(std::wstring b) {

}

ST_PenAlignment::operator const wchar_t*() const {

}
ST_PenAlignment::operator std::wstring () const {

}
