#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

EG_TextAutofit::EG_TextAutofit(value _v) {
	v=_v;
}

EG_TextAutofit::EG_TextAutofit(std::wstring b) {

}

EG_TextAutofit::EG_TextAutofit(EG_TextAutofit &b) {
	v=b.v;
}

EG_TextAutofit& EG_TextAutofit::operator =(value _v) {
	v=_v;
}

EG_TextAutofit& EG_TextAutofit::operator =(EG_TextAutofit& b) {
	v=b.v;
}

EG_TextAutofit& EG_TextAutofit::operator =(std::wstring b) {

}

EG_TextAutofit::operator const wchar_t*() const {

}
EG_TextAutofit::operator std::wstring () const {

}
