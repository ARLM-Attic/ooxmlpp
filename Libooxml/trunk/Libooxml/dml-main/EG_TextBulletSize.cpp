#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextBulletSize::EG_TextBulletSize(value _v) {
	v=_v;
}

EG_TextBulletSize::EG_TextBulletSize(std::wstring b) {

}

EG_TextBulletSize::EG_TextBulletSize(EG_TextBulletSize &b) {
	v=b.v;
}

EG_TextBulletSize& EG_TextBulletSize::operator =(value _v) {
	v=_v;
}

EG_TextBulletSize& EG_TextBulletSize::operator =(EG_TextBulletSize& b) {
	v=b.v;
}

EG_TextBulletSize& EG_TextBulletSize::operator =(std::wstring b) {

}

EG_TextBulletSize::operator const wchar_t*() const {

}
EG_TextBulletSize::operator std::wstring () const {

}
