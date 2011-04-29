#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextBulletStartAtNum::ST_TextBulletStartAtNum(value _v) {
	v=_v;
}

ST_TextBulletStartAtNum::ST_TextBulletStartAtNum(std::wstring b) {

}

ST_TextBulletStartAtNum::ST_TextBulletStartAtNum(ST_TextBulletStartAtNum &b) {
	v=b.v;
}

ST_TextBulletStartAtNum& ST_TextBulletStartAtNum::operator =(value _v) {
	v=_v;
}

ST_TextBulletStartAtNum& ST_TextBulletStartAtNum::operator =(ST_TextBulletStartAtNum& b) {
	v=b.v;
}

ST_TextBulletStartAtNum& ST_TextBulletStartAtNum::operator =(std::wstring b) {

}

ST_TextBulletStartAtNum::operator const wchar_t*() const {

}
ST_TextBulletStartAtNum::operator std::wstring () const {

}
