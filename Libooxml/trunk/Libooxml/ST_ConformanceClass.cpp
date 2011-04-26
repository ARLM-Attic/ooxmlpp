#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

ST_ConformanceClass& ST_ConformanceClass::operator =(const ST_ConformanceClass& b) {
	v = b.v;
	return *this;
}
ST_ConformanceClass& ST_ConformanceClass::operator =(std::wstring b) {
	if (b == L"strict") {
		v = strict;
	}
	else if (b == L"transtional") {
		v = transitional;
	}
	return *this;
}
ST_ConformanceClass::operator const wchar_t*() const {
	if (v == strict) return L"strict";
	else if (v == transitional) return L"transitional";
	else return L"";
}

ST_ConformanceClass::operator std::wstring() const {
	if (v == strict) return L"strict";
	else if (v == transitional) return L"transitional";
	else return L"";
}

ST_ConformanceClass::ST_ConformanceClass() {
	v = strict;
}

ST_ConformanceClass::ST_ConformanceClass(ST_ConformanceClass &b) {
	v = b;
}

ST_ConformanceClass::ST_ConformanceClass(std::wstring b) {
	if (b == L"strict") {
		v = strict;
	}
	else if (b == L"transtional") {
		v = transitional;
	}
}

ST_ConformanceClass::ST_ConformanceClass(value b) {
	v = b;
}

ST_ConformanceClass::operator value() const {
	return v;
}

ST_ConformanceClass& ST_ConformanceClass::operator=(value b) {
	v = b;
	return *this;
}