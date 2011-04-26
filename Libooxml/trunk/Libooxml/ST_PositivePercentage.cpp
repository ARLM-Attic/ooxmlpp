#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <regex>
#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

bool ST_PositivePercentage::checkpattern(std::wstring input) {
	std::wregex rx(L"[0-9]+(\\.[0-9]+)?%");
	return std::regex_match(input,rx);
}

ST_PositivePercentage::ST_PositivePercentage() {
	val = L"0%";
}

ST_PositivePercentage::ST_PositivePercentage(ST_PositivePercentage &b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
}

ST_PositivePercentage::ST_PositivePercentage(ST_Percentage &b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_PositivePercentage::ST_PositivePercentage(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_PositivePercentage& ST_PositivePercentage::operator =(const ST_PositivePercentage& b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
	return *this;
}

ST_PositivePercentage& ST_PositivePercentage::operator =(const ST_Percentage& b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_PositivePercentage& ST_PositivePercentage::operator =(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_PositivePercentage::operator const wchar_t*() const {
	return val;
}

ST_PositivePercentage::operator std::wstring() const {
	return val;
}

ST_PositivePercentage::~ST_PositivePercentage() {
}