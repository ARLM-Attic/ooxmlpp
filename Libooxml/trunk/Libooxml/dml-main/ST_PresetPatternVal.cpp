#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PresetPatternVal::ST_PresetPatternVal(value _v) {
	v=_v;
}

ST_PresetPatternVal::ST_PresetPatternVal(std::wstring b) {

}

ST_PresetPatternVal::ST_PresetPatternVal(ST_PresetPatternVal &b) {
	v=b.v;
}

ST_PresetPatternVal& ST_PresetPatternVal::operator =(value _v) {
	v=_v;
}

ST_PresetPatternVal& ST_PresetPatternVal::operator =(ST_PresetPatternVal& b) {
	v=b.v;
}

ST_PresetPatternVal& ST_PresetPatternVal::operator =(std::wstring b) {

}

ST_PresetPatternVal::operator const wchar_t*() const {

}
ST_PresetPatternVal::operator std::wstring () const {

}
