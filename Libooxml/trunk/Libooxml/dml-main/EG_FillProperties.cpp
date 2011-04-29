#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_FillProperties::EG_FillProperties(value _v) {
	v=_v;
}

EG_FillProperties::EG_FillProperties(std::wstring b) {

}

EG_FillProperties::EG_FillProperties(EG_FillProperties &b) {
	v=b.v;
}

EG_FillProperties& EG_FillProperties::operator =(value _v) {
	v=_v;
}

EG_FillProperties& EG_FillProperties::operator =(EG_FillProperties& b) {
	v=b.v;
}

EG_FillProperties& EG_FillProperties::operator =(std::wstring b) {

}

EG_FillProperties::operator const wchar_t*() const {

}
EG_FillProperties::operator std::wstring () const {

}
