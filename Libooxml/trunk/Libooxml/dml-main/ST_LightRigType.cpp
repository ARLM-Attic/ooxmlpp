#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LightRigType::ST_LightRigType(value _v) {
	v=_v;
}

ST_LightRigType::ST_LightRigType(std::wstring b) {

}

ST_LightRigType::ST_LightRigType(ST_LightRigType &b) {
	v=b.v;
}

ST_LightRigType& ST_LightRigType::operator =(value _v) {
	v=_v;
}

ST_LightRigType& ST_LightRigType::operator =(ST_LightRigType& b) {
	v=b.v;
}

ST_LightRigType& ST_LightRigType::operator =(std::wstring b) {

}

ST_LightRigType::operator const wchar_t*() const {

}
ST_LightRigType::operator std::wstring () const {

}
