#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <regex>
#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

bool ST_FixedPercentage::checkpattern(std::wstring input) {
	std::wregex rx(L"-?((100)|([0-9][0-9]?))(\\.[0-9][0-9]?)?%");
	return std::regex_match(input,rx);
}

ST_FixedPercentage::ST_FixedPercentage() {
	val = L"0%";
}

ST_FixedPercentage::ST_FixedPercentage(ST_FixedPercentage &b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
}

ST_FixedPercentage::ST_FixedPercentage(ST_Percentage &b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_FixedPercentage::ST_FixedPercentage(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
}

ST_FixedPercentage& ST_FixedPercentage::operator =(const ST_FixedPercentage& b) {
	if (checkpattern(b))
		val = (std::wstring)b;
	else
		val = L"0%";
	return *this;
}

ST_FixedPercentage& ST_FixedPercentage::operator =(const ST_Percentage& b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_FixedPercentage& ST_FixedPercentage::operator =(std::wstring b) {
	if (checkpattern(b))
		val = b;
	else
		val = L"0%";
	return *this;
}

ST_FixedPercentage::operator const wchar_t*() const {
	return val;
}

ST_FixedPercentage::operator std::wstring() const {
	return val;
}

ST_FixedPercentage::~ST_FixedPercentage() {
}