#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_ThemeableFillStyle::EG_ThemeableFillStyle(value _v) {
	v=_v;
}

EG_ThemeableFillStyle::EG_ThemeableFillStyle(std::wstring b) {

}

EG_ThemeableFillStyle::EG_ThemeableFillStyle(EG_ThemeableFillStyle &b) {
	v=b.v;
}

EG_ThemeableFillStyle& EG_ThemeableFillStyle::operator =(value _v) {
	v=_v;
}

EG_ThemeableFillStyle& EG_ThemeableFillStyle::operator =(EG_ThemeableFillStyle& b) {
	v=b.v;
}

EG_ThemeableFillStyle& EG_ThemeableFillStyle::operator =(std::wstring b) {

}

EG_ThemeableFillStyle::operator const wchar_t*() const {

}
EG_ThemeableFillStyle::operator std::wstring () const {

}
