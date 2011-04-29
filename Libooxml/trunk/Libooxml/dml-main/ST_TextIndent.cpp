#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextIndent::ST_TextIndent(value _v) {
	v=_v;
}

ST_TextIndent::ST_TextIndent(std::wstring b) {

}

ST_TextIndent::ST_TextIndent(ST_TextIndent &b) {
	v=b.v;
}

ST_TextIndent& ST_TextIndent::operator =(value _v) {
	v=_v;
}

ST_TextIndent& ST_TextIndent::operator =(ST_TextIndent& b) {
	v=b.v;
}

ST_TextIndent& ST_TextIndent::operator =(std::wstring b) {

}

ST_TextIndent::operator const wchar_t*() const {

}
ST_TextIndent::operator std::wstring () const {

}
