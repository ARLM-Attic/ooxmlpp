#include "core.h"

Byte::Byte() {
	val = 0;
}
Byte::Byte(signed char b) {
	val = b;
}
Byte::Byte(std::wstring b) {
	size_t i;
	char buf[1];
	wcstombs_s(&i,buf,1,b.c_str(),(size_t)1);
	val = buf[0];
}
Byte& Byte::operator =(const Byte& b) {
	val = b.val;
	return *this;
}
Byte& Byte::operator =(signed char b) {
	val = b;
	return *this;
}
Byte& Byte::operator =(std::wstring b) {
	size_t i;
	char buf[1];
	wcstombs_s(&i,buf,1,b.c_str(),(size_t)1);
	val = buf[0];
	return *this;
}
Byte::operator const wchar_t*() const {
	wchar_t buffer[65];
	size_t i;
	mbstowcs_s(&i,buffer,(char*)&val,1);
	return buffer;
}
Byte::operator std::wstring() const {
	return (wchar_t *)this;
}
Byte::operator signed char() const {
	return val;
}
Byte::~Byte() {
}