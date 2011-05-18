#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_DgmBuildStep::ST_DgmBuildStep() {
	v=sp;
}

ST_DgmBuildStep::ST_DgmBuildStep(value _v) {
	v=_v;
}

ST_DgmBuildStep::ST_DgmBuildStep(std::wstring b) {

}

ST_DgmBuildStep::ST_DgmBuildStep(ST_DgmBuildStep &b) {
	v=b.v;
}

ST_DgmBuildStep& ST_DgmBuildStep::operator =(value _v) {
	v=_v;
}

ST_DgmBuildStep& ST_DgmBuildStep::operator =(ST_DgmBuildStep& b) {
	v=b.v;
}

ST_DgmBuildStep& ST_DgmBuildStep::operator =(std::wstring b) {

}

ST_DgmBuildStep::operator const wchar_t*() const {

}
ST_DgmBuildStep::operator std::wstring () const {

}
