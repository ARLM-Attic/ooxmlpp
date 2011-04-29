#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_FillModeProperties::EG_FillModeProperties(value _v) {
	v=_v;
}

EG_FillModeProperties::EG_FillModeProperties(std::wstring b) {

}

EG_FillModeProperties::EG_FillModeProperties(EG_FillModeProperties &b) {
	v=b.v;
}

EG_FillModeProperties& EG_FillModeProperties::operator =(value _v) {
	v=_v;
}

EG_FillModeProperties& EG_FillModeProperties::operator =(EG_FillModeProperties& b) {
	v=b.v;
}

EG_FillModeProperties& EG_FillModeProperties::operator =(std::wstring b) {

}

EG_FillModeProperties::operator const wchar_t*() const {

}
EG_FillModeProperties::operator std::wstring () const {

}
