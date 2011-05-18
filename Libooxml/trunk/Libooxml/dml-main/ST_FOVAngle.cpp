#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

bool ST_FOVAngle::check(int chkval) {
	if (chkval >= 0 && chkval <= 10800000) return true;
	else return false;
}

ST_FOVAngle::ST_FOVAngle() {
	(ST_Angle)*this = 0;
}

ST_FOVAngle& ST_FOVAngle::operator =(int b) {
	(ST_Angle)*this = b;
}

ST_FOVAngle& ST_FOVAngle::operator =(ST_FOVAngle& b) {
	(ST_Angle)*this = b;
}

ST_FOVAngle& ST_FOVAngle::operator =(std::wstring b) {
	(ST_Angle)*this = b;
}