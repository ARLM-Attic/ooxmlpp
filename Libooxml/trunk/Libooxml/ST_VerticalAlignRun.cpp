#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

ST_VerticalAlignRun& ST_VerticalAlignRun::operator =(const ST_VerticalAlignRun& b) {
	v = b;
	return *this;
}
ST_VerticalAlignRun& ST_VerticalAlignRun::operator =(std::wstring b) {
	if (b == L"baseline") {
		v = baseline;
	}
	else if (b == L"superscript") {
		v = superscript;
	}
	else if (b == L"subscript") {
		v = subscript;
	}
	else
		v = baseline;
	return *this;
}
ST_VerticalAlignRun::operator const wchar_t*() const {
	if (v == baseline) return L"baseline";
	else if (v == superscript) return L"superscript";
	else if (v == subscript) return L"subscript";
	else return L"";
}

ST_VerticalAlignRun::operator std::wstring() const {
	if (v == baseline) return L"baseline";
	else if (v == superscript) return L"superscript";
	else if (v == subscript) return L"subscript";
	else return L"";
}

ST_VerticalAlignRun::ST_VerticalAlignRun() {
	v = baseline;
}
ST_VerticalAlignRun::ST_VerticalAlignRun(ST_VerticalAlignRun &b) {
	v = b;
}

ST_VerticalAlignRun::ST_VerticalAlignRun(std::wstring b) {
	if (b == L"baseline") {
		v = baseline;
	}
	else if (b == L"superscript") {
		v = superscript;
	}
	else if (b == L"subscript") {
		v = subscript;
	}
	else
		v = baseline;
}

ST_VerticalAlignRun::operator value() const {
	return v;
}

ST_VerticalAlignRun& ST_VerticalAlignRun::operator=(value b) {
	v = b;
	return *this;
}
ST_VerticalAlignRun::ST_VerticalAlignRun(value b) {
	v = b;
}