#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_Geometry::EG_Geometry(value _v) {
	v=_v;
}

EG_Geometry::EG_Geometry(std::wstring b) {

}

EG_Geometry::EG_Geometry(EG_Geometry &b) {
	v=b.v;
}

EG_Geometry& EG_Geometry::operator =(value _v) {
	v=_v;
}

EG_Geometry& EG_Geometry::operator =(EG_Geometry& b) {
	v=b.v;
}

EG_Geometry& EG_Geometry::operator =(std::wstring b) {

}

EG_Geometry::operator const wchar_t*() const {

}
EG_Geometry::operator std::wstring () const {

}
