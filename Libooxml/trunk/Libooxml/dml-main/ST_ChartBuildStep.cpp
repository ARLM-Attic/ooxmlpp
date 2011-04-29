#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_ChartBuildStep::ST_ChartBuildStep(value _v) {
	v=_v;
}

ST_ChartBuildStep::ST_ChartBuildStep(std::wstring b) {

}

ST_ChartBuildStep::ST_ChartBuildStep(ST_ChartBuildStep &b) {
	v=b.v;
}

ST_ChartBuildStep& ST_ChartBuildStep::operator =(value _v) {
	v=_v;
}

ST_ChartBuildStep& ST_ChartBuildStep::operator =(ST_ChartBuildStep& b) {
	v=b.v;
}

ST_ChartBuildStep& ST_ChartBuildStep::operator =(std::wstring b) {

}

ST_ChartBuildStep::operator const wchar_t*() const {

}
ST_ChartBuildStep::operator std::wstring () const {

}
