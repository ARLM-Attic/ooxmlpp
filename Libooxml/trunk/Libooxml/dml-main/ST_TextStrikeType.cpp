#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextStrikeType::ST_TextStrikeType(value _v) {
	v=_v;
}

ST_TextStrikeType::ST_TextStrikeType(std::wstring b) {

}

ST_TextStrikeType::ST_TextStrikeType(ST_TextStrikeType &b) {
	v=b.v;
}

ST_TextStrikeType& ST_TextStrikeType::operator =(value _v) {
	v=_v;
}

ST_TextStrikeType& ST_TextStrikeType::operator =(ST_TextStrikeType& b) {
	v=b.v;
}

ST_TextStrikeType& ST_TextStrikeType::operator =(std::wstring b) {

}

ST_TextStrikeType::operator const wchar_t*() const {

}
ST_TextStrikeType::operator std::wstring () const {

}
