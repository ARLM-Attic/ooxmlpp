#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextIndentLevelType::ST_TextIndentLevelType(value _v) {
	v=_v;
}

ST_TextIndentLevelType::ST_TextIndentLevelType(std::wstring b) {

}

ST_TextIndentLevelType::ST_TextIndentLevelType(ST_TextIndentLevelType &b) {
	v=b.v;
}

ST_TextIndentLevelType& ST_TextIndentLevelType::operator =(value _v) {
	v=_v;
}

ST_TextIndentLevelType& ST_TextIndentLevelType::operator =(ST_TextIndentLevelType& b) {
	v=b.v;
}

ST_TextIndentLevelType& ST_TextIndentLevelType::operator =(std::wstring b) {

}

ST_TextIndentLevelType::operator const wchar_t*() const {

}
ST_TextIndentLevelType::operator std::wstring () const {

}
