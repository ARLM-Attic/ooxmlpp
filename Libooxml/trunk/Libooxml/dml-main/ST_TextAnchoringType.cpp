#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextAnchoringType::ST_TextAnchoringType(value _v) {
	v=_v;
}

ST_TextAnchoringType::ST_TextAnchoringType(std::wstring b) {

}

ST_TextAnchoringType::ST_TextAnchoringType(ST_TextAnchoringType &b) {
	v=b.v;
}

ST_TextAnchoringType& ST_TextAnchoringType::operator =(value _v) {
	v=_v;
}

ST_TextAnchoringType& ST_TextAnchoringType::operator =(ST_TextAnchoringType& b) {
	v=b.v;
}

ST_TextAnchoringType& ST_TextAnchoringType::operator =(std::wstring b) {

}

ST_TextAnchoringType::operator const wchar_t*() const {

}
ST_TextAnchoringType::operator std::wstring () const {

}
