#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(value _v) {
	v=_v;
}

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(std::wstring b) {

}

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(ST_AnimationChartOnlyBuildType &b) {
	v=b.v;
}

ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::operator =(value _v) {
	v=_v;
}

ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::operator =(ST_AnimationChartOnlyBuildType& b) {
	v=b.v;
}

ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::operator =(std::wstring b) {

}

ST_AnimationChartOnlyBuildType::operator const wchar_t*() const {

}
ST_AnimationChartOnlyBuildType::operator std::wstring () const {

}
