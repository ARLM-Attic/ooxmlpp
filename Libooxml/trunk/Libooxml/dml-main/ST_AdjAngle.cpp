#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AdjAngle::ST_AdjAngle() {
	vtype = angle;
	_a = 0;
}

ST_AdjAngle::ST_AdjAngle(ST_Angle &__a) {
	_a = __a;
	vtype = angle;
}

ST_AdjAngle::ST_AdjAngle(ST_GeomGuideName &__g) {
	_g = __g;
	vtype = geomGuideName;
}

ST_AdjAngle::ST_AdjAngle(ST_AdjAngle &b) {
	_a = b._a;
	_g = b._g;
	vtype = b.vtype;
}

ST_AdjAngle& ST_AdjAngle::operator =(ST_AdjAngle& b) {
	_a = b._a;
	_g = b._g;
	vtype = b.vtype;
	return *this;
}

ST_AdjAngle& ST_AdjAngle::operator =(std::wstring b) {
	//if b can be converted to int then ST_angle else geomguidename
	_a = b;
	if (((std::wstring)_a) == b) {
		vtype = angle;
	}
	else {
		_g = b;
		vtype = geomGuideName;
	}
	return *this;
}

ST_AdjAngle& ST_AdjAngle::operator =(ST_Angle &__a) {
	_a = __a;
	vtype = angle;
	return *this;
}

ST_AdjAngle& ST_AdjAngle::operator =(ST_GeomGuideName &__g) {
	_g = __g;
	vtype = geomGuideName;
	return *this;
}

ST_Angle ST_AdjAngle::a() {
	return _a;
}

ST_GeomGuideName ST_AdjAngle::g() {
	return _g;
}

ST_AdjAngle::valuetype ST_AdjAngle::type() {
	return vtype;
}

ST_AdjAngle::operator const wchar_t*() const {
	if (vtype == angle) {
		return _a;
	}
	else {
		return _g.c_str();
	}
}

ST_AdjAngle::operator std::wstring () const {
	if (vtype == angle) {
		return _a;
	}
	else {
		return _g;
	}
}
