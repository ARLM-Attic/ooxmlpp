#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_LineWidth::ST_LineWidth(value _v) {
	v=_v;
}

ST_LineWidth::ST_LineWidth(std::wstring b) {

}

ST_LineWidth::ST_LineWidth(ST_LineWidth &b) {
	v=b.v;
}

ST_LineWidth& ST_LineWidth::operator =(value _v) {
	v=_v;
}

ST_LineWidth& ST_LineWidth::operator =(ST_LineWidth& b) {
	v=b.v;
}

ST_LineWidth& ST_LineWidth::operator =(std::wstring b) {

}

ST_LineWidth::operator const wchar_t*() const {

}
ST_LineWidth::operator std::wstring () const {

}
