#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_LineFillProperties::EG_LineFillProperties(value _v) {
	v=_v;
}

EG_LineFillProperties::EG_LineFillProperties(std::wstring b) {

}

EG_LineFillProperties::EG_LineFillProperties(EG_LineFillProperties &b) {
	v=b.v;
}

EG_LineFillProperties& EG_LineFillProperties::operator =(value _v) {
	v=_v;
}

EG_LineFillProperties& EG_LineFillProperties::operator =(EG_LineFillProperties& b) {
	v=b.v;
}

EG_LineFillProperties& EG_LineFillProperties::operator =(std::wstring b) {

}

EG_LineFillProperties::operator const wchar_t*() const {

}
EG_LineFillProperties::operator std::wstring () const {

}
