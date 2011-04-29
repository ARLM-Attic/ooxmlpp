#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_SystemColorVal::ST_SystemColorVal(value _v) {
	v=_v;
}

ST_SystemColorVal::ST_SystemColorVal(std::wstring b) {

}

ST_SystemColorVal::ST_SystemColorVal(ST_SystemColorVal &b) {
	v=b.v;
}

ST_SystemColorVal& ST_SystemColorVal::operator =(value _v) {
	v=_v;
}

ST_SystemColorVal& ST_SystemColorVal::operator =(ST_SystemColorVal& b) {
	v=b.v;
}

ST_SystemColorVal& ST_SystemColorVal::operator =(std::wstring b) {

}

ST_SystemColorVal::operator const wchar_t*() const {

}
ST_SystemColorVal::operator std::wstring () const {

}
