#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LineEndLength::ST_LineEndLength(value _v) {
	v=_v;
}

ST_LineEndLength::ST_LineEndLength(std::wstring b) {

}

ST_LineEndLength::ST_LineEndLength(ST_LineEndLength &b) {
	v=b.v;
}

ST_LineEndLength& ST_LineEndLength::operator =(value _v) {
	v=_v;
}

ST_LineEndLength& ST_LineEndLength::operator =(ST_LineEndLength& b) {
	v=b.v;
}

ST_LineEndLength& ST_LineEndLength::operator =(std::wstring b) {

}

ST_LineEndLength::operator const wchar_t*() const {

}
ST_LineEndLength::operator std::wstring () const {

}
