#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_TileFlipMode::ST_TileFlipMode(value _v) {
	v=_v;
}

ST_TileFlipMode::ST_TileFlipMode(std::wstring b) {

}

ST_TileFlipMode::ST_TileFlipMode(ST_TileFlipMode &b) {
	v=b.v;
}

ST_TileFlipMode& ST_TileFlipMode::operator =(value _v) {
	v=_v;
}

ST_TileFlipMode& ST_TileFlipMode::operator =(ST_TileFlipMode& b) {
	v=b.v;
}

ST_TileFlipMode& ST_TileFlipMode::operator =(std::wstring b) {

}

ST_TileFlipMode::operator const wchar_t*() const {

}
ST_TileFlipMode::operator std::wstring () const {

}
