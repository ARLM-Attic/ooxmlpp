#include "core.h"
#include "shared-commonSimpleTypes.h"
#include <regex>
using namespace officeDocument::sharedTypes;

bool ST_Guid::checkpattern(std::wstring input) {
	std::wregex rx(L"\\{[0-9A-F]{8}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{12}\\}");
	return std::regex_match(input,rx);
}

ST_Guid::ST_Guid() {
	guid = L"{00000000-0000-0000-0000-000000000000}";
}
ST_Guid::ST_Guid(ST_Guid &b) {
	if (checkpattern(b))
		guid = b.guid;
	else
		guid = L"{00000000-0000-0000-0000-000000000000}";
}
ST_Guid::ST_Guid(std::wstring b) {
	if (checkpattern(b))
		guid = b;
	else
		guid = L"{00000000-0000-0000-0000-000000000000}";
}
ST_Guid& ST_Guid::operator =(const ST_Guid& b) {
	if (checkpattern(b))
		guid = b.guid;
	else
		guid = L"{00000000-0000-0000-0000-000000000000}";
	return *this;
}
ST_Guid& ST_Guid::operator =(std::wstring b) {
	if (checkpattern(b))
		guid = b;
	else
		guid = L"{00000000-0000-0000-0000-000000000000}";
	return *this;
}
ST_Guid::operator const wchar_t*() const {
	return guid.c_str();
}

ST_Guid::operator std::wstring() const {
	return guid;
}

ST_Guid::~ST_Guid() {
}