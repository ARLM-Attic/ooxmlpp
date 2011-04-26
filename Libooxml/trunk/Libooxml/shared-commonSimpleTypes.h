#pragma once
#include <string>
#include "core.h"

namespace officeDocument {
	namespace sharedTypes {
		typedef std::string ST_Lang;
		class ST_HexColorRGB;
		class ST_Panose;
		class ST_CalendarType;
		class ST_Guid;
		typedef Bool ST_OnOff;
		typedef std::string ST_String;
		typedef ULong ST_UnsignedDecimalNumber;
		class ST_TwipsMeasure;
		class ST_VerticalAlignRun;
		typedef std::string ST_Xstring;
		class ST_XAlign;
		class ST_YAlign;
		class ST_ConformanceClass;
		class ST_UniversalMeasure;
		class ST_PositiveUniversalMeasure;
		class ST_Percentage;
		class ST_FixedPercentage;
		class ST_PositivePercentage;
		class ST_PositiveFixedPercentage;
	}
}

namespace officeDocument {
	namespace sharedTypes {
		class ST_HexColorRGB {
		private:
			wchar_t val[6];
			bool check(std::wstring input);
		public:
			ST_HexColorRGB& operator =(const ST_HexColorRGB& b);
			ST_HexColorRGB& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			ST_HexColorRGB();
			ST_HexColorRGB(const std::wstring b);
			ST_HexColorRGB(const ST_HexColorRGB &b);
		};

		class ST_Panose {
		private:
			wchar_t val[20];
			bool check(std::wstring input);
		public:
			ST_Panose& operator =(const ST_Panose& b);
			ST_Panose& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			ST_Panose();
			ST_Panose(const std::wstring b);
			ST_Panose(ST_Panose &b);
		};

		class ST_CalendarType {
		public:
			enum value {
				gregorian,
				gregorianUs,
				gregorianMeFrench,
				gregorianArabic,
				hijri,
				hebrew,
				taiwan,
				japan,
				thai,
				korea,
				saka,
				gregorianXlitEnglish,
				gregorianXlitFrench,
				none
			};
			value v;
		public:
			ST_CalendarType& operator =(const ST_CalendarType& b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			ST_CalendarType();
			ST_CalendarType(const std::wstring b);
			ST_CalendarType& operator =(const std::wstring b);
			ST_CalendarType(ST_CalendarType &b);
			ST_CalendarType(value newv);
			ST_CalendarType& operator =(value b);
			operator value() const;
		};

		class ST_Guid {
		private:
			std::wstring guid;
			bool checkpattern(std::wstring input);
		public:
			ST_Guid();
			ST_Guid(ST_Guid &b);
			ST_Guid(std::wstring b);
			ST_Guid& operator =(const ST_Guid& b);
			ST_Guid& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			~ST_Guid();
		};

		class ST_VerticalAlignRun {
		public:
			enum value {
				baseline,
				superscript,
				subscript
			};
			value v;
		public:
			ST_VerticalAlignRun& operator =(const ST_VerticalAlignRun& b);
			ST_VerticalAlignRun& operator =(std::wstring b);
			ST_VerticalAlignRun& operator=(value b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			operator value() const;
			ST_VerticalAlignRun();
			ST_VerticalAlignRun(ST_VerticalAlignRun &b);
			ST_VerticalAlignRun(std::wstring b);
			ST_VerticalAlignRun(value b);
		};

		class ST_XAlign {
		public:
			enum value {
				left,
				center,
				right,
				inside,
				outside
			};
			value v;
		public:
			ST_XAlign& operator =(const ST_XAlign& b);
			ST_XAlign& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			ST_XAlign();
			ST_XAlign(ST_XAlign &b);
			ST_XAlign(std::wstring b);
			ST_XAlign(value b);
			operator value() const;
			ST_XAlign& operator=(value b);
		};

		class ST_YAlign {
		public:
			enum value {
				inline_,
				top,
				center,
				bottom,
				inside,
				outside
			};
			value v;
		public:
			ST_YAlign& operator =(const ST_YAlign& b);
			ST_YAlign& operator =(wchar_t *b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			ST_YAlign();
			ST_YAlign(ST_YAlign &b);
			ST_YAlign(std::wstring b);
			ST_YAlign(value b);
			operator value() const;
			ST_YAlign& operator=(value b);
		};

		class ST_ConformanceClass {
		public:
			enum value {
				strict,
				transitional
			};
			value v;
		public:
			ST_ConformanceClass& operator =(const ST_ConformanceClass& b);
			ST_ConformanceClass& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			ST_ConformanceClass();
			ST_ConformanceClass(ST_ConformanceClass &b);
			ST_ConformanceClass(std::wstring b);
			ST_ConformanceClass(value b);
			operator value() const;
			ST_ConformanceClass& operator=(value b);
		};

