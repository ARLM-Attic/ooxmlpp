#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AdjCoordinate::ST_AdjCoordinate(value _v) {
	v=_v;
}

ST_AdjCoordinate::ST_AdjCoordinate(std::wstring b) {

}

ST_AdjCoordinate::ST_AdjCoordinate(ST_AdjCoordinate &b) {
	v=b.v;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator =(value _v) {
	v=_v;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator =(ST_AdjCoordinate& b) {
	v=b.v;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator =(std::wstring b) {

}

ST_AdjCoordinate::operator const wchar_t*() const {

}
ST_AdjCoordinate::operator std::wstring () const {

}
