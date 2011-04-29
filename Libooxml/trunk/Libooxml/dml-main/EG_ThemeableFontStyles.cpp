#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_ThemeableFontStyles::EG_ThemeableFontStyles(value _v) {
	v=_v;
}

EG_ThemeableFontStyles::EG_ThemeableFontStyles(std::wstring b) {

}

EG_ThemeableFontStyles::EG_ThemeableFontStyles(EG_ThemeableFontStyles &b) {
	v=b.v;
}

EG_ThemeableFontStyles& EG_ThemeableFontStyles::operator =(value _v) {
	v=_v;
}

EG_ThemeableFontStyles& EG_ThemeableFontStyles::operator =(EG_ThemeableFontStyles& b) {
	v=b.v;
}

EG_ThemeableFontStyles& EG_ThemeableFontStyles::operator =(std::wstring b) {

}

EG_ThemeableFontStyles::operator const wchar_t*() const {

}
EG_ThemeableFontStyles::operator std::wstring () const {

}
