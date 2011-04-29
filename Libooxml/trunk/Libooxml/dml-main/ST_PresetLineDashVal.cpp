#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PresetLineDashVal::ST_PresetLineDashVal(value _v) {
	v=_v;
}

ST_PresetLineDashVal::ST_PresetLineDashVal(std::wstring b) {

}

ST_PresetLineDashVal::ST_PresetLineDashVal(ST_PresetLineDashVal &b) {
	v=b.v;
}

ST_PresetLineDashVal& ST_PresetLineDashVal::operator =(value _v) {
	v=_v;
}

ST_PresetLineDashVal& ST_PresetLineDashVal::operator =(ST_PresetLineDashVal& b) {
	v=b.v;
}

ST_PresetLineDashVal& ST_PresetLineDashVal::operator =(std::wstring b) {

}

ST_PresetLineDashVal::operator const wchar_t*() const {

}
ST_PresetLineDashVal::operator std::wstring () const {

}
