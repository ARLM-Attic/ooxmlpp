#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_ThemeableEffectStyle::EG_ThemeableEffectStyle(value _v) {
	v=_v;
}

EG_ThemeableEffectStyle::EG_ThemeableEffectStyle(std::wstring b) {

}

EG_ThemeableEffectStyle::EG_ThemeableEffectStyle(EG_ThemeableEffectStyle &b) {
	v=b.v;
}

EG_ThemeableEffectStyle& EG_ThemeableEffectStyle::operator =(value _v) {
	v=_v;
}

EG_ThemeableEffectStyle& EG_ThemeableEffectStyle::operator =(EG_ThemeableEffectStyle& b) {
	v=b.v;
}

EG_ThemeableEffectStyle& EG_ThemeableEffectStyle::operator =(std::wstring b) {

}

EG_ThemeableEffectStyle::operator const wchar_t*() const {

}
EG_ThemeableEffectStyle::operator std::wstring () const {

}
