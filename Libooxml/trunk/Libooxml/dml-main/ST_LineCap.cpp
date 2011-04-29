#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LineCap::ST_LineCap(value _v) {
	v=_v;
}

ST_LineCap::ST_LineCap(std::wstring b) {

}

ST_LineCap::ST_LineCap(ST_LineCap &b) {
	v=b.v;
}

ST_LineCap& ST_LineCap::operator =(value _v) {
	v=_v;
}

ST_LineCap& ST_LineCap::operator =(ST_LineCap& b) {
	v=b.v;
}

ST_LineCap& ST_LineCap::operator =(std::wstring b) {

}

ST_LineCap::operator const wchar_t*() const {

}
ST_LineCap::operator std::wstring () const {

}
