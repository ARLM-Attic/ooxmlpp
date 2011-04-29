#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AdjAngle::ST_AdjAngle(value _v) {
	v=_v;
}

ST_AdjAngle::ST_AdjAngle(std::wstring b) {

}

ST_AdjAngle::ST_AdjAngle(ST_AdjAngle &b) {
	v=b.v;
}

ST_AdjAngle& ST_AdjAngle::operator =(value _v) {
	v=_v;
}

ST_AdjAngle& ST_AdjAngle::operator =(ST_AdjAngle& b) {
	v=b.v;
}

ST_AdjAngle& ST_AdjAngle::operator =(std::wstring b) {

}

ST_AdjAngle::operator const wchar_t*() const {

}
ST_AdjAngle::operator std::wstring () const {

}
