#include "core.h"
#include "shared-commonSimpleTypes.h"
#include <regex>

using namespace officeDocument::sharedTypes;

bool ST_UniversalMeasure::checkpattern(std::wstring input) {
	std::wregex rx(L"-?[0-9]+(\\.[0-9]+)?(mm|cm|in|pt|pc|pi)");
	return std::regex_match(input,rx);
}

ST_UniversalMeasure::ST_UniversalMeasure() {
	val = L"0pt";
}

ST_UniversalMeasure::ST_UniversalMeasure(ST_UniversalMeasure &b) {
	val = b.val;
}

ST_UniversalMeasure::ST_UniversalMeasure(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0pt";
}

ST_UniversalMeasure& ST_UniversalMeasure::operator =(const ST_UniversalMeasure& b) {
	val = b.val;
	return *this;
}

ST_UniversalMeasure& ST_UniversalMeasure::operator =(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0pt";
	return *this;
}

ST_UniversalMeasure::operator const wchar_t*() const {
	return val.c_str();
}

ST_UniversalMeasure::operator std::wstring() const {
	return val;
}

ST_UniversalMeasure::~ST_UniversalMeasure() {
}