#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextBullet::EG_TextBullet(value _v) {
	v=_v;
}

EG_TextBullet::EG_TextBullet(std::wstring b) {

}

EG_TextBullet::EG_TextBullet(EG_TextBullet &b) {
	v=b.v;
}

EG_TextBullet& EG_TextBullet::operator =(value _v) {
	v=_v;
}

EG_TextBullet& EG_TextBullet::operator =(EG_TextBullet& b) {
	v=b.v;
}

EG_TextBullet& EG_TextBullet::operator =(std::wstring b) {

}

EG_TextBullet::operator const wchar_t*() const {

}
EG_TextBullet::operator std::wstring () const {

}
