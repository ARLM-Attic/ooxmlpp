#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_LineDashProperties::EG_LineDashProperties(value _v) {
	v=_v;
}

EG_LineDashProperties::EG_LineDashProperties(std::wstring b) {

}

EG_LineDashProperties::EG_LineDashProperties(EG_LineDashProperties &b) {
	v=b.v;
}

EG_LineDashProperties& EG_LineDashProperties::operator =(value _v) {
	v=_v;
}

EG_LineDashProperties& EG_LineDashProperties::operator =(EG_LineDashProperties& b) {
	v=b.v;
}

EG_LineDashProperties& EG_LineDashProperties::operator =(std::wstring b) {

}

EG_LineDashProperties::operator const wchar_t*() const {

}
EG_LineDashProperties::operator std::wstring () const {

}
