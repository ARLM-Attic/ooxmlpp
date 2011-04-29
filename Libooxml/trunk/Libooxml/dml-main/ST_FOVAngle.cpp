#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_FOVAngle::ST_FOVAngle(value _v) {
	v=_v;
}

ST_FOVAngle::ST_FOVAngle(std::wstring b) {

}

ST_FOVAngle::ST_FOVAngle(ST_FOVAngle &b) {
	v=b.v;
}

ST_FOVAngle& ST_FOVAngle::operator =(value _v) {
	v=_v;
}

ST_FOVAngle& ST_FOVAngle::operator =(ST_FOVAngle& b) {
	v=b.v;
}

ST_FOVAngle& ST_FOVAngle::operator =(std::wstring b) {

}

ST_FOVAngle::operator const wchar_t*() const {

}
ST_FOVAngle::operator std::wstring () const {

}
