#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextBulletSizePercent::ST_TextBulletSizePercent(value _v) {
	v=_v;
}

ST_TextBulletSizePercent::ST_TextBulletSizePercent(std::wstring b) {

}

ST_TextBulletSizePercent::ST_TextBulletSizePercent(ST_TextBulletSizePercent &b) {
	v=b.v;
}

ST_TextBulletSizePercent& ST_TextBulletSizePercent::operator =(value _v) {
	v=_v;
}

ST_TextBulletSizePercent& ST_TextBulletSizePercent::operator =(ST_TextBulletSizePercent& b) {
	v=b.v;
}

ST_TextBulletSizePercent& ST_TextBulletSizePercent::operator =(std::wstring b) {

}

ST_TextBulletSizePercent::operator const wchar_t*() const {

}
ST_TextBulletSizePercent::operator std::wstring () const {

}
