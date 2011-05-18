#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AdjCoordinate::ST_AdjCoordinate() {
	_c = 0;
	_g = L"";
}
ST_AdjCoordinate::ST_AdjCoordinate(ST_Coordinate &__c) {
	_c = __c;
	_g = L"";
}
ST_AdjCoordinate::ST_AdjCoordinate(ST_GeomGuideName &__g) {
	_g = __g;
	_c = 0;
}
ST_AdjCoordinate::ST_AdjCoordinate(ST_AdjCoordinate &b) {
	_g = b._g;
	_c = b._c;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator =(ST_AdjCoordinate& b) {
	_g = b._g;
	_c = b._c;
	return *this;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator =(std::wstring b) {
	return *this;//TODO
}
ST_AdjCoordinate& ST_AdjCoordinate::operator=(ST_Coordinate &__c) {
	_c = __c;
	return *this;
}
ST_AdjCoordinate& ST_AdjCoordinate::operator=(ST_GeomGuideName &__g) {
	_g = __g;
	return *this;
}

ST_Coordinate ST_AdjCoordinate::c() {
	return _c;
}
ST_GeomGuideName ST_AdjCoordinate::g() {
	return _g;
}

ST_AdjCoordinate::operator const wchar_t*() const {
	return L"";//TODO
}
ST_AdjCoordinate::operator std::wstring () const {
	return L"";//TODO
}
