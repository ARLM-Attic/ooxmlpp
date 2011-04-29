#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextTabAlignType::ST_TextTabAlignType(value _v) {
	v=_v;
}

ST_TextTabAlignType::ST_TextTabAlignType(std::wstring b) {

}

ST_TextTabAlignType::ST_TextTabAlignType(ST_TextTabAlignType &b) {
	v=b.v;
}

ST_TextTabAlignType& ST_TextTabAlignType::operator =(value _v) {
	v=_v;
}

ST_TextTabAlignType& ST_TextTabAlignType::operator =(ST_TextTabAlignType& b) {
	v=b.v;
}

ST_TextTabAlignType& ST_TextTabAlignType::operator =(std::wstring b) {

}

ST_TextTabAlignType::operator const wchar_t*() const {

}
ST_TextTabAlignType::operator std::wstring () const {

}
