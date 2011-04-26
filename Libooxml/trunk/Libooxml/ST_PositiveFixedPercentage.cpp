#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <regex>
#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

bool ST_PositiveFixedPercentage::checkpattern(std::wstring input) {
	std::wregex rx(L"((100)|([0-9][0-9]?))(\\.[0-9][0-9]?)?%");
	return std::regex_match(input,rx);
}

ST_PositiveFixedPercentage::ST_PositiveFixedPercentage() {
	val = L"0%";
}

ST_PositiveFixedPercentage::ST_PositiveFixedPercentage(ST_PositiveFixedPercentage &b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
}

ST_PositiveFixedPercentage::ST_PositiveFixedPercentage(ST_Percentage &b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_PositiveFixedPercentage::ST_PositiveFixedPercentage(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_PositiveFixedPercentage& ST_PositiveFixedPercentage::operator =(const ST_PositiveFixedPercentage& b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
	return *this;
}

ST_PositiveFixedPercentage& ST_PositiveFixedPercentage::operator =(const ST_Percentage& b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_PositiveFixedPercentage& ST_PositiveFixedPercentage::operator =(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_PositiveFixedPercentage::operator const wchar_t*() const {
	return val;
}

ST_PositiveFixedPercentage::operator std::wstring() const {
	return val;
}

ST_PositiveFixedPercentage::~ST_PositiveFixedPercentage() {
}