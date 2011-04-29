#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_EffectContainerType::ST_EffectContainerType(value _v) {
	v=_v;
}

ST_EffectContainerType::ST_EffectContainerType(std::wstring b) {

}

ST_EffectContainerType::ST_EffectContainerType(ST_EffectContainerType &b) {
	v=b.v;
}

ST_EffectContainerType& ST_EffectContainerType::operator =(value _v) {
	v=_v;
}

ST_EffectContainerType& ST_EffectContainerType::operator =(ST_EffectContainerType& b) {
	v=b.v;
}

ST_EffectContainerType& ST_EffectContainerType::operator =(std::wstring b) {

}

ST_EffectContainerType::operator const wchar_t*() const {

}
ST_EffectContainerType::operator std::wstring () const {

}
