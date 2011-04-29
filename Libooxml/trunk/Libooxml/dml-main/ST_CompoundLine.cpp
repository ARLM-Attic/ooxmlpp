#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_CompoundLine::ST_CompoundLine(value _v) {
	v=_v;
}

ST_CompoundLine::ST_CompoundLine(std::wstring b) {

}

ST_CompoundLine::ST_CompoundLine(ST_CompoundLine &b) {
	v=b.v;
}

ST_CompoundLine& ST_CompoundLine::operator =(value _v) {
	v=_v;
}

ST_CompoundLine& ST_CompoundLine::operator =(ST_CompoundLine& b) {
	v=b.v;
}

ST_CompoundLine& ST_CompoundLine::operator =(std::wstring b) {

}

ST_CompoundLine::operator const wchar_t*() const {

}
ST_CompoundLine::operator std::wstring () const {

}
