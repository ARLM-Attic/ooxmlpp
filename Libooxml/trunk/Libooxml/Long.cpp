#include "core.h"

Long::Long() {
	val = 0;
}
Long::Long(long b) {
	val = b;
}
Long::Long(std::wstring b) {
	val = _wtol(b.c_str());
}
Long& Long::operator =(const Long& b) {
	val = b.val;
	return *this;
}
Long& Long::operator =(long b) {
	val = b;
	return *this;
}
Long& Long::operator =(std::wstring b) {
	val = _wtol(b.c_str());
	return *this;
}
Long::operator const wchar_t*() const {
	wchar_t buffer[65];
	_ltow_s(val,buffer,10);
	return buffer;
}
Long::operator std::wstring() const {
	return (wchar_t *)this;
}
Long::operator long() const {
	return val;
}
Long::~Long() {
}