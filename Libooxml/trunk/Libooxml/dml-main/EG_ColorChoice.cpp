#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_ColorChoice::EG_ColorChoice(value _v) {
	v=_v;
}

EG_ColorChoice::EG_ColorChoice(std::wstring b) {

}

EG_ColorChoice::EG_ColorChoice(EG_ColorChoice &b) {
	v=b.v;
}

EG_ColorChoice& EG_ColorChoice::operator =(value _v) {
	v=_v;
}

EG_ColorChoice& EG_ColorChoice::operator =(EG_ColorChoice& b) {
	v=b.v;
}

EG_ColorChoice& EG_ColorChoice::operator =(std::wstring b) {

}

EG_ColorChoice::operator const wchar_t*() const {

}
EG_ColorChoice::operator std::wstring () const {

}
