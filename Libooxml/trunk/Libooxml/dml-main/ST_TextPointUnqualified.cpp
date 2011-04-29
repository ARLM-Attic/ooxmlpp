#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextPointUnqualified::ST_TextPointUnqualified(value _v) {
	v=_v;
}

ST_TextPointUnqualified::ST_TextPointUnqualified(std::wstring b) {

}

ST_TextPointUnqualified::ST_TextPointUnqualified(ST_TextPointUnqualified &b) {
	v=b.v;
}

ST_TextPointUnqualified& ST_TextPointUnqualified::operator =(value _v) {
	v=_v;
}

ST_TextPointUnqualified& ST_TextPointUnqualified::operator =(ST_TextPointUnqualified& b) {
	v=b.v;
}

ST_TextPointUnqualified& ST_TextPointUnqualified::operator =(std::wstring b) {

}

ST_TextPointUnqualified::operator const wchar_t*() const {

}
ST_TextPointUnqualified::operator std::wstring () const {

}
