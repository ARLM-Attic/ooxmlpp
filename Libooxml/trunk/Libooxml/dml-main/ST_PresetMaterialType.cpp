#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PresetMaterialType::ST_PresetMaterialType() {
	v = flat;
}

ST_PresetMaterialType::ST_PresetMaterialType(value _v) {
	v=_v;
}

ST_PresetMaterialType::ST_PresetMaterialType(std::wstring b) {

}

ST_PresetMaterialType::ST_PresetMaterialType(ST_PresetMaterialType &b) {
	v=b.v;
}

ST_PresetMaterialType& ST_PresetMaterialType::operator =(value _v) {
	v=_v;
}

ST_PresetMaterialType& ST_PresetMaterialType::operator =(ST_PresetMaterialType& b) {
	v=b.v;
}

ST_PresetMaterialType& ST_PresetMaterialType::operator =(std::wstring b) {

}

ST_PresetMaterialType::operator const wchar_t*() const {

}
ST_PresetMaterialType::operator std::wstring () const {

}
