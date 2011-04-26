#include "core.h"

UByte::UByte() {
	val = 0;
}
UByte::UByte(unsigned char b) {
	val = b;
}
UByte::UByte(std::wstring b) {
	size_t i;
	char buf[1];
	wcstombs_s(&i,buf,1,b.c_str(),(size_t)1);
	val = buf[0];
}
UByte& UByte::operator =(const UByte& b) {
	val = b.val;
	return *this;
}
UByte& UByte::operator =(unsigned char b) {
	val = b;
	return *this;
}
UByte& UByte::operator =(std::wstring b) {
	size_t i;
	char buf[1];
	wcstombs_s(&i,buf,1,b.c_str(),(size_t)1);
	val = buf[0];
	return *this;
}
UByte::operator const wchar_t*() const {
	wchar_t buffer[65];
	size_t i;
	mbstowcs_s(&i,buffer,(char*)&val,1);
	return buffer;
}

UByte::operator std::wstring() const {
	return (wchar_t *)this;
}
UByte::operator unsigned char() const {
	return val;
}
UByte::~UByte() {
}