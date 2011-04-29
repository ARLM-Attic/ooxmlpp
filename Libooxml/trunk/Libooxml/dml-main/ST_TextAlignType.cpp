#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextAlignType::ST_TextAlignType(value _v) {
	v=_v;
}

ST_TextAlignType::ST_TextAlignType(std::wstring b) {

}

ST_TextAlignType::ST_TextAlignType(ST_TextAlignType &b) {
	v=b.v;
}

ST_TextAlignType& ST_TextAlignType::operator =(value _v) {
	v=_v;
}

ST_TextAlignType& ST_TextAlignType::operator =(ST_TextAlignType& b) {
	v=b.v;
}

ST_TextAlignType& ST_TextAlignType::operator =(std::wstring b) {

}

ST_TextAlignType::operator const wchar_t*() const {

}
ST_TextAlignType::operator std::wstring () const {

}
