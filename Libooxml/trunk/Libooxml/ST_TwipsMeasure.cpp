#include "core.h"
#include "shared-commonSimpleTypes.h"
#include <regex>

using namespace officeDocument::sharedTypes;

bool ST_TwipsMeasure::checkpattern(std::wstring input) {
	std::wregex rx(L"[0-9]+(\\.[0-9]+)?(mm|cm|in|pt|pc|pi)");
	return std::regex_match(input.c_str(),rx);
}
ST_TwipsMeasure::ST_TwipsMeasure() {
	type = 0;
	val2 = 0;
	val1 = 0;
}

ST_TwipsMeasure::ST_TwipsMeasure(ST_TwipsMeasure &b) {
	type = b.type;
	val1 = b.val1;
	val2 = b.val2;
}

ST_TwipsMeasure::ST_TwipsMeasure(ST_PositiveUniversalMeasure &b) {
	type = 1;
	val1 = b;
}

ST_TwipsMeasure::ST_TwipsMeasure(ST_UnsignedDecimalNumber &b) {
	type = 0;
	val2 = b;
}

ST_TwipsMeasure::ST_TwipsMeasure(std::wstring b) {
	if (checkpattern(b)) {
		type = 1;
		val1 = b;
	}
	else {
		type = 0;
		val2 = b;
	}
}

ST_TwipsMeasure& ST_TwipsMeasure::operator =(const ST_TwipsMeasure& b) {
	type = b.type;
	val1 = b.val1;
	val2 = b.val2;
	return *this;
}

ST_TwipsMeasure& ST_TwipsMeasure::operator =(const ST_PositiveUniversalMeasure& b) {
	type = 1;
	val1 = b;
	return *this;
}

ST_TwipsMeasure& ST_TwipsMeasure::operator =(const ST_UnsignedDecimalNumber& b) {
	type = 0;
	val2 = b;
	return *this;
}

ST_TwipsMeasure& ST_TwipsMeasure::operator =(std::wstring b) {
	if (checkpattern(b)) {
		type = 1;
		val1 = b;
	}
	else {
		type = 0;
		val2 = b;
	}
	return *this;
}

ST_TwipsMeasure::operator const wchar_t*() const {
	if (type == 0) return val2;
	else return val1;
}

ST_TwipsMeasure::operator std::wstring() const {
	if (type == 0) return val2;
	else return val1;
}

ST_TwipsMeasure::operator ST_PositiveUniversalMeasure() {
	if (type == 1) return val1;
	else {
		
	}
}

ST_TwipsMeasure::operator ST_UnsignedDecimalNumber() {
	if (type == 0) return val2;
	else {
	}
}

ST_TwipsMeasure::~ST_TwipsMeasure() {
}