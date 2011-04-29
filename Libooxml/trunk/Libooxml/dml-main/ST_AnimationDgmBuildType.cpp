#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationDgmBuildType::ST_AnimationDgmBuildType(value _v) {
	v=_v;
}

ST_AnimationDgmBuildType::ST_AnimationDgmBuildType(std::wstring b) {

}

ST_AnimationDgmBuildType::ST_AnimationDgmBuildType(ST_AnimationDgmBuildType &b) {
	v=b.v;
}

ST_AnimationDgmBuildType& ST_AnimationDgmBuildType::operator =(value _v) {
	v=_v;
}

ST_AnimationDgmBuildType& ST_AnimationDgmBuildType::operator =(ST_AnimationDgmBuildType& b) {
	v=b.v;
}

ST_AnimationDgmBuildType& ST_AnimationDgmBuildType::operator =(std::wstring b) {

}

ST_AnimationDgmBuildType::operator const wchar_t*() const {

}
ST_AnimationDgmBuildType::operator std::wstring () const {

}
