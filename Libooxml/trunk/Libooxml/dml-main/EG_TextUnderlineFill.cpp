#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextUnderlineFill::EG_TextUnderlineFill(value _v) {
	v=_v;
}

EG_TextUnderlineFill::EG_TextUnderlineFill(std::wstring b) {

}

EG_TextUnderlineFill::EG_TextUnderlineFill(EG_TextUnderlineFill &b) {
	v=b.v;
}

EG_TextUnderlineFill& EG_TextUnderlineFill::operator =(value _v) {
	v=_v;
}

EG_TextUnderlineFill& EG_TextUnderlineFill::operator =(EG_TextUnderlineFill& b) {
	v=b.v;
}

EG_TextUnderlineFill& EG_TextUnderlineFill::operator =(std::wstring b) {

}

EG_TextUnderlineFill::operator const wchar_t*() const {

}
EG_TextUnderlineFill::operator std::wstring () const {

}
