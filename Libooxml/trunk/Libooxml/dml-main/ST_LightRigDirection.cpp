#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LightRigDirection::ST_LightRigDirection(value _v) {
	v=_v;
}

ST_LightRigDirection::ST_LightRigDirection(std::wstring b) {

}

ST_LightRigDirection::ST_LightRigDirection(ST_LightRigDirection &b) {
	v=b.v;
}

ST_LightRigDirection& ST_LightRigDirection::operator =(value _v) {
	v=_v;
}

ST_LightRigDirection& ST_LightRigDirection::operator =(ST_LightRigDirection& b) {
	v=b.v;
}

ST_LightRigDirection& ST_LightRigDirection::operator =(std::wstring b) {

}

ST_LightRigDirection::operator const wchar_t*() const {

}
ST_LightRigDirection::operator std::wstring () const {

}
