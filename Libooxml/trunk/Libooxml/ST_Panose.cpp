#include "core.h"
#include "shared-commonSimpleTypes.h"
#include <regex>

using namespace officeDocument::sharedTypes;

bool ST_Panose::check(std::wstring input) {
	std::wregex rx(L"[0-9a-f]{20}");
	return std::regex_match(input,rx);
}
ST_Panose::ST_Panose(ST_Panose &b) {
	if (check(b)) {
		memcpy(val,b.val,20);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
		val[6] = L'0';
		val[7] = L'0';
		val[8] = L'0';
		val[9] = L'0';
		val[10] = L'0';
		val[11] = L'0';
		val[12] = L'0';
		val[13] = L'0';
		val[14] = L'0';
		val[15] = L'0';
		val[16] = L'0';
		val[17] = L'0';
		val[18] = L'0';
		val[19] = L'0';
	}
}

ST_Panose& ST_Panose::operator =(const ST_Panose& b) {
	if (check(b)) {
		memcpy(val,b.val,20);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
		val[6] = L'0';
		val[7] = L'0';
		val[8] = L'0';
		val[9] = L'0';
		val[10] = L'0';
		val[11] = L'0';
		val[12] = L'0';
		val[13] = L'0';
		val[14] = L'0';
		val[15] = L'0';
		val[16] = L'0';
		val[17] = L'0';
		val[18] = L'0';
		val[19] = L'0';
	}
	return *this;
}
ST_Panose& ST_Panose::operator =(std::wstring b) {
	if (check(b)) {
		memcpy(val,b.c_str(),20);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
		val[6] = L'0';
		val[7] = L'0';
		val[8] = L'0';
		val[9] = L'0';
		val[10] = L'0';
		val[11] = L'0';
		val[12] = L'0';
		val[13] = L'0';
		val[14] = L'0';
		val[15] = L'0';
		val[16] = L'0';
		val[17] = L'0';
		val[18] = L'0';
		val[19] = L'0';
	}
	return *this;
}
ST_Panose::operator const wchar_t*() const {
	return &val[0];
}

ST_Panose::operator std::wstring() const {
	return &val[0];
}

ST_Panose::ST_Panose() {
	val[0] = L'0';
	val[1] = L'0';
	val[2] = L'0';
	val[3] = L'0';
	val[4] = L'0';
	val[5] = L'0';
	val[6] = L'0';
	val[7] = L'0';
	val[8] = L'0';
	val[9] = L'0';
	val[10] = L'0';
	val[11] = L'0';
	val[12] = L'0';
	val[13] = L'0';
	val[14] = L'0';
	val[15] = L'0';
	val[16] = L'0';
	val[17] = L'0';
	val[18] = L'0';
	val[19] = L'0';
}

ST_Panose::ST_Panose(const std::wstring b) {
	if (check(b)) {
		memcpy(val,b.c_str(),20);
	}
	else {
		val[0] = L'0';
		val[1] = L'0';
		val[2] = L'0';
		val[3] = L'0';
		val[4] = L'0';
		val[5] = L'0';
		val[6] = L'0';
		val[7] = L'0';
		val[8] = L'0';
		val[9] = L'0';
		val[10] = L'0';
		val[11] = L'0';
		val[12] = L'0';
		val[13] = L'0';
		val[14] = L'0';
		val[15] = L'0';
		val[16] = L'0';
		val[17] = L'0';
		val[18] = L'0';
		val[19] = L'0';
	}
}