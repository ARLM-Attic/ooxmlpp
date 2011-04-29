#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextUnderlineType::ST_TextUnderlineType(value _v) {
	v=_v;
}

ST_TextUnderlineType::ST_TextUnderlineType(std::wstring b) {

}

ST_TextUnderlineType::ST_TextUnderlineType(ST_TextUnderlineType &b) {
	v=b.v;
}

ST_TextUnderlineType& ST_TextUnderlineType::operator =(value _v) {
	v=_v;
}

ST_TextUnderlineType& ST_TextUnderlineType::operator =(ST_TextUnderlineType& b) {
	v=b.v;
}

ST_TextUnderlineType& ST_TextUnderlineType::operator =(std::wstring b) {

}

ST_TextUnderlineType::operator const wchar_t*() const {

}
ST_TextUnderlineType::operator std::wstring () const {

}