		class ST_UniversalMeasure {
		private:
			std::wstring val;
			bool checkpattern(std::wstring input);
		public:
			ST_UniversalMeasure();
			ST_UniversalMeasure(ST_UniversalMeasure &b);
			ST_UniversalMeasure(std::wstring b);
			ST_UniversalMeasure& operator =(const ST_UniversalMeasure& b);
			ST_UniversalMeasure& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			~ST_UniversalMeasure();
		};
		class ST_PositiveUniversalMeasure {
		private:
			ST_UniversalMeasure val;
			bool checkpattern(std::wstring input);
		public:
			ST_PositiveUniversalMeasure();
			ST_PositiveUniversalMeasure(ST_PositiveUniversalMeasure &b);
			ST_PositiveUniversalMeasure(ST_UniversalMeasure &b);
			ST_PositiveUniversalMeasure(std::wstring b);
			ST_PositiveUniversalMeasure& operator =(const ST_PositiveUniversalMeasure& b);
			ST_PositiveUniversalMeasure& operator =(const ST_UniversalMeasure& b);
			ST_PositiveUniversalMeasure& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			operator ST_UniversalMeasure() const;
			~ST_PositiveUniversalMeasure();
		};

		class ST_TwipsMeasure {
		private:
			int type;
			ST_PositiveUniversalMeasure val1;
			ST_UnsignedDecimalNumber val2;
			bool checkpattern(std::wstring input);
		public:
			ST_TwipsMeasure();
			ST_TwipsMeasure(ST_TwipsMeasure &b);
			ST_TwipsMeasure(ST_PositiveUniversalMeasure &b);
			ST_TwipsMeasure(ST_UnsignedDecimalNumber &b);
			ST_TwipsMeasure(std::wstring b);
			ST_TwipsMeasure& operator =(const ST_TwipsMeasure& b);
			ST_TwipsMeasure& operator =(const ST_PositiveUniversalMeasure& b);
			ST_TwipsMeasure& operator =(const ST_UnsignedDecimalNumber& b);
			ST_TwipsMeasure& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			operator ST_PositiveUniversalMeasure();
			operator ST_UnsignedDecimalNumber();
			~ST_TwipsMeasure();
		};

		class ST_Percentage {
		private:
			std::wstring val;
			bool checkpattern(std::wstring input);
		public:
			ST_Percentage();
			ST_Percentage(ST_Percentage &b);
			ST_Percentage(std::wstring b);
			ST_Percentage& operator =(const ST_Percentage& b);
			ST_Percentage& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			~ST_Percentage();
		};

		class ST_FixedPercentage {
		private:
			ST_Percentage val;
			bool checkpattern(std::wstring input);
		public:
			ST_FixedPercentage();
			ST_FixedPercentage(ST_FixedPercentage &b);
			ST_FixedPercentage(ST_Percentage &b);
			ST_FixedPercentage(std::wstring b);
			ST_FixedPercentage& operator =(const ST_FixedPercentage& b);
			ST_FixedPercentage& operator =(const ST_Percentage& b);
			ST_FixedPercentage& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			operator ST_Percentage() const;
			~ST_FixedPercentage();
		};

		class ST_PositivePercentage {
			private:
			ST_Percentage val;
			bool checkpattern(std::wstring input);
		public:
			ST_PositivePercentage();
			ST_PositivePercentage(ST_PositivePercentage &b);
			ST_PositivePercentage(ST_Percentage &b);
			ST_PositivePercentage(std::wstring b);
			ST_PositivePercentage& operator =(const ST_PositivePercentage& b);
			ST_PositivePercentage& operator =(const ST_Percentage& b);
			ST_PositivePercentage& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			operator ST_Percentage() const;
			~ST_PositivePercentage();
		};

		class ST_PositiveFixedPercentage {
		private:
			ST_Percentage val;
			bool checkpattern(std::wstring input);
		public:
			ST_PositiveFixedPercentage();
			ST_PositiveFixedPercentage(ST_PositiveFixedPercentage &b);
			ST_PositiveFixedPercentage(ST_Percentage &b);
			ST_PositiveFixedPercentage(std::wstring b);
			ST_PositiveFixedPercentage& operator =(const ST_PositiveFixedPercentage& b);
			ST_PositiveFixedPercentage& operator =(const ST_Percentage& b);
			ST_PositiveFixedPercentage& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
			operator ST_Percentage() const;
			~ST_PositiveFixedPercentage();
		};
	}
}