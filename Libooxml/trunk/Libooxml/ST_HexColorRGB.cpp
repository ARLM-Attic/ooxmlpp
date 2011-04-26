#include "core.h"
#include "shared-commonSimpleTypes.h"
#include <regex>

using namespace officeDocument::sharedTypes;

bool ST_HexColorRGB::check(std::wstring input) {
	std::wregex rx(L"[0-9a-f]{6}");
	return std::regex_match(input,rx);
}

ST_HexColorRGB::ST_HexColorRGB(const ST_HexColorRGB &b) {
	if (check(b)) {
		memcpy(val,b.val,6);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
	}
}

ST_HexColorRGB& ST_HexColorRGB::operator =(const ST_HexColorRGB& b) {
	if (check(b)) {
		memcpy(val,b.val,6);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
	}
	return *this;
}
ST_HexColorRGB& ST_HexColorRGB::operator =(std::wstring b) {
	if (check(b)) {
		memcpy(val,b.c_str(),6);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
	}
	return *this;
}
ST_HexColorRGB::operator const wchar_t*() const {
	return &val[0];
}

ST_HexColorRGB::operator std::wstring() const {
	return &val[0];
}

ST_HexColorRGB::ST_HexColorRGB() {
	val[0] = L'0';
	val[1] = L'0';
	val[2] = L'0';
	val[3] = L'0';
	val[4] = L'0';
	val[5] = L'0';
}

ST_HexColorRGB::ST_HexColorRGB(const std::wstring b) {
	if (check(b)) {
		memcpy(val,b.c_str(),6);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
	}
}
