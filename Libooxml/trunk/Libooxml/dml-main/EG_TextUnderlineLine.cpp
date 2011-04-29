#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextUnderlineLine::EG_TextUnderlineLine(value _v) {
	v=_v;
}

EG_TextUnderlineLine::EG_TextUnderlineLine(std::wstring b) {

}

EG_TextUnderlineLine::EG_TextUnderlineLine(EG_TextUnderlineLine &b) {
	v=b.v;
}

EG_TextUnderlineLine& EG_TextUnderlineLine::operator =(value _v) {
	v=_v;
}

EG_TextUnderlineLine& EG_TextUnderlineLine::operator =(EG_TextUnderlineLine& b) {
	v=b.v;
}

EG_TextUnderlineLine& EG_TextUnderlineLine::operator =(std::wstring b) {

}

EG_TextUnderlineLine::operator const wchar_t*() const {

}
EG_TextUnderlineLine::operator std::wstring () const {

}
