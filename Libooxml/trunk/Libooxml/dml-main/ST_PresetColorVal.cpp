#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PresetColorVal::ST_PresetColorVal(value _v) {
	v=_v;
}

ST_PresetColorVal::ST_PresetColorVal(std::wstring b) {

}

ST_PresetColorVal::ST_PresetColorVal(ST_PresetColorVal &b) {
	v=b.v;
}

ST_PresetColorVal& ST_PresetColorVal::operator =(value _v) {
	v=_v;
}

ST_PresetColorVal& ST_PresetColorVal::operator =(ST_PresetColorVal& b) {
	v=b.v;
}

ST_PresetColorVal& ST_PresetColorVal::operator =(std::wstring b) {

}

ST_PresetColorVal::operator const wchar_t*() const {

}
ST_PresetColorVal::operator std::wstring () const {

}
