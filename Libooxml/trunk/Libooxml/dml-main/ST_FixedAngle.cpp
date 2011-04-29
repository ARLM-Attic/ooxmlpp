#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_FixedAngle::ST_FixedAngle(value _v) {
	v=_v;
}

ST_FixedAngle::ST_FixedAngle(std::wstring b) {

}

ST_FixedAngle::ST_FixedAngle(ST_FixedAngle &b) {
	v=b.v;
}

ST_FixedAngle& ST_FixedAngle::operator =(value _v) {
	v=_v;
}

ST_FixedAngle& ST_FixedAngle::operator =(ST_FixedAngle& b) {
	v=b.v;
}

ST_FixedAngle& ST_FixedAngle::operator =(std::wstring b) {

}

ST_FixedAngle::operator const wchar_t*() const {

}
ST_FixedAngle::operator std::wstring () const {

}
