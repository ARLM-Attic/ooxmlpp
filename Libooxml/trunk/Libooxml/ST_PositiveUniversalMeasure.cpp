#include "core.h"
#include "shared-commonSimpleTypes.h"
#include <regex>

using namespace officeDocument::sharedTypes;

bool ST_PositiveUniversalMeasure::checkpattern(std::wstring input) {
	std::wregex rx(L"[0-9]+(\\.[0-9]+)?(mm|cm|in|pt|pc|pi)");
	return std::regex_match(input,rx);
}

ST_PositiveUniversalMeasure::ST_PositiveUniversalMeasure() {
	val = L"0pt";
}

ST_PositiveUniversalMeasure::ST_PositiveUniversalMeasure(ST_PositiveUniversalMeasure &b) {
	val = b.val;
}

ST_PositiveUniversalMeasure::ST_PositiveUniversalMeasure(ST_UniversalMeasure &b) {
	if (checkpattern(b)) 
		val = b;
	else
		val = L"0pt";
}

ST_PositiveUniversalMeasure::ST_PositiveUniversalMeasure(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0pt";
}

ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure::operator =(const ST_PositiveUniversalMeasure& b) {
	val = b.val;
	return *this;
}

ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure::operator =(const ST_UniversalMeasure& b) {
	if (checkpattern(b)) 
		val = b;
	else
		val = L"0pt";
	return *this;
}

ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure::operator =(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0pt";
	return *this;
}

ST_PositiveUniversalMeasure::operator const wchar_t*() const {
	return val;
}

ST_PositiveUniversalMeasure::operator std::wstring() const {
	return val;
}

ST_PositiveUniversalMeasure::~ST_PositiveUniversalMeasure() {
}