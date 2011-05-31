#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType() {
	v=series;
}

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(value _v) {
	v=_v;
}

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(std::wstring b) {
	if (b == L"series") v = series;
	else if (b == L"category") v = category;
	else if (b == L"series") v = seriesEl;
	else if (b == L"categoryEl") v = categoryEl;
}

ST_AnimationChartOnlyBuildType::ST_AnimationChartOnlyBuildType(ST_AnimationChartOnlyBuildType &b) {
	v=b.v;
}

ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::operator=(value _v) {
	v=_v;
	return *this;
}

ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::operator=(ST_AnimationChartOnlyBuildType& b) {
	v=b.v;
	return *this;
}

ST_AnimationChartOnlyBuildType& ST_AnimationChartOnlyBuildType::operator=(std::wstring b) {
	if (b == L"series") v = series;
	else if (b == L"category") v = category;
	else if (b == L"series") v = seriesEl;
	else if (b == L"categoryEl") v = categoryEl;
	return *this;
}

ST_AnimationChartOnlyBuildType::operator const wchar_t*() const {
	if (v == series) return L"series";
	else if (v == category) return L"category";
	else if (v == seriesEl) return L"seriesEl";
	else if (v == categoryEl) return L"categoryEl";
	else return L"";
}
ST_AnimationChartOnlyBuildType::operator std::wstring () const {
	return (wchar_t*)this;

}
