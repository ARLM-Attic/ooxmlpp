#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_OnOffStyleType::ST_OnOffStyleType(value _v) {
	v=_v;
}

ST_OnOffStyleType::ST_OnOffStyleType(std::wstring b) {

}

ST_OnOffStyleType::ST_OnOffStyleType(ST_OnOffStyleType &b) {
	v=b.v;
}

ST_OnOffStyleType& ST_OnOffStyleType::operator =(value _v) {
	v=_v;
}

ST_OnOffStyleType& ST_OnOffStyleType::operator =(ST_OnOffStyleType& b) {
	v=b.v;
}

ST_OnOffStyleType& ST_OnOffStyleType::operator =(std::wstring b) {

}

ST_OnOffStyleType::operator const wchar_t*() const {

}
ST_OnOffStyleType::operator std::wstring () const {

}
