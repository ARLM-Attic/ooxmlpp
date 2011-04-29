#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_LineJoinProperties::EG_LineJoinProperties(value _v) {
	v=_v;
}

EG_LineJoinProperties::EG_LineJoinProperties(std::wstring b) {

}

EG_LineJoinProperties::EG_LineJoinProperties(EG_LineJoinProperties &b) {
	v=b.v;
}

EG_LineJoinProperties& EG_LineJoinProperties::operator =(value _v) {
	v=_v;
}

EG_LineJoinProperties& EG_LineJoinProperties::operator =(EG_LineJoinProperties& b) {
	v=b.v;
}

EG_LineJoinProperties& EG_LineJoinProperties::operator =(std::wstring b) {

}

EG_LineJoinProperties::operator const wchar_t*() const {

}
EG_LineJoinProperties::operator std::wstring () const {

}
