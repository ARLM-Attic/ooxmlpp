#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_SchemeColorVal::ST_SchemeColorVal(value _v) {
	v=_v;
}

ST_SchemeColorVal::ST_SchemeColorVal(std::wstring b) {

}

ST_SchemeColorVal::ST_SchemeColorVal(ST_SchemeColorVal &b) {
	v=b.v;
}

ST_SchemeColorVal& ST_SchemeColorVal::operator =(value _v) {
	v=_v;
}

ST_SchemeColorVal& ST_SchemeColorVal::operator =(ST_SchemeColorVal& b) {
	v=b.v;
}

ST_SchemeColorVal& ST_SchemeColorVal::operator =(std::wstring b) {

}

ST_SchemeColorVal::operator const wchar_t*() const {

}
ST_SchemeColorVal::operator std::wstring () const {

}
