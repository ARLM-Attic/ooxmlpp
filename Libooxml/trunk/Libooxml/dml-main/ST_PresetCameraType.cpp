#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PresetCameraType::ST_PresetCameraType(value _v) {
	v=_v;
}

ST_PresetCameraType::ST_PresetCameraType(std::wstring b) {

}

ST_PresetCameraType::ST_PresetCameraType(ST_PresetCameraType &b) {
	v=b.v;
}

ST_PresetCameraType& ST_PresetCameraType::operator =(value _v) {
	v=_v;
}

ST_PresetCameraType& ST_PresetCameraType::operator =(ST_PresetCameraType& b) {
	v=b.v;
}

ST_PresetCameraType& ST_PresetCameraType::operator =(std::wstring b) {

}

ST_PresetCameraType::operator const wchar_t*() const {

}
ST_PresetCameraType::operator std::wstring () const {

}
