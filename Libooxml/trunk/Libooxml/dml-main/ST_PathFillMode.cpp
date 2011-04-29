#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_PathFillMode::ST_PathFillMode(value _v) {
	v=_v;
}

ST_PathFillMode::ST_PathFillMode(std::wstring b) {

}

ST_PathFillMode::ST_PathFillMode(ST_PathFillMode &b) {
	v=b.v;
}

ST_PathFillMode& ST_PathFillMode::operator =(value _v) {
	v=_v;
}

ST_PathFillMode& ST_PathFillMode::operator =(ST_PathFillMode& b) {
	v=b.v;
}

ST_PathFillMode& ST_PathFillMode::operator =(std::wstring b) {

}

ST_PathFillMode::operator const wchar_t*() const {

}
ST_PathFillMode::operator std::wstring () const {

}
