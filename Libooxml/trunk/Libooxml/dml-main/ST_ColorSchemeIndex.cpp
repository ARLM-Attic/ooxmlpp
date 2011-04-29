#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_ColorSchemeIndex::ST_ColorSchemeIndex(value _v) {
	v=_v;
}

ST_ColorSchemeIndex::ST_ColorSchemeIndex(std::wstring b) {

}

ST_ColorSchemeIndex::ST_ColorSchemeIndex(ST_ColorSchemeIndex &b) {
	v=b.v;
}

ST_ColorSchemeIndex& ST_ColorSchemeIndex::operator =(value _v) {
	v=_v;
}

ST_ColorSchemeIndex& ST_ColorSchemeIndex::operator =(ST_ColorSchemeIndex& b) {
	v=b.v;
}

ST_ColorSchemeIndex& ST_ColorSchemeIndex::operator =(std::wstring b) {

}

ST_ColorSchemeIndex::operator const wchar_t*() const {

}
ST_ColorSchemeIndex::operator std::wstring () const {

}
