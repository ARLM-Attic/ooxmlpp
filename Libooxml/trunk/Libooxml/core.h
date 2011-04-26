#pragma once
#include <string>

class Bool {
private:
	bool val;
public:
	Bool();
	Bool(bool b);
	Bool(std::wstring b);
	Bool& operator =(const Bool& b);
	Bool& operator =(bool b);
	Bool& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator bool() const;
	~Bool();
};

class Byte {
private:
	signed char val;
protected:
	virtual bool check(signed char chkval) {
		return true;
	}
public:
	Byte();
	Byte(signed char b);
	Byte(std::wstring b);
	Byte& operator =(const Byte& b);
	Byte& operator =(signed char b);
	Byte& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator signed char() const;
	~Byte();
};

class Int {
private:
	int val;
protected:
	virtual bool check(int chkval) {
		return true;
	}
public:
	Int();
	Int(int b);
	Int(std::wstring b);
	Int& operator =(const Int& b);
	Int& operator =(int b);
	Int& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator int() const;
	~Int();
};

class Long {
private:
	long val;
protected:
	virtual bool check(long chkval) {
		return true;
	}
public:
	Long();
	Long(long b);
	Long(std::wstring b);
	Long& operator =(const Long& b);
	Long& operator =(long b);
	Long& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator long() const;
	~Long();
};

class UByte {
private:
	unsigned char val;
protected:
	virtual bool check(unsigned char chkval) {
		return true;
	}
public:
	UByte();
	UByte(unsigned char b);
	UByte(std::wstring b);
	UByte& operator =(const UByte& b);
	UByte& operator =(unsigned char b);
	UByte& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator unsigned char() const;
	~UByte();
};

class UInt {
private:
	unsigned int val;
protected:
	virtual bool check(unsigned int chkval) {
		return true;
	}
public:
	UInt();
	UInt(unsigned int b);
	UInt(std::wstring b);
	UInt& operator =(const UInt& b);
	UInt& operator =(unsigned int b);
	UInt& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator unsigned int() const;
	~UInt();
};

class ULong {
private:
	unsigned long val;
protected:
	virtual bool check(unsigned long chkval) {
		return true;
	}
public:
	ULong();
	ULong(unsigned long b);
	ULong(std::wstring b);
	ULong& operator =(const ULong& b);
	ULong& operator =(unsigned long b);
	ULong& operator =(std::wstring b);
	operator const wchar_t*() const;
	operator std::wstring() const;
	operator unsigned long() const;
	~ULong();
};