#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationChartBuildType::ST_AnimationChartBuildType(value _v) {
	v=_v;
}

ST_AnimationChartBuildType::ST_AnimationChartBuildType(std::wstring b) {

}

ST_AnimationChartBuildType::ST_AnimationChartBuildType(ST_AnimationChartBuildType &b) {
	v=b.v;
}

ST_AnimationChartBuildType& ST_AnimationChartBuildType::operator =(value _v) {
	v=_v;
}

ST_AnimationChartBuildType& ST_AnimationChartBuildType::operator =(ST_AnimationChartBuildType& b) {
	v=b.v;
}

ST_AnimationChartBuildType& ST_AnimationChartBuildType::operator =(std::wstring b) {

}

ST_AnimationChartBuildType::operator const wchar_t*() const {

}
ST_AnimationChartBuildType::operator std::wstring () const {

}
