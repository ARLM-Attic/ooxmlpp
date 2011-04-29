#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_ShadeProperties::EG_ShadeProperties(value _v) {
	v=_v;
}

EG_ShadeProperties::EG_ShadeProperties(std::wstring b) {

}

EG_ShadeProperties::EG_ShadeProperties(EG_ShadeProperties &b) {
	v=b.v;
}

EG_ShadeProperties& EG_ShadeProperties::operator =(value _v) {
	v=_v;
}

EG_ShadeProperties& EG_ShadeProperties::operator =(EG_ShadeProperties& b) {
	v=b.v;
}

EG_ShadeProperties& EG_ShadeProperties::operator =(std::wstring b) {

}

EG_ShadeProperties::operator const wchar_t*() const {

}
EG_ShadeProperties::operator std::wstring () const {

}
