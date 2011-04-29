#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LineEndType::ST_LineEndType(value _v) {
	v=_v;
}

ST_LineEndType::ST_LineEndType(std::wstring b) {

}

ST_LineEndType::ST_LineEndType(ST_LineEndType &b) {
	v=b.v;
}

ST_LineEndType& ST_LineEndType::operator =(value _v) {
	v=_v;
}

ST_LineEndType& ST_LineEndType::operator =(ST_LineEndType& b) {
	v=b.v;
}

ST_LineEndType& ST_LineEndType::operator =(std::wstring b) {

}

ST_LineEndType::operator const wchar_t*() const {

}
ST_LineEndType::operator std::wstring () const {

}
