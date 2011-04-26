#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

ST_YAlign& ST_YAlign::operator =(const ST_YAlign& b) {
	v = b.v;
	return *this;
}
ST_YAlign& ST_YAlign::operator =(wchar_t *b) {
	if (wcscmp(L"inline",b) == 0) {
		v = inline_;
	}
	else if (wcscmp(L"top",b) == 0) {
		v = top;
	}
	else if (wcscmp(L"center",b) == 0) {
		v = center;
	}
	else if (wcscmp(L"bottom",b) == 0) {
		v = bottom;
	}
	else if (wcscmp(L"inside",b) == 0) {
		v = inside;
	}
	else if (wcscmp(L"outside",b) == 0) {
		v = outside;
	}
	return *this;
}
ST_YAlign::operator const wchar_t*() const {
	if (v == inline_) return L"inline";
	else if (v == top) return L"top";
	else if (v == center) return L"center";
	else if (v == bottom) return L"bottom";
	else if (v == inside) return L"inside";
	else if (v == outside) return L"outside";
	else return L"";
}

ST_YAlign::operator std::wstring() const {
	if (v == inline_) return L"inline";
	else if (v == top) return L"top";
	else if (v == center) return L"center";
	else if (v == bottom) return L"bottom";
	else if (v == inside) return L"inside";
	else if (v == outside) return L"outside";
	else return L"";
}

ST_YAlign::ST_YAlign() {
	v = top;
}

ST_YAlign::ST_YAlign(ST_YAlign &b) {
	v = b;
}

ST_YAlign::ST_YAlign(std::wstring b) {
	if (b == L"inline") {
		v = inline_;
	}
	if (b == L"top") {
		v = top;
	}
	else if (b == L"center") {
		v = center;
	}
	else if (b == L"bottom") {
		v = bottom;
	}
	else if (b == L"inside") {
		v = inside;
	}
	else if (b == L"outside") {
		v = outside;
	}
}

ST_YAlign::ST_YAlign(value b) {
	v = b;
}

ST_YAlign::operator value() const {
	return v;
}

ST_YAlign& ST_YAlign::operator=(value b) {
	v = b;
	return *this;
}