#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextBulletColor::EG_TextBulletColor(value _v) {
	v=_v;
}

EG_TextBulletColor::EG_TextBulletColor(std::wstring b) {

}

EG_TextBulletColor::EG_TextBulletColor(EG_TextBulletColor &b) {
	v=b.v;
}

EG_TextBulletColor& EG_TextBulletColor::operator =(value _v) {
	v=_v;
}

EG_TextBulletColor& EG_TextBulletColor::operator =(EG_TextBulletColor& b) {
	v=b.v;
}

EG_TextBulletColor& EG_TextBulletColor::operator =(std::wstring b) {

}

EG_TextBulletColor::operator const wchar_t*() const {

}
EG_TextBulletColor::operator std::wstring () const {

}
