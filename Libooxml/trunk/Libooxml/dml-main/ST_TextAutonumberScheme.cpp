#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TextAutonumberScheme::ST_TextAutonumberScheme(value _v) {
	v=_v;
}

ST_TextAutonumberScheme::ST_TextAutonumberScheme(std::wstring b) {

}

ST_TextAutonumberScheme::ST_TextAutonumberScheme(ST_TextAutonumberScheme &b) {
	v=b.v;
}

ST_TextAutonumberScheme& ST_TextAutonumberScheme::operator =(value _v) {
	v=_v;
}

ST_TextAutonumberScheme& ST_TextAutonumberScheme::operator =(ST_TextAutonumberScheme& b) {
	v=b.v;
}

ST_TextAutonumberScheme& ST_TextAutonumberScheme::operator =(std::wstring b) {

}

ST_TextAutonumberScheme::operator const wchar_t*() const {

}
ST_TextAutonumberScheme::operator std::wstring () const {

}
