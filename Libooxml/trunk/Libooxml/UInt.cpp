#include "core.h"

UInt::UInt() {
	val = 0;
}
UInt::UInt(unsigned int b) {
	val = b;
}
UInt::UInt(std::wstring b) {
	val = _wtol(b.c_str());
}
UInt& UInt::operator =(const UInt& b) {
	val = b.val;
	return *this;
}
UInt& UInt::operator =(unsigned int b) {
	val = b;
	return *this;
}
UInt& UInt::operator =(std::wstring b) {
	val = _wtol(b.c_str());
	return *this;
}
UInt::operator const wchar_t*() const {
	wchar_t buffer[65];
	_ltow_s(val,buffer,10);
	return buffer;
}
UInt::operator std::wstring() const {
	return (wchar_t *)this;
}
UInt::operator unsigned int() const {
	return val;
}
UInt::~UInt() {
}