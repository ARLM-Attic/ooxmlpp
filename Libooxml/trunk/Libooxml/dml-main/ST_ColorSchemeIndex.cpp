#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_ColorSchemeIndex::ST_ColorSchemeIndex() {
}

ST_ColorSchemeIndex::ST_ColorSchemeIndex(value _v) {
	v=_v;
}

ST_ColorSchemeIndex::ST_ColorSchemeIndex(std::wstring b) {
	if (b == L"dk1") v = dk1;
	else if (b == L"lt1") v = lt1;
	else if (b == L"dk2") v = dk2;
	else if (b == L"lt2") v = lt2;
	else if (b == L"accent1") v = accent1;
	else if (b == L"accent2") v = accent2;
	else if (b == L"accent3") v = accent3;
	else if (b == L"accent4") v = accent4;
	else if (b == L"accent5") v = accent5;
	else if (b == L"hlink") v = hlink;
	else if (b == L"folHlink") v = folHlink;
}

ST_ColorSchemeIndex::ST_ColorSchemeIndex(ST_ColorSchemeIndex &b) {
	v=b.v;
}

ST_ColorSchemeIndex& ST_ColorSchemeIndex::operator =(value _v) {
	v=_v;
}

ST_ColorSchemeIndex& ST_ColorSchemeIndex::operator =(ST_ColorSchemeIndex& b) {
	v=b.v;
}

ST_ColorSchemeIndex& ST_ColorSchemeIndex::operator =(std::wstring b) {
	if (b == L"dk1") v = dk1;
	else if (b == L"lt1") v = lt1;
	else if (b == L"dk2") v = dk2;
	else if (b == L"lt2") v = lt2;
	else if (b == L"accent1") v = accent1;
	else if (b == L"accent2") v = accent2;
	else if (b == L"accent3") v = accent3;
	else if (b == L"accent4") v = accent4;
	else if (b == L"accent5") v = accent5;
	else if (b == L"hlink") v = hlink;
	else if (b == L"folHlink") v = folHlink;
	return *this;
}

ST_ColorSchemeIndex::operator const wchar_t*() const {
	if (v == dk1) return L"dk1";
	else if (v == lt1) return L"lt1";
	else if (v == dk2) return L"dk2";
	else if (v == lt2) return L"lt2";
	else if (v == accent1) return L"accent1";
	else if (v == accent2) return L"accent2";
	else if (v == accent3) return L"accent3";
	else if (v == accent4) return L"accent4";
	else if (v == accent5) return L"accent5";
	else return L"";
}
ST_ColorSchemeIndex::operator std::wstring () const {
	return (wchar_t *)this;
}
