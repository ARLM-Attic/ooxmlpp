#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <regex>
#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

bool ST_Percentage::checkpattern(std::wstring input) {
	std::wregex rx(L"-?[0-9]+(\\.[0-9]+)?%");
	return std::regex_match(input,rx);
}

ST_Percentage::ST_Percentage() {
	val = L"0%";
}

ST_Percentage::ST_Percentage(ST_Percentage &b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
}

ST_Percentage::ST_Percentage(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_Percentage& ST_Percentage::operator =(const ST_Percentage& b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
	return *this;
}

ST_Percentage& ST_Percentage::operator =(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_Percentage::operator const wchar_t*() const {
	return val.c_str();
}

ST_Percentage::operator std::wstring() const {
	return val;
}

ST_Percentage::~ST_Percentage() {
}