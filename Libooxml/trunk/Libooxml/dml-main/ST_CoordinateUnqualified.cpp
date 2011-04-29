#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_CoordinateUnqualified::ST_CoordinateUnqualified(value _v) {
	v=_v;
}

ST_CoordinateUnqualified::ST_CoordinateUnqualified(std::wstring b) {

}

ST_CoordinateUnqualified::ST_CoordinateUnqualified(ST_CoordinateUnqualified &b) {
	v=b.v;
}

ST_CoordinateUnqualified& ST_CoordinateUnqualified::operator =(value _v) {
	v=_v;
}

ST_CoordinateUnqualified& ST_CoordinateUnqualified::operator =(ST_CoordinateUnqualified& b) {
	v=b.v;
}

ST_CoordinateUnqualified& ST_CoordinateUnqualified::operator =(std::wstring b) {

}

ST_CoordinateUnqualified::operator const wchar_t*() const {

}
ST_CoordinateUnqualified::operator std::wstring () const {

}
