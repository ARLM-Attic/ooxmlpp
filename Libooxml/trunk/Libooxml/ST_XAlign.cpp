#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

ST_XAlign& ST_XAlign::operator =(const ST_XAlign& b) {
	v = b.v;
	return *this;
}
ST_XAlign& ST_XAlign::operator =(std::wstring b) {
	if (b == L"left") {
		v = left;
	}
	else if (b == L"center") {
		v = center;
	}
	else if (b == L"right") {
		v = right;
	}
	else if (b == L"inside") {
		v = inside;
	}
	else if (b == L"outside") {
		v = outside;
	}
	return *this;
}
ST_XAlign::operator const wchar_t*() const {
	if (v == left) return L"left";
	else if (v == center) return L"center";
	else if (v == right) return L"right";
	else if (v == inside) return L"inside";
	else if (v == outside) return L"outside";
	else return L"";
}

ST_XAlign::operator std::wstring() const {
	if (v == left) return L"left";
	else if (v == center) return L"center";
	else if (v == right) return L"right";
	else if (v == inside) return L"inside";
	else if (v == outside) return L"outside";
	else return L"";
}

ST_XAlign::ST_XAlign() {
	v = left;
}

ST_XAlign::ST_XAlign(ST_XAlign &b) {
	v = b;
}

ST_XAlign::ST_XAlign(std::wstring b) {
	if (b == L"left") {
		v = left;
	}
	else if (b == L"center") {
		v = center;
	}
	else if (b == L"right") {
		v = right;
	}
	else if (b == L"inside") {
		v = inside;
	}
	else if (b == L"outside") {
		v = outside;
	}
}

ST_XAlign::ST_XAlign(value b) {
	v = b;
}

ST_XAlign::operator value() const {
	return v;
}

ST_XAlign& ST_XAlign::operator=(value b) {
	v = b;
	return *this;
}