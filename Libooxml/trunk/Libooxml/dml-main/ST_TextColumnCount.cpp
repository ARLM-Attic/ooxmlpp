#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextColumnCount::ST_TextColumnCount(value _v) {
	v=_v;
}

ST_TextColumnCount::ST_TextColumnCount(std::wstring b) {

}

ST_TextColumnCount::ST_TextColumnCount(ST_TextColumnCount &b) {
	v=b.v;
}

ST_TextColumnCount& ST_TextColumnCount::operator =(value _v) {
	v=_v;
}

ST_TextColumnCount& ST_TextColumnCount::operator =(ST_TextColumnCount& b) {
	v=b.v;
}

ST_TextColumnCount& ST_TextColumnCount::operator =(std::wstring b) {

}

ST_TextColumnCount::operator const wchar_t*() const {

}
ST_TextColumnCount::operator std::wstring () const {

}
