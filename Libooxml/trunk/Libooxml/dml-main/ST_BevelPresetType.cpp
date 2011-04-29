#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_BevelPresetType::ST_BevelPresetType(value _v) {
	v=_v;
}

ST_BevelPresetType::ST_BevelPresetType(std::wstring b) {

}

ST_BevelPresetType::ST_BevelPresetType(ST_BevelPresetType &b) {
	v=b.v;
}

ST_BevelPresetType& ST_BevelPresetType::operator =(value _v) {
	v=_v;
}

ST_BevelPresetType& ST_BevelPresetType::operator =(ST_BevelPresetType& b) {
	v=b.v;
}

ST_BevelPresetType& ST_BevelPresetType::operator =(std::wstring b) {

}

ST_BevelPresetType::operator const wchar_t*() const {

}
ST_BevelPresetType::operator std::wstring () const {

}
