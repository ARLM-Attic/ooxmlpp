#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PositiveFixedAngle::ST_PositiveFixedAngle(value _v) {
	v=_v;
}

ST_PositiveFixedAngle::ST_PositiveFixedAngle(std::wstring b) {

}

ST_PositiveFixedAngle::ST_PositiveFixedAngle(ST_PositiveFixedAngle &b) {
	v=b.v;
}

ST_PositiveFixedAngle& ST_PositiveFixedAngle::operator =(value _v) {
	v=_v;
}

ST_PositiveFixedAngle& ST_PositiveFixedAngle::operator =(ST_PositiveFixedAngle& b) {
	v=b.v;
}

ST_PositiveFixedAngle& ST_PositiveFixedAngle::operator =(std::wstring b) {

}

ST_PositiveFixedAngle::operator const wchar_t*() const {

}
ST_PositiveFixedAngle::operator std::wstring () const {

}
