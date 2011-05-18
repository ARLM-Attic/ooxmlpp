#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

bool ST_PositiveCoordinate::check(long chkval) {
	if (chkval >= 0 && chkval <= 27273042316900) return true;
	else return false;
}

ST_PositiveCoordinate::ST_PositiveCoordinate() {
}
ST_PositiveCoordinate::ST_PositiveCoordinate(long b) : Long(b) {
}
ST_PositiveCoordinate::ST_PositiveCoordinate(std::wstring b) : Long(b) {
}
ST_PositiveCoordinate& ST_PositiveCoordinate::operator =(const ST_PositiveCoordinate& b) {
	((Long)*this) = b;
	return *this;
}
ST_PositiveCoordinate& ST_PositiveCoordinate::operator =(long b) {
	((Long)*this) = b;
	return *this;
}
ST_PositiveCoordinate& ST_PositiveCoordinate::operator =(std::wstring b) {
	((Long)*this) = b;
	return *this;
}