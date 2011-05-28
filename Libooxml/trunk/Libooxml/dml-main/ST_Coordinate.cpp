#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;
/*<xsd:minInclusive value="-27273042329600"/>
			<xsd:maxInclusive value="27273042316900"/>*/
ST_Coordinate::ST_Coordinate() {
	type = 0;
	coord = 0;
}
ST_Coordinate::ST_Coordinate(value _v) {
	v=_v;
}

ST_Coordinate::ST_Coordinate(std::wstring b) {

}

ST_Coordinate::ST_Coordinate(ST_Coordinate &b) {
	v=b.v;
}

ST_Coordinate& ST_Coordinate::operator =(value _v) {
	v=_v;
}

ST_Coordinate& ST_Coordinate::operator =(ST_Coordinate& b) {
	v=b.v;
}

ST_Coordinate& ST_Coordinate::operator =(std::wstring b) {

}

ST_Coordinate::operator const wchar_t*() const {

}
ST_Coordinate::operator std::wstring () const {

}
