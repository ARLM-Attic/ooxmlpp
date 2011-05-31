#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationBuildType::ST_AnimationBuildType() {
	v=allAtOnce;
}

ST_AnimationBuildType::ST_AnimationBuildType(value _v) {
	v=_v;
}

ST_AnimationBuildType::ST_AnimationBuildType(std::wstring b) {
	if (b == L"allAtOnce")
		v = allAtOnce;
}

ST_AnimationBuildType::ST_AnimationBuildType(ST_AnimationBuildType &b) {
	v=b.v;
}

ST_AnimationBuildType& ST_AnimationBuildType::operator=(value _v) {
	v=_v;
	return *this;
}

ST_AnimationBuildType& ST_AnimationBuildType::operator=(ST_AnimationBuildType& b) {
	v=b.v;
	return *this;
}

ST_AnimationBuildType& ST_AnimationBuildType::operator=(std::wstring b) {
	if (b == L"allAtOnce")
		v = allAtOnce;
	return *this;
}

ST_AnimationBuildType::operator const wchar_t*() const {
	if (v == allAtOnce) return L"allAtOnce";
	else return L"";

}
ST_AnimationBuildType::operator std::wstring () const {
	return (wchar_t*)this;

}
