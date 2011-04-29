#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationDgmOnlyBuildType::ST_AnimationDgmOnlyBuildType(value _v) {
	v=_v;
}

ST_AnimationDgmOnlyBuildType::ST_AnimationDgmOnlyBuildType(std::wstring b) {

}

ST_AnimationDgmOnlyBuildType::ST_AnimationDgmOnlyBuildType(ST_AnimationDgmOnlyBuildType &b) {
	v=b.v;
}

ST_AnimationDgmOnlyBuildType& ST_AnimationDgmOnlyBuildType::operator =(value _v) {
	v=_v;
}

ST_AnimationDgmOnlyBuildType& ST_AnimationDgmOnlyBuildType::operator =(ST_AnimationDgmOnlyBuildType& b) {
	v=b.v;
}

ST_AnimationDgmOnlyBuildType& ST_AnimationDgmOnlyBuildType::operator =(std::wstring b) {

}

ST_AnimationDgmOnlyBuildType::operator const wchar_t*() const {

}
ST_AnimationDgmOnlyBuildType::operator std::wstring () const {

}
