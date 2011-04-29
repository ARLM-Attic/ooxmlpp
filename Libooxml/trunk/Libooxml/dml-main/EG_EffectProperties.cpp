#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_EffectProperties::EG_EffectProperties(value _v) {
	v=_v;
}

EG_EffectProperties::EG_EffectProperties(std::wstring b) {

}

EG_EffectProperties::EG_EffectProperties(EG_EffectProperties &b) {
	v=b.v;
}

EG_EffectProperties& EG_EffectProperties::operator =(value _v) {
	v=_v;
}

EG_EffectProperties& EG_EffectProperties::operator =(EG_EffectProperties& b) {
	v=b.v;
}

EG_EffectProperties& EG_EffectProperties::operator =(std::wstring b) {

}

EG_EffectProperties::operator const wchar_t*() const {

}
EG_EffectProperties::operator std::wstring () const {

}
