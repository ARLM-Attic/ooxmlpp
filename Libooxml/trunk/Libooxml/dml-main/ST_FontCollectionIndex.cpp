#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

ST_FontCollectionIndex::ST_FontCollectionIndex(value _v) {
	v=_v;
}

ST_FontCollectionIndex::ST_FontCollectionIndex(std::wstring b) {

}

ST_FontCollectionIndex::ST_FontCollectionIndex(ST_FontCollectionIndex &b) {
	v=b.v;
}

ST_FontCollectionIndex& ST_FontCollectionIndex::operator =(value _v) {
	v=_v;
}

ST_FontCollectionIndex& ST_FontCollectionIndex::operator =(ST_FontCollectionIndex& b) {
	v=b.v;
}

ST_FontCollectionIndex& ST_FontCollectionIndex::operator =(std::wstring b) {

}

ST_FontCollectionIndex::operator const wchar_t*() const {

}
ST_FontCollectionIndex::operator std::wstring () const {

}
