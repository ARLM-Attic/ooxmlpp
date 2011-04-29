#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextBulletTypeface::EG_TextBulletTypeface(value _v) {
	v=_v;
}

EG_TextBulletTypeface::EG_TextBulletTypeface(std::wstring b) {

}

EG_TextBulletTypeface::EG_TextBulletTypeface(EG_TextBulletTypeface &b) {
	v=b.v;
}

EG_TextBulletTypeface& EG_TextBulletTypeface::operator =(value _v) {
	v=_v;
}

EG_TextBulletTypeface& EG_TextBulletTypeface::operator =(EG_TextBulletTypeface& b) {
	v=b.v;
}

EG_TextBulletTypeface& EG_TextBulletTypeface::operator =(std::wstring b) {

}

EG_TextBulletTypeface::operator const wchar_t*() const {

}
EG_TextBulletTypeface::operator std::wstring () const {

}
