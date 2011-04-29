#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PresetShadowVal::ST_PresetShadowVal(value _v) {
	v=_v;
}

ST_PresetShadowVal::ST_PresetShadowVal(std::wstring b) {

}

ST_PresetShadowVal::ST_PresetShadowVal(ST_PresetShadowVal &b) {
	v=b.v;
}

ST_PresetShadowVal& ST_PresetShadowVal::operator =(value _v) {
	v=_v;
}

ST_PresetShadowVal& ST_PresetShadowVal::operator =(ST_PresetShadowVal& b) {
	v=b.v;
}

ST_PresetShadowVal& ST_PresetShadowVal::operator =(std::wstring b) {

}

ST_PresetShadowVal::operator const wchar_t*() const {

}
ST_PresetShadowVal::operator std::wstring () const {

}
