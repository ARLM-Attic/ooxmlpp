#include "core.h"

Int::Int() {
	val = false;
}
Int::Int(int b) {
	val = b;
}
Int::Int(std::wstring b) {
	val = _wtoi(b.c_str());
}
Int& Int::operator =(const Int& b) {
	val = b.val;
	return *this;
}
Int& Int::operator =(int b) {
	val = b;
	return *this;
}
Int& Int::operator =(std::wstring b) {
	val = _wtoi(b.c_str());
	return *this;
}
Int::operator const wchar_t*() const {
	wchar_t buffer[65];
	_itow_s(val,buffer,10);
	return buffer;
}
Int::operator const wchar_t*() const {
	return (wchar_t *)this;
}
Int::operator int() const {
	return val;
}
Int::~Int() {
}