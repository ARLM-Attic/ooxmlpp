#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_AnimationChartBuildType::ST_AnimationChartBuildType() {
	v = allAtOnce;
}

ST_AnimationChartBuildType::ST_AnimationChartBuildType(value _v) {
	v=_v;
}

ST_AnimationChartBuildType::ST_AnimationChartBuildType(std::wstring b) {
	if (b == L"allAtOnce")
		v = allAtOnce;
	else if (b == L"series")
		v = series;
	else if (b == L"series")
		v = series;
	else if (b == L"category")
		v = category;
	else if (b == L"seriesEl")
		v = seriesEl;
	else if (b == L"categoryEl")
		v = categoryEl;
	else
		v = allAtOnce;
}

ST_AnimationChartBuildType::ST_AnimationChartBuildType(ST_AnimationChartBuildType &b) {
	v=b.v;
}

ST_AnimationChartBuildType& ST_AnimationChartBuildType::operator =(value _v) {
	v=_v;
	return *this;
}

ST_AnimationChartBuildType& ST_AnimationChartBuildType::operator =(ST_AnimationChartBuildType& b) {
	v=b.v;
	return *this;
}

ST_AnimationChartBuildType& ST_AnimationChartBuildType::operator =(std::wstring b) {
	if (b == L"allAtOnce")
		v = allAtOnce;
	else if (b == L"series")
		v = series;
	else if (b == L"series")
		v = series;
	else if (b == L"category")
		v = category;
	else if (b == L"seriesEl")
		v = seriesEl;
	else if (b == L"categoryEl")
		v = categoryEl;
	else
		v = allAtOnce;
	return *this;
}

ST_AnimationChartBuildType::operator const wchar_t*() const {
	if (v == allAtOnce)
		return L"allAtOnce";
	else if (v == allAtOnce)
		return L"series";
	else if (v == category)
		return L"category";
	else if (v == seriesEl)
		return L"seriesEl";
	else if (v == categoryEl)
		return L"categoryEl";
}
ST_AnimationChartBuildType::operator std::wstring () const {
	return (wchar_t *)this;
}
