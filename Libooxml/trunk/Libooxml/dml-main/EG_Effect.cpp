#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_Effect::EG_Effect(value _v) {
	v=_v;
}

EG_Effect::EG_Effect(std::wstring b) {

}

EG_Effect::EG_Effect(EG_Effect &b) {
	v=b.v;
}

EG_Effect& EG_Effect::operator =(value _v) {
	v=_v;
}

EG_Effect& EG_Effect::operator =(EG_Effect& b) {
	v=b.v;
}

EG_Effect& EG_Effect::operator =(std::wstring b) {

}

EG_Effect::operator const wchar_t*() const {

}
EG_Effect::operator std::wstring () const {

}
