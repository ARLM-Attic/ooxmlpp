#include "core.h"
#include "shared-commonSimpleTypes.h"

using namespace officeDocument::sharedTypes;

ST_CalendarType& ST_CalendarType::operator =(value b) {
	v = b;
	return *this;
}

ST_CalendarType::operator value() const {
	return v;
}

ST_CalendarType::ST_CalendarType(ST_CalendarType &b) {
	v = b;
}

ST_CalendarType::ST_CalendarType(value newv) {
	v = newv;
}

ST_CalendarType& ST_CalendarType::operator =(const ST_CalendarType& b) {
	v = b;
	return *this;
}

ST_CalendarType& ST_CalendarType::operator =(std::wstring b) {
	if (b == L"gregorian") {
		v = gregorian;
	}
	else if (b == L"gregorianUs") {
		v = gregorianUs;
	}
	else if (b == L"gregorianMeFrench") {
		v = gregorianMeFrench;
	}
	else if (b == L"gregorianArabic") {
		v = gregorianArabic;
	}
	else if (b == L"hijri") {
		v = hijri;
	}
	else if (b == L"hebrew") {
		v = hebrew;
	}
	else if (b == L"taiwan") {
		v = taiwan;
	}
	else if (b == L"japan") {
		v = japan;
	}
	else if (b == L"thai") {
		v = thai;
	}
	else if (b == L"korea") {
		v = korea;
	}
	else if (b == L"saka") {
		v = saka;
	}
	else if (b == L"gregorianXlitEnglish") {
		v = gregorianXlitEnglish;
	}
	else if (b == L"gregorianXlitFrench") {
		v = gregorianXlitFrench;
	}
	else {
		v = none;
	}
	return *this;
}

ST_CalendarType::operator const wchar_t*() const {
	if (v == gregorian) return L"gregorian";
	else if (v == gregorianUs) return L"gregorianUs";
	else if (v == gregorianMeFrench) return L"gregorianMeFrench";
	else if (v == gregorianArabic) return L"gregorianArabic";
	else if (v == hijri) return L"hijri";
	else if (v == hebrew) return L"hebrew";
	else if (v == taiwan) return L"taiwan";
	else if (v == japan) return L"japan";
	else if (v == thai) return L"thai";
	else if (v == korea) return L"korea";
	else if (v == saka) return L"saka";
	else if (v == gregorianXlitEnglish) return L"gregorianXlitEnglish";
	else if (v == gregorianXlitFrench) return L"gregorianXlitFrench";
	else if (v == none) return L"none";
	else return L"";
}

ST_CalendarType::operator std::wstring() const {
	if (v == gregorian) return L"gregorian";
	else if (v == gregorianUs) return L"gregorianUs";
	else if (v == gregorianMeFrench) return L"gregorianMeFrench";
	else if (v == gregorianArabic) return L"gregorianArabic";
	else if (v == hijri) return L"hijri";
	else if (v == hebrew) return L"hebrew";
	else if (v == taiwan) return L"taiwan";
	else if (v == japan) return L"japan";
	else if (v == thai) return L"thai";
	else if (v == korea) return L"korea";
	else if (v == saka) return L"saka";
	else if (v == gregorianXlitEnglish) return L"gregorianXlitEnglish";
	else if (v == gregorianXlitFrench) return L"gregorianXlitFrench";
	else if (v == none) return L"none";
	else return L"";
}

ST_CalendarType::ST_CalendarType() {
	v = gregorian;
}
ST_CalendarType::ST_CalendarType(const std::wstring b) {
	if (b == L"gregorian") {
		v = gregorian;
	}
	else if (b == L"gregorianUs") {
		v = gregorianUs;
	}
	else if (b == L"gregorianMeFrench") {
		v = gregorianMeFrench;
	}
	else if (b == L"gregorianArabic") {
		v = gregorianArabic;
	}
	else if (b == L"hijri") {
		v = hijri;
	}
	else if (b == L"hebrew") {
		v = hebrew;
	}
	else if (b == L"taiwan") {
		v = taiwan;
	}
	else if (b == L"japan") {
		v = japan;
	}
	else if (b == L"thai") {
		v = thai;
	}
	else if (b == L"korea") {
		v = korea;
	}
	else if (b == L"saka") {
		v = saka;
	}
	else if (b == L"gregorianXlitEnglish") {
		v = gregorianXlitEnglish;
	}
	else if (b == L"gregorianXlitFrench") {
		v = gregorianXlitFrench;
	}
	else {
		v = none;
	}
}