#include "core.h"

ULong::ULong() {
	val = 0;
}
ULong::ULong(unsigned long b) {
	val = b;
}
ULong::ULong(std::wstring b) {
	val = _wtol(b.c_str());
}
ULong& ULong::operator =(const ULong& b) {
	val = b.val;
	return *this;
}
ULong& ULong::operator =(unsigned long b) {
	val = b;
	return *this;
}
ULong& ULong::operator =(std::wstring b) {
	val = _wtol(b.c_str());
	return *this;
}
ULong::operator const wchar_t*() const {
	wchar_t buffer[65];
	_ltow_s(val,buffer,10);
	return buffer;
}
ULong::operator std::wstring() const {
	return (wchar_t *)this;
}
ULong::operator unsigned long() const {
	return val;
}
ULong::~ULong() {
}