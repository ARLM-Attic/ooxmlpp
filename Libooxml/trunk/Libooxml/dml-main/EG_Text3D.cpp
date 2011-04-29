#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_Text3D::EG_Text3D(value _v) {
	v=_v;
}

EG_Text3D::EG_Text3D(std::wstring b) {

}

EG_Text3D::EG_Text3D(EG_Text3D &b) {
	v=b.v;
}

EG_Text3D& EG_Text3D::operator =(value _v) {
	v=_v;
}

EG_Text3D& EG_Text3D::operator =(EG_Text3D& b) {
	v=b.v;
}

EG_Text3D& EG_Text3D::operator =(std::wstring b) {

}

EG_Text3D::operator const wchar_t*() const {

}
EG_Text3D::operator std::wstring () const {

}
