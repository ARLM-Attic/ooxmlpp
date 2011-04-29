#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextMargin::ST_TextMargin(value _v) {
	v=_v;
}

ST_TextMargin::ST_TextMargin(std::wstring b) {

}

ST_TextMargin::ST_TextMargin(ST_TextMargin &b) {
	v=b.v;
}

ST_TextMargin& ST_TextMargin::operator =(value _v) {
	v=_v;
}

ST_TextMargin& ST_TextMargin::operator =(ST_TextMargin& b) {
	v=b.v;
}

ST_TextMargin& ST_TextMargin::operator =(std::wstring b) {

}

ST_TextMargin::operator const wchar_t*() const {

}
ST_TextMargin::operator std::wstring () const {

}
