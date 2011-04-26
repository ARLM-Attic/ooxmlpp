#include "core.h"

Bool::Bool() {
	val = false;
}
Bool::Bool(bool b) {
	val = b;
}
Bool::Bool(std::wstring b) {
	if (b == L"true" || b == L"1")
		val = true;
	else
		val = false;
}
Bool& Bool::operator =(const Bool& b) {
	val = b.val;
	return *this;
}
Bool& Bool::operator =(bool b) {
	val = b;
	return *this;
}
Bool& Bool::operator =(std::wstring b) {
	if (b == L"true" || b == L"1")
		val = true;
	else
		val = false;
	return *this;
}
Bool::operator const wchar_t*() const {
	if (val == true)
		return L"true";
	else
		return L"false";
}
Bool::operator bool() const {
	return val;
}
Bool::~Bool() {
}