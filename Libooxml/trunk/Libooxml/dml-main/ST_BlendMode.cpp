#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_BlendMode::ST_BlendMode() {
	v = over;
}
ST_BlendMode::ST_BlendMode(value _v) {
	v=_v;
}

ST_BlendMode::ST_BlendMode(std::wstring b) {

}

ST_BlendMode::ST_BlendMode(ST_BlendMode &b) {
	v=b.v;
}

ST_BlendMode& ST_BlendMode::operator =(value _v) {
	v=_v;
}

ST_BlendMode& ST_BlendMode::operator =(ST_BlendMode& b) {
	v=b.v;
}

ST_BlendMode& ST_BlendMode::operator =(std::wstring b) {

}

ST_BlendMode::operator const wchar_t*() const {

}
ST_BlendMode::operator std::wstring () const {

}
