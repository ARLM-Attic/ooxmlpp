#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextGeometry::EG_TextGeometry(value _v) {
	v=_v;
}

EG_TextGeometry::EG_TextGeometry(std::wstring b) {

}

EG_TextGeometry::EG_TextGeometry(EG_TextGeometry &b) {
	v=b.v;
}

EG_TextGeometry& EG_TextGeometry::operator =(value _v) {
	v=_v;
}

EG_TextGeometry& EG_TextGeometry::operator =(EG_TextGeometry& b) {
	v=b.v;
}

EG_TextGeometry& EG_TextGeometry::operator =(std::wstring b) {

}

EG_TextGeometry::operator const wchar_t*() const {

}
EG_TextGeometry::operator std::wstring () const {

}
