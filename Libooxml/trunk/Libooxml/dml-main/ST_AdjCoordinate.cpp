#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AdjCoordinate::ST_AdjCoordinate() {
	_c = 0;
	_g = L"";
	vtype = coordinate;
}
ST_AdjCoordinate::ST_AdjCoordinate(ST_Coordinate &__c) {
	_c = __c;
	_g = L"";
	vtype = coordinate;
}
ST_AdjCoordinate::ST_AdjCoordinate(ST_GeomGuideName &__g) {
	_g = __g;
	_c = 0;
	vtype = geomGuideName;
}
ST_AdjCoordinate::ST_AdjCoordinate(ST_AdjCoordinate &b) {
	_g = b._g;
	_c = b._c;
	vtype = b.vtype;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator=(ST_AdjCoordinate& b) {
	_g = b._g;
	_c = b._c;
	vtype = b.vtype;
	return *this;
}

ST_AdjCoordinate& ST_AdjCoordinate::operator=(std::wstring b) {
	_c = b;
	if (((std::wstring)_c) == b) {
		vtype = coordinate;
	}
	else {
		_g = b;
		vtype = geomGuideName;
	}
	return *this;
}
ST_AdjCoordinate& ST_AdjCoordinate::operator=(ST_Coordinate &__c) {
	_c = __c;
	vtype = coordinate;
	return *this;
}
ST_AdjCoordinate& ST_AdjCoordinate::operator=(ST_GeomGuideName &__g) {
	_g = __g;
	vtype = geomGuideName;
	return *this;
}

ST_Coordinate ST_AdjCoordinate::c() {
	return _c;
}
ST_GeomGuideName ST_AdjCoordinate::g() {
	return _g;
}

ST_AdjCoordinate::operator const wchar_t*() const {
if (vtype == coordinate) return _c;
else return _g.c_str();
}
ST_AdjCoordinate::operator std::wstring () const {
	if (vtype == coordinate) return _c;
else return _g;
}

ST_AdjCoordinate::valuetype ST_AdjCoordinate::type() {
	return vtype;
}