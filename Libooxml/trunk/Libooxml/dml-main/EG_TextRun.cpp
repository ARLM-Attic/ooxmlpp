#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextRun::EG_TextRun(value _v) {
	v=_v;
}

EG_TextRun::EG_TextRun(std::wstring b) {

}

EG_TextRun::EG_TextRun(EG_TextRun &b) {
	v=b.v;
}

EG_TextRun& EG_TextRun::operator =(value _v) {
	v=_v;
}

EG_TextRun& EG_TextRun::operator =(EG_TextRun& b) {
	v=b.v;
}

EG_TextRun& EG_TextRun::operator =(std::wstring b) {

}

EG_TextRun::operator const wchar_t*() const {

}
EG_TextRun::operator std::wstring () const {

}
