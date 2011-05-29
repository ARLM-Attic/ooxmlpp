#pragma once
#include <string>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <vector>
#include "shared-relationshipReference.h"
#include "shared-commonSimpleTypes.h"
#include "core.h"
#undef small

namespace drawingml
{
	namespace main
	{
		class CT_AudioFile;
		class CT_VideoFile;
		class CT_QuickTimeFile;
		class CT_AudioCDTime;
		class CT_AudioCD;
		typedef UInt ST_StyleMatrixColumnIndex;
		class ST_FontCollectionIndex;
		class ST_ColorSchemeIndex;
		class CT_ColorScheme;
		class CT_CustomColor;
		class CT_SupplementalFont;
		class CT_CustomColorList;
		class CT_FontCollection;
		class CT_EffectStyleItem;
		class CT_FontScheme;
		class CT_FillStyleList;
		class CT_LineStyleList;
		class CT_EffectStyleList;
		class CT_BackgroundFillStyleList;
		class CT_StyleMatrix;
		class CT_BaseStyles;
		class CT_OfficeArtExtension;
		class ST_Coordinate;
		class ST_CoordinateUnqualified;
		class ST_Coordinate32;
		typedef Int ST_Coordinate32Unqualified;
		class ST_PositiveCoordinate;
		class ST_PositiveCoordinate32;
		typedef Int ST_Angle;
		class CT_Angle;
		class ST_FixedAngle;
		class ST_PositiveFixedAngle;
		class CT_PositiveFixedAngle;
		typedef officeDocument::sharedTypes::ST_Percentage ST_Percentage;
		class CT_Percentage;
		typedef officeDocument::sharedTypes::ST_PositivePercentage ST_PositivePercentage;
		class CT_PositivePercentage;
		typedef officeDocument::sharedTypes::ST_FixedPercentage  ST_FixedPercentage;
		class CT_FixedPercentage;
		typedef officeDocument::sharedTypes::ST_PositiveFixedPercentage ST_PositiveFixedPercentage;
		class CT_PositiveFixedPercentage;
		class CT_Ratio;
		class CT_Point2D;
		class CT_PositiveSize2D;
		class CT_ComplementTransform;
		class CT_InverseTransform;
		class CT_GrayscaleTransform;
		class CT_GammaTransform;
		class CT_InverseGammaTransform;
		class CT_ScRgbColor;
		class CT_SRgbColor;
		class CT_HslColor;
		class ST_SystemColorVal;
		class CT_SystemColor;
		class ST_SchemeColorVal;
		class CT_SchemeColor;
		class ST_PresetColorVal;
		class CT_PresetColor;
		class CT_OfficeArtExtensionList;
		class CT_Scale2D;
		class CT_Transform2D;
		class CT_GroupTransform2D;
		class CT_Point3D;
		class CT_Vector3D;
		class CT_SphereCoords;
		class CT_RelativeRect;
		class ST_RectAlignment;
		class CT_Color;
		class CT_ColorMRU;
		class ST_BlackWhiteMode;
		class CT_EmbeddedWAVAudioFile;
		class CT_Hyperlink;
		typedef UInt ST_DrawingElementId;
		class CT_ConnectorLocking;
		class CT_ShapeLocking;
		class CT_PictureLocking;
		class CT_GroupLocking;
		class CT_GraphicalObjectFrameLocking;
		class CT_NonVisualDrawingProps;
		class CT_NonVisualDrawingShapeProps;
		class CT_NonVisualConnectorProperties;
		class CT_NonVisualPictureProperties;
		class CT_NonVisualGroupDrawingShapeProps;
		class CT_NonVisualGraphicFrameProperties;
		class CT_GraphicalObjectData;
		class CT_GraphicalObject;
		class ST_ChartBuildStep;
		class ST_DgmBuildStep;
		class CT_AnimationDgmElement;
		class CT_AnimationChartElement;
		class CT_AnimationElementChoice;
		class ST_AnimationBuildType;
		class ST_AnimationDgmOnlyBuildType;
		class ST_AnimationDgmBuildType;
		class CT_AnimationDgmBuildProperties;
		class ST_AnimationChartOnlyBuildType;
		class ST_AnimationChartBuildType;
		class CT_AnimationChartBuildProperties;
		class CT_AnimationGraphicalObjectBuildProperties;
		class CT_BackgroundFormatting;
		class CT_WholeE2oFormatting;
		class CT_GvmlUseShapeRectangle;
		class CT_GvmlTextShape;
		class CT_GvmlShapeNonVisual;
		class CT_GvmlShape;
		class CT_GvmlConnectorNonVisual;
		class CT_GvmlConnector;
		class CT_GvmlPictureNonVisual;
		class CT_GvmlPicture;
		class CT_GvmlGraphicFrameNonVisual;
		class CT_GvmlGraphicalObjectFrame;
		class CT_GvmlGroupShapeNonVisual;
		class CT_GvmlGroupShape;
		class ST_PresetCameraType;
		class ST_FOVAngle;
		class CT_Camera;
		class ST_LightRigDirection;
		class ST_LightRigType;
		class CT_LightRig;
		class CT_Scene3D;
		class CT_Backdrop;
		class ST_BevelPresetType;
		class CT_Bevel;
		class ST_PresetMaterialType;
		class CT_Shape3D;
		class CT_FlatText;
		class EG_Text3D;
		class CT_AlphaBiLevelEffect;
		class CT_AlphaCeilingEffect;
		class CT_AlphaFloorEffect;
		class CT_AlphaInverseEffect;
		class CT_AlphaModulateFixedEffect;
		class CT_AlphaOutsetEffect;
		class CT_AlphaReplaceEffect;
		class CT_BiLevelEffect;
		class CT_BlurEffect;
		class CT_ColorChangeEffect;
		class CT_ColorReplaceEffect;
		class CT_DuotoneEffect;
		class CT_GlowEffect;
		class CT_GrayscaleEffect;
		class CT_HSLEffect;
		class CT_InnerShadowEffect;
		class CT_LuminanceEffect;
		class CT_OuterShadowEffect;
		class ST_PresetShadowVal;
		class CT_PresetShadowEffect;
		class CT_ReflectionEffect;
		class CT_RelativeOffsetEffect;
		class CT_SoftEdgesEffect;
		class CT_TintEffect;
		class CT_TransformEffect;
		class CT_NoFillProperties;
		class CT_SolidColorFillProperties;
		class CT_LinearShadeProperties;
		class ST_PathShadeType;
		class CT_PathShadeProperties;
		class ST_TileFlipMode;
		class CT_GradientStop;
		class CT_GradientStopList;
		class CT_GradientFillProperties;
		class CT_TileInfoProperties;
		class CT_StretchInfoProperties;
		class ST_BlipCompression;
		class CT_Blip;
		class CT_BlipFillProperties;
		class ST_PresetPatternVal;
		class CT_PatternFillProperties;
		class CT_GroupFillProperties;
		class CT_FillProperties;
		class CT_FillEffect;
		class ST_BlendMode;
		class CT_FillOverlayEffect;
		class CT_EffectReference;
		class ST_EffectContainerType;
		class CT_EffectContainer;
		class CT_AlphaModulateEffect;
		class CT_BlendEffect;
		class CT_EffectList;
		class CT_EffectProperties;
		class ST_ShapeType;
		class ST_TextShapeType;
		typedef std::wstring ST_GeomGuideName;
		typedef std::wstring ST_GeomGuideFormula;
		class CT_GeomGuide;
		class CT_GeomGuideList;
		class ST_AdjCoordinate;
		class ST_AdjAngle;
		class CT_AdjPoint2D;
		class CT_GeomRect;
		class CT_XYAdjustHandle;
		class CT_PolarAdjustHandle;
		class CT_ConnectionSite;
		class CT_AdjustHandleList;
		class CT_ConnectionSiteList;
		class CT_Connection;
		class CT_Path2DMoveTo;
		class CT_Path2DLineTo;
		class CT_Path2DArcTo;
		class CT_Path2DQuadBezierTo;
		class CT_Path2DCubicBezierTo;
		class CT_Path2DClose;
		class ST_PathFillMode;
		class CT_Path2D;
		class CT_Path2DList;
		class CT_PresetGeometry2D;
		class CT_PresetTextShape;
		class CT_CustomGeometry2D;
		class ST_LineEndType;
		class ST_LineEndWidth;
		class ST_LineEndLength;
		class CT_LineEndProperties;
		class CT_LineJoinBevel;
		class CT_LineJoinRound;
		class CT_LineJoinMiterProperties;
		class ST_PresetLineDashVal;
		class CT_PresetLineDashProperties;
		class CT_DashStop;
		class CT_DashStopList;
		class ST_LineCap;
		class ST_LineWidth;
		class ST_PenAlignment;
		class ST_CompoundLine;
		class CT_LineProperties;
		typedef std::wstring ST_ShapeID;
		class CT_ShapeProperties;
		class CT_GroupShapeProperties;
		class CT_StyleMatrixReference;
		class CT_FontReference;
		class CT_ShapeStyle;
		class CT_DefaultShapeDefinition;
		class CT_ObjectStyleDefaults;
		class CT_EmptyElement;
		class CT_ColorMapping;
		class CT_ColorMappingOverride;
		class CT_ColorSchemeAndMapping;
		class CT_ColorSchemeList;
		class CT_OfficeStyleSheet;
		class CT_BaseStylesOverride;
		class CT_ClipboardStyleSheet;
		class CT_TableCellProperties;
		class CT_Headers;
		class CT_TableCol;
		class CT_TableGrid;
		class CT_TableCell;
		class CT_TableRow;
		class CT_TableProperties;
		class CT_Table;
		class CT_Cell3D;
		class CT_ThemeableLineStyle;
		class ST_OnOffStyleType;
		class CT_TableStyleTextStyle;
		class CT_TableCellBorderStyle;
		class CT_TableBackgroundStyle;
		class CT_TableStyleCellStyle;
		class CT_TablePartStyle;
		class CT_TableStyle;
		class CT_TableStyleList;
		class CT_TextParagraph;
		class ST_TextAnchoringType;
		class ST_TextVertOverflowType;
		class ST_TextHorzOverflowType;
		class ST_TextVerticalType;
		class ST_TextWrappingType;
		class ST_TextColumnCount;
		class CT_TextListStyle;
		class ST_TextFontScalePercentOrPercentString;
		class CT_TextNormalAutofit;
		class CT_TextShapeAutofit;
		class CT_TextNoAutofit;
		class CT_TextBodyProperties;
		class CT_TextBody;
		class ST_TextBulletStartAtNum;
		class ST_TextAutonumberScheme;
		class CT_TextBulletColorFollowText;
		class ST_TextBulletSizePercent;
		class CT_TextBulletSizeFollowText;
		class CT_TextBulletSizePercent;
		class CT_TextBulletSizePoint;
		class CT_TextBulletTypefaceFollowText;
		class CT_TextAutonumberBullet;
		class CT_TextCharBullet;
		class CT_TextBlipBullet;
		class CT_TextNoBullet;
		class ST_TextPoint;
		class ST_TextPointUnqualified;
		class ST_TextNonNegativePoint;
		class ST_TextFontSize;
		typedef std::wstring ST_TextTypeface;
		class CT_TextFont;
		class ST_TextUnderlineType;
		class CT_TextUnderlineLineFollowText;
		class CT_TextUnderlineFillFollowText;
		class CT_TextUnderlineFillGroupWrapper;
		class ST_TextStrikeType;
		class ST_TextCapsType;
		class CT_TextCharacterProperties;
		class CT_Boolean;
		class ST_TextSpacingPoint;
		class ST_TextSpacingPercentOrPercentString;
		class CT_TextSpacingPercent;
		class CT_TextSpacingPoint;
		class ST_TextMargin;
		class ST_TextIndent;
		class ST_TextTabAlignType;
		class CT_TextTabStop;
		class CT_TextTabStopList;
		class CT_TextLineBreak;
		class CT_TextSpacing;
		class ST_TextAlignType;
		class ST_TextFontAlignType;
		class ST_TextIndentLevelType;
		class CT_TextParagraphProperties;
		class CT_TextField;
		class CT_RegularTextRun;
	}
}

namespace drawingml {
	namespace main {
		class CT_AudioFile {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			officeDocument::relationships::ST_RelationshipId link;
			std::wstring contentType;
		public:
		//end
			CT_AudioFile(officeDocument::relationships::ST_RelationshipId rLink);
			CT_AudioFile(CT_AudioFile &b);
			CT_AudioFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_AudioFile();
			CT_AudioFile& operator=(CT_AudioFile &b);
			std::wstring Xml();
		};

		class CT_VideoFile {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			officeDocument::relationships::ST_RelationshipId link;
			std::wstring contentType;
		public:
		//end
			CT_VideoFile(officeDocument::relationships::ST_RelationshipId &rLink);
			CT_VideoFile(CT_VideoFile &b);
			CT_VideoFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_VideoFile();
			CT_VideoFile& operator=(CT_VideoFile &b);
			std::wstring Xml();
		};

		class CT_QuickTimeFile {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			officeDocument::relationships::ST_RelationshipId link;
		public:
		//end
			CT_QuickTimeFile(officeDocument::relationships::ST_RelationshipId &rLink);
			CT_QuickTimeFile(CT_QuickTimeFile &b);
			CT_QuickTimeFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_QuickTimeFile();
			CT_QuickTimeFile& operator=(CT_QuickTimeFile &b);
			std::wstring Xml();
		};

		class CT_AudioCDTime {
		public:
		//elements

		//attributes
			UByte track;
			UInt time;
		public:
		//end
			CT_AudioCDTime(UByte _track, UInt _time = 0);
			CT_AudioCDTime(CT_AudioCDTime &b);
			CT_AudioCDTime(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_AudioCDTime();
			CT_AudioCDTime& operator=(CT_AudioCDTime &b);
			std::wstring Xml();
		};

		class CT_AudioCD {
		public:
		//elements
			std::shared_ptr<CT_AudioCDTime> st;
			std::shared_ptr<CT_AudioCDTime> end;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_AudioCD(std::shared_ptr<CT_AudioCDTime> &_st,std::shared_ptr<CT_AudioCDTime> &_end);
			CT_AudioCD(CT_AudioCD &b);
			CT_AudioCD(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_AudioCD();
			CT_AudioCD& operator=(CT_AudioCD &b);
			std::wstring Xml();
		};

		class ST_FontCollectionIndex {
		public:
		//end
			enum value {
				major,
				minor,
				none
			};
			value v;
		public:
		//end
			ST_FontCollectionIndex(value _v);
			ST_FontCollectionIndex(std::wstring b);
			ST_FontCollectionIndex(ST_FontCollectionIndex &b);
			ST_FontCollectionIndex& operator =(ST_FontCollectionIndex& b);
			ST_FontCollectionIndex& operator =(value b);
			ST_FontCollectionIndex& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_ColorSchemeIndex {
		public:
		//end
			enum value {
				dk1,
				lt1,
				dk2,
				lt2,
				accent1,
				accent2,
				accent3,
				accent4,
				accent5,
				hlink,
				folHlink
			};
			value v;
		public:
		//end
			ST_ColorSchemeIndex();
			ST_ColorSchemeIndex(value _v);
			ST_ColorSchemeIndex(std::wstring b);
			ST_ColorSchemeIndex(ST_ColorSchemeIndex &b);
			ST_ColorSchemeIndex& operator =(ST_ColorSchemeIndex& b);
			ST_ColorSchemeIndex& operator =(value b);
			ST_ColorSchemeIndex& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_ColorScheme {
		public:
		//elements
			std::shared_ptr<CT_Color> dk1;
			std::shared_ptr<CT_Color> lt1;
			std::shared_ptr<CT_Color> dk2;
			std::shared_ptr<CT_Color> lt2;
			std::shared_ptr<CT_Color> accent1;
			std::shared_ptr<CT_Color> accent2;
			std::shared_ptr<CT_Color> accent3;
			std::shared_ptr<CT_Color> accent4;
			std::shared_ptr<CT_Color> accent5;
			std::shared_ptr<CT_Color> hlink;
			std::shared_ptr<CT_Color> folHlink;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			std::wstring name;
		public:
		//end
			CT_ColorScheme(std::wstring _name, std::shared_ptr<CT_Color> _dk1,std::shared_ptr<CT_Color> _lt1,std::shared_ptr<CT_Color> _dk2,std::shared_ptr<CT_Color> _lt2,std::shared_ptr<CT_Color> _accent1,std::shared_ptr<CT_Color> _accent2,std::shared_ptr<CT_Color> _accent3,std::shared_ptr<CT_Color> _accent4,std::shared_ptr<CT_Color> _accent5,std::shared_ptr<CT_Color> _hlink,std::shared_ptr<CT_Color> _folHlink);
			CT_ColorScheme(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorScheme(CT_ColorScheme &b);
			CT_ColorScheme& operator=(CT_ColorScheme& b);
			~CT_ColorScheme();
			std::wstring Xml();
		};

		class EG_ColorChoice {
		private:
			std::shared_ptr<CT_ScRgbColor> _scrgbColor;
			std::shared_ptr<CT_SRgbColor> _srgbColor;
			std::shared_ptr<CT_HslColor> _hslColor;
			std::shared_ptr<CT_SystemColor> _sysColor;
			std::shared_ptr<CT_SchemeColor> _schemeColor;
			std::shared_ptr<CT_PresetColor> _prstColor;
		public:
			EG_ColorChoice();
			EG_ColorChoice& operator=(std::shared_ptr<CT_ScRgbColor> &__scrgbColor);
			EG_ColorChoice& operator=(std::shared_ptr<CT_SRgbColor> &__srgbColor);
			EG_ColorChoice& operator=(std::shared_ptr<CT_HslColor> &__hslColor);
			EG_ColorChoice& operator=(std::shared_ptr<CT_SystemColor> &__sysColor);
			EG_ColorChoice& operator=(std::shared_ptr<CT_SchemeColor> &__schemeColor);
			EG_ColorChoice& operator=(std::shared_ptr<CT_PresetColor> &__prstColor);

			std::shared_ptr<CT_ScRgbColor> scrgbColor();
			std::shared_ptr<CT_SRgbColor> srgbColor();
			std::shared_ptr<CT_HslColor> hslColor();
			std::shared_ptr<CT_SystemColor> sysColor();
			std::shared_ptr<CT_SchemeColor> schemeColor();
			std::shared_ptr<CT_PresetColor> prstColor();
		};

		class CT_CustomColor {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes
			std::wstring name;
		public:
		//end
			CT_CustomColor(std::shared_ptr<EG_ColorChoice> &_colorChoice,std::wstring _name = L"");
			CT_CustomColor(CT_CustomColor &b);
			CT_CustomColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_CustomColor& operator=(CT_CustomColor &b);
			~CT_CustomColor();
			std::wstring Xml();
		};

		class CT_SupplementalFont {
		public:
		//elements

		//attributes
			std::wstring script;
			ST_TextTypeface typeface;
		public:
		//end
			CT_SupplementalFont(std::wstring _script, ST_TextTypeface _typeface);
			CT_SupplementalFont(CT_SupplementalFont &b);
			CT_SupplementalFont(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SupplementalFont& operator=(CT_SupplementalFont &b);
			~CT_SupplementalFont();
			std::wstring Xml();
		};

		class CT_CustomColorList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_CustomColor>> custClr;
		//attributes

		public:
		//end
			CT_CustomColorList();
			CT_CustomColorList(CT_CustomColorList &b);
			CT_CustomColorList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CustomColorList();
			CT_CustomColorList& operator=(CT_CustomColorList &b);
			std::wstring Xml();
		};

		class CT_FontCollection {
		public:
		//elements
			std::shared_ptr<CT_TextFont> latin;
			std::shared_ptr<CT_TextFont> ea;
			std::shared_ptr<CT_TextFont> cs;
			std::vector<std::shared_ptr<CT_SupplementalFont>> font;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_FontCollection(std::shared_ptr<CT_TextFont> _latin,std::shared_ptr<CT_TextFont> _ea,std::shared_ptr<CT_TextFont> _cs);
			CT_FontCollection(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FontCollection(CT_FontCollection &b);
			~CT_FontCollection();
			CT_FontCollection& operator=(CT_FontCollection &b);
			std::wstring Xml();
		};

		class EG_EffectProperties {
		private:
			std::shared_ptr<CT_EffectList> _effectLst;
			std::shared_ptr<CT_EffectContainer> _effectDag;
		public:
			EG_EffectProperties& operator=(std::shared_ptr<CT_EffectList> &__effectLst);
			EG_EffectProperties& operator=(std::shared_ptr<CT_EffectContainer> &__effectDag);
			std::shared_ptr<CT_EffectList> effectLst();
			std::shared_ptr<CT_EffectContainer> effectDag();
		};

		class CT_EffectStyleItem {
		public:
		//elements
			std::shared_ptr<EG_EffectProperties> effectProperties;

			std::shared_ptr<CT_Scene3D> scene3d;
			std::shared_ptr<CT_Shape3D> sp3d;
		//attributes
			
		public:
		//end
			CT_EffectStyleItem(std::shared_ptr<EG_EffectProperties> &_effectProperties);
			CT_EffectStyleItem(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EffectStyleItem(CT_EffectStyleItem &b);
			~CT_EffectStyleItem();
			CT_EffectStyleItem& operator=(CT_EffectStyleItem &b);
			std::wstring Xml();
		};

		class CT_FontScheme {
		public:
		//elements
			std::shared_ptr<CT_FontCollection> majorFont;
			std::shared_ptr<CT_FontCollection> minorFont;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			std::wstring name;
		public:
		//end
			CT_FontScheme(std::shared_ptr<CT_FontCollection> _majorFont,std::shared_ptr<CT_FontCollection> _minorFont,std::wstring _name);
			CT_FontScheme(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FontScheme(CT_FontScheme &b);
			~CT_FontScheme();
			CT_FontScheme& operator=(CT_FontScheme &b);
			std::wstring Xml();
		};

		class EG_FillProperties {
		private:
			std::shared_ptr<CT_NoFillProperties> _noFill;
			std::shared_ptr<CT_SolidColorFillProperties> _solidFill;
			std::shared_ptr<CT_GradientFillProperties> _gradFill;
			std::shared_ptr<CT_BlipFillProperties> _blipFill;
			std::shared_ptr<CT_PatternFillProperties> _pattFill;
			std::shared_ptr<CT_GroupFillProperties> _grpFill;
		public:
			EG_FillProperties& operator=(std::shared_ptr<CT_NoFillProperties> &__noFill);
			EG_FillProperties& operator=(std::shared_ptr<CT_SolidColorFillProperties> &__solidFill);
			EG_FillProperties& operator=(std::shared_ptr<CT_GradientFillProperties> &__gradFill);
			EG_FillProperties& operator=(std::shared_ptr<CT_BlipFillProperties> &__blipFill);
			EG_FillProperties& operator=(std::shared_ptr<CT_PatternFillProperties> &__pattFill);
			EG_FillProperties& operator=(std::shared_ptr<CT_GroupFillProperties> &__grpFill);
			std::shared_ptr<CT_NoFillProperties> noFill();
			std::shared_ptr<CT_SolidColorFillProperties> solidFill();
			std::shared_ptr<CT_GradientFillProperties> gradFill();
			std::shared_ptr<CT_BlipFillProperties> blipFill();
			std::shared_ptr<CT_PatternFillProperties> pattFill();
			std::shared_ptr<CT_GroupFillProperties> grpFill();
		};

		class CT_FillStyleList {
		public:
		//elements
			std::vector<std::shared_ptr<EG_FillProperties>> fillProperties;
		//attributes

		public:
		//end
			CT_FillStyleList();
			CT_FillStyleList(CT_FillStyleList &b);
			CT_FillStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FillStyleList& operator=(CT_FillStyleList &b);
			~CT_FillStyleList();
			std::wstring Xml();
		};

		class CT_LineStyleList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_LineProperties>> ln;
		//attributes

		public:
		//end
			CT_LineStyleList();
			CT_LineStyleList(CT_LineStyleList &b);
			CT_LineStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LineStyleList& operator=(CT_LineStyleList &b);
			~CT_LineStyleList();
			std::wstring Xml();
		};

		class CT_EffectStyleList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_EffectStyleItem>> effectStyle;
		//attributes

		public:
		//end
			CT_EffectStyleList();
			CT_EffectStyleList(CT_EffectStyleList &b);
			CT_EffectStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EffectStyleList& operator=(CT_EffectStyleList &b);
			~CT_EffectStyleList();
			std::wstring Xml();
		};

		class CT_BackgroundFillStyleList {
		public:
		//elements
			std::vector<std::shared_ptr<EG_FillProperties>> fillProperties;
		//attributes

		public:
		//end
			CT_BackgroundFillStyleList();
			CT_BackgroundFillStyleList(CT_BackgroundFillStyleList &b);
			CT_BackgroundFillStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BackgroundFillStyleList& operator=(CT_BackgroundFillStyleList &b);
			~CT_BackgroundFillStyleList();
			std::wstring Xml();
		};

		class CT_StyleMatrix {
		public:
		//elements
			std::shared_ptr<CT_FillStyleList> fillStyleList;
			std::shared_ptr<CT_LineStyleList> lnStyleLst;
			std::shared_ptr<CT_EffectStyleList> effectStyleLst;
			std::shared_ptr<CT_BackgroundFillStyleList> bgFillStyleLst;
		//attributes
			std::wstring name;
		public:
		//end
			CT_StyleMatrix(std::shared_ptr<CT_FillStyleList> _fillStyleList,std::shared_ptr<CT_LineStyleList> _lnStyleLst,std::shared_ptr<CT_EffectStyleList> _effectStyleLst,std::shared_ptr<CT_BackgroundFillStyleList> _bgFillStyleLst,std::wstring _name);
			CT_StyleMatrix(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_StyleMatrix(CT_StyleMatrix &b);
			~CT_StyleMatrix();
			CT_StyleMatrix& operator=(CT_StyleMatrix &b);
			std::wstring Xml();
		};

		class CT_BaseStyles {
		public:
		//elements
			std::shared_ptr<CT_ColorScheme> clrScheme;
			std::shared_ptr<CT_FontScheme> fontScheme;
			std::shared_ptr<CT_StyleMatrix> fmtScheme;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_BaseStyles(std::shared_ptr<CT_ColorScheme> _clrScheme, std::shared_ptr<CT_FontScheme> _fontScheme, std::shared_ptr<CT_StyleMatrix> _fmtScheme);
			CT_BaseStyles(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BaseStyles(CT_BaseStyles &b);
			~CT_BaseStyles();
			CT_BaseStyles& operator=(CT_BaseStyles &b);
			std::wstring Xml();
		};

		class CT_OfficeArtExtension {
		public:
		//elements

		//attributes
			std::wstring uri;
		public:
		//end
			CT_OfficeArtExtension(std::wstring &_uri);
			CT_OfficeArtExtension(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_OfficeArtExtension(CT_OfficeArtExtension &b);
			~CT_OfficeArtExtension();
			CT_OfficeArtExtension& operator=(CT_OfficeArtExtension &b);
			std::wstring Xml();
		};

		class ST_CoordinateUnqualified : public Long {
		public:
		//end
			bool check(long chkval);
		public:
			ST_CoordinateUnqualified();
			ST_CoordinateUnqualified(long b);
			ST_CoordinateUnqualified(std::wstring b);
			virtual ST_CoordinateUnqualified& operator =(const Long& b);
			virtual ST_CoordinateUnqualified& operator =(long b);
			virtual ST_CoordinateUnqualified& operator =(std::wstring b);
		//end
		};

		class ST_Coordinate {
		public:
		//elements
			//<xsd:union memberTypes="ST_CoordinateUnqualified s:ST_UniversalMeasure"/>
			ST_CoordinateUnqualified coord;
			officeDocument::sharedTypes::ST_UniversalMeasure measure;
		//attributes

		public:
		//end
			ST_Coordinate();
			ST_Coordinate(ST_CoordinateUnqualified &b);
			ST_Coordinate(officeDocument::sharedTypes::ST_UniversalMeasure &b);
			ST_Coordinate& operator=(ST_CoordinateUnqualified &b);
			ST_Coordinate& operator=(officeDocument::sharedTypes::ST_UniversalMeasure &b);
			ST_Coordinate& operator =( ST_Coordinate& b);
			ST_Coordinate& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_Coordinate32 {
		public:
		//elements
			//<xsd:union memberTypes="ST_Coordinate32Unqualified s:ST_UniversalMeasure"/>
		//attributes

		public:
		//end
			ST_Coordinate32& operator =( ST_Coordinate32& b);
			ST_Coordinate32& operator =(std::wstring b);
			operator const wchar_t*() const;
		};

		class ST_PositiveCoordinate : public Long {
		public:
		//end
			bool check(long chkval);
		public:
			ST_PositiveCoordinate();
			ST_PositiveCoordinate(long b);
			ST_PositiveCoordinate(std::wstring b);
			virtual ST_PositiveCoordinate& operator =( ST_PositiveCoordinate& b);
			virtual ST_PositiveCoordinate& operator =(long b);
			virtual ST_PositiveCoordinate& operator =(std::wstring b);
		//end
		};

		class ST_PositiveCoordinate32 : public ST_Coordinate32Unqualified {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class CT_Angle {
		public:
		//elements

		//attributes
			ST_Angle val;
		public:
		//end
			CT_Angle(ST_Angle &_val);
			CT_Angle(CT_Angle &b);
			CT_Angle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Angle& operator=(CT_Angle &b);
			~CT_Angle();
			std::wstring Xml();
		};

		class ST_FixedAngle : public ST_Angle {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class ST_PositiveFixedAngle : public ST_Angle {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class CT_PositiveFixedAngle {
		public:
		//elements

		//attributes
			ST_PositiveFixedAngle val;
		public:
		//end
			CT_PositiveFixedAngle(ST_PositiveFixedAngle &_val);
			CT_PositiveFixedAngle(CT_PositiveFixedAngle &b);
			CT_PositiveFixedAngle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PositiveFixedAngle& operator=(CT_PositiveFixedAngle &b);
			~CT_PositiveFixedAngle();
			std::wstring Xml();
		};

		class CT_Percentage {
		public:
		//elements

		//attributes
			ST_Percentage val;
		public:
		//end
			CT_Percentage(ST_Percentage &_val);
			CT_Percentage(CT_Percentage &b);
			CT_Percentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Percentage& operator=(CT_Percentage &b);
			~CT_Percentage();
			std::wstring Xml();
		};

		class CT_PositivePercentage {
		public:
		//elements

		//attributes
			ST_PositivePercentage val;
		public:
		//end
			CT_PositivePercentage(ST_PositivePercentage &_val);
			CT_PositivePercentage(CT_PositivePercentage &b);
			CT_PositivePercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PositivePercentage& operator=(CT_PositivePercentage &b);
			~CT_PositivePercentage();
			std::wstring Xml();
		};

		class CT_FixedPercentage {
		public:
		//elements

		//attributes
			ST_FixedPercentage val;
		public:
		//end
			CT_FixedPercentage(ST_FixedPercentage &_val);
			CT_FixedPercentage(CT_FixedPercentage &b);
			CT_FixedPercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FixedPercentage& operator=(CT_FixedPercentage &b);
			~CT_FixedPercentage();
			std::wstring Xml();
		};

		class CT_PositiveFixedPercentage {
		public:
		//elements

		//attributes
			ST_PositiveFixedPercentage val;
		public:
		//end
			CT_PositiveFixedPercentage(ST_PositiveFixedPercentage &_val);
			CT_PositiveFixedPercentage(CT_PositiveFixedPercentage &b);
			CT_PositiveFixedPercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PositiveFixedPercentage& operator=(CT_PositiveFixedPercentage &b);
			~CT_PositiveFixedPercentage();
			std::wstring Xml();
		};

		class CT_Ratio {
		public:
		//elements

		//attributes
			Long n;
			Long d;
		public:
		//end
			CT_Ratio(Long _n, Long _d);
			CT_Ratio(CT_Ratio &b);
			CT_Ratio(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Ratio& operator=(CT_Ratio &b);
			~CT_Ratio();
			std::wstring Xml();
		};

		class CT_Point2D {
		public:
		//elements

		//attributes
			ST_Coordinate x;
			ST_Coordinate y;
		public:
		//end
			CT_Point2D(ST_Coordinate &_x, ST_Coordinate &_y);
			CT_Point2D(CT_Point2D &b);
			CT_Point2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Point2D& operator=(CT_Point2D &b);
			~CT_Point2D();
			std::wstring Xml();
		};

		class CT_PositiveSize2D {
		public:
		//elements

		//attributes
			ST_PositiveCoordinate cx;
			ST_PositiveCoordinate cy;
		public:
		//end
			CT_PositiveSize2D(ST_PositiveCoordinate &_cx, ST_PositiveCoordinate &_cy);
			CT_PositiveSize2D(CT_PositiveSize2D &b);
			CT_PositiveSize2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PositiveSize2D& operator=(CT_PositiveSize2D &b);
			~CT_PositiveSize2D();
			std::wstring Xml();
		};

		class CT_ComplementTransform {
		public:
		//elements

		//attributes

		public:
		//end
			CT_ComplementTransform();
			CT_ComplementTransform(CT_ComplementTransform &b);
			CT_ComplementTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ComplementTransform& operator=(CT_ComplementTransform &b);
			~CT_ComplementTransform();
			std::wstring Xml();
		};

		class CT_InverseTransform {
		public:
		//elements

		//attributes

		public:
		//end
			CT_InverseTransform();
			CT_InverseTransform(CT_InverseTransform &b);
			CT_InverseTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_InverseTransform& operator=(CT_InverseTransform &b);
			~CT_InverseTransform();
			std::wstring Xl();
		};

		class CT_GrayscaleTransform {
		public:
		//elements

		//attributes

		public:
		//end
			CT_GrayscaleTransform();
			CT_GrayscaleTransform(CT_GrayscaleTransform &b);
			CT_GrayscaleTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GrayscaleTransform& operator=(CT_GrayscaleTransform &b);
			~CT_GrayscaleTransform();
			std::wstring Xml();
		};

		class CT_GammaTransform {
		public:
		//elements

		//attributes

		public:
		//end
			CT_GammaTransform();
			CT_GammaTransform(CT_GammaTransform &b);
			CT_GammaTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GammaTransform& operator=(CT_GammaTransform &b);
			~CT_GammaTransform();
			std::wstring Xml();
		};

		class CT_InverseGammaTransform {
		public:
		//elements

		//attributes

		public:
		//end
			CT_InverseGammaTransform();
			CT_InverseGammaTransform(CT_InverseGammaTransform &b);
			CT_InverseGammaTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_InverseGammaTransform& operator=(CT_InverseGammaTransform &b);
			~CT_InverseGammaTransform();
			std::wstring Xml();
		};

		class EG_ColorTransform {
		private:
		public:
			EG_ColorTransform();
		};

		class CT_ScRgbColor {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorTransform>> colorTransform;
		//attributes
			ST_Percentage r;
			ST_Percentage g;
			ST_Percentage b;
		public:
		//end
			CT_ScRgbColor(ST_Percentage _r, ST_Percentage _g, ST_Percentage _b);
			CT_ScRgbColor(CT_ScRgbColor &b);
			CT_ScRgbColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ScRgbColor& operator=(CT_ScRgbColor &b);
			~CT_ScRgbColor();
			std::wstring Xml();
		};

		class CT_SRgbColor {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorTransform>> colorTransform;
		//attributes
			officeDocument::sharedTypes::ST_HexColorRGB val;
		public:
		//end
			CT_SRgbColor(officeDocument::sharedTypes::ST_HexColorRGB &_val);
			CT_SRgbColor(CT_SRgbColor &b);
			CT_SRgbColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SRgbColor& operator=(CT_SRgbColor &b);
			~CT_SRgbColor();
			std::wstring Xml();
		};

		class CT_HslColor {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorTransform>> colorTransform;
		//attributes
			ST_PositiveFixedAngle hue;
			ST_Percentage sat;
			ST_Percentage lum;
		public:
		//end
			CT_HslColor(ST_PositiveFixedAngle &_hue, ST_Percentage &_sat,	ST_Percentage &_lum);
			CT_HslColor(CT_HslColor &b);
			CT_HslColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_HslColor& operator=(CT_HslColor &b);
			~CT_HslColor();
			std::wstring Xml();
		};

		class ST_SystemColorVal {
		public:
		//end
			enum value {
				scrollBar,
				background,
				activeCaption,
				inactiveCaption,
				menu,
				window,
				windowFrame,
				menuText,
				windowText,
				captionText,
				activeBorder,
				inactiveBorder,
				appWorskspace,
				highlight,
				highlightText,
				btnFace,
				btnShadow,
				grayText,
				btnText,
				inactiveCaptionText,
				btnhighlight,
				_3dDkShadow,
				_3dLight,
				infoText,
				infoBk,
				hotLight,
				gradientActiveCaption,
				gradientInactiveCaption,
				menuHighlight,
				menuBar
			};
			value v;
		public:
			ST_SystemColorVal(value _v);
			ST_SystemColorVal(ST_SystemColorVal &b);
			ST_SystemColorVal(std::wstring b);
			ST_SystemColorVal& operator =( ST_SystemColorVal& b);
			ST_SystemColorVal& operator=(value _v);
			ST_SystemColorVal& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_SystemColor {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorTransform>> colorTransform;

		//attributes
			ST_SystemColorVal val;
			officeDocument::sharedTypes::ST_HexColorRGB lastClr;
		public:
		//end
			CT_SystemColor(ST_SystemColorVal _val);
			CT_SystemColor(CT_SystemColor &b);
			CT_SystemColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SystemColor& operator=(CT_SystemColor &b);
			~CT_SystemColor();
			std::wstring Xml();
		};

		class ST_SchemeColorVal {
		public:
		//end
			enum value {
				bg1,
				tx1,
				bg2,
				tx2,
				accent1,
				accent2,
				accent3,
				accent4,
				accent5,
				accent6,
				hlink,
				folHlink,
				phClr,
				dk1,
				lt1,
				dk2,
				lt2
			};
			value v;
		public:
			ST_SchemeColorVal(value _v);
			ST_SchemeColorVal(std::wstring b);
			ST_SchemeColorVal& operator =( ST_SchemeColorVal& b);
			ST_SchemeColorVal& operator=(value _v);
			ST_SchemeColorVal& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_SchemeColor {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorTransform>> colorTransform;
		//attributes
			ST_SchemeColorVal val;
		public:
		//end
			CT_SchemeColor(ST_SchemeColorVal _val);
			CT_SchemeColor(CT_SchemeColor &b);
			CT_SchemeColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SchemeColor& operator=(CT_SchemeColor &b);
			~CT_SchemeColor();
			std::wstring Xml();
		};

		class ST_PresetColorVal {
		public:
		//end
			enum value {
				aliceBlue,
				antiqueWhite,
				aqua,
				aquamarine,
				azure,
				beige,
				bisque,
				black,
				blanchedAlmond,
				blue,
				blueViolet,
				brown,
				burlyWood,
				cadetBlue,
				chartreuse,
				chocolate,
				coral,
				cornflowerBlue,
				cornsilk,
				crimson,
				cyan,
				darkBlue,
				darkCyan,
				darkGoldenrod,
				darkGray,
				darkGrey,
				darkGreen,
				darkKhaki,
				darkMagenta,
				darkOliveGreen,
				darkOrange,
				darkOrchid,
				darkRed,
				darkSalmon,
				darkSeaGreen,
				darkSlateBlue,
				darkSlateGray,
				darkSlateGrey,
				darkTurquoise,
				darkViolet,
				dkBlue,
				dkCyan,
				dkGoldenrod,
				dkGray,
				dkGrey,
				dkGreen,
				dkKhaki,
				dkMagenta,
				dkOliveGreen,
				dkOrange,
				dkOrchid,
				dkRed,
				dkSalmon,
				dkSeaGreen,
				dkSlateBlue,
				dkSlateGray,
				dkSlateGrey,
				dkTurquoise,
				dkViolet,
				deepPink,
				deepSkyBlue,
				dimGray,
				dimGrey,
				dodgerBlue,
				firebrick,
				floralWhite,
				forestGreen,
				fuchsia,
				gainsboro,
				ghostWhite,
				gold,
				goldenrod,
				gray,
				grey,
				green,
				greenYellow,
				honeydew,
				hotPink,
				indianRed,
				indigo,
				ivory,
				khaki,
				lavender,
				lavenderBlush,
				lawnGreen,
				lemonChiffon,
				lightBlue,
				lightCoral,
				lightCyan,
				lightGoldenrodYellow,
				lightGray,
				lightGrey,
				lightGreen,
				lightPink,
				lightSalmon,
				lightSeaGreen,
				lightSkyBlue,
				lightSlateGray,
				lightSlateGrey,
				lightSteelBlue,
				lightYellow,
				ltBlue,
				ltCoral,
				ltCyan,
				ltGoldenrodYellow,
				ltGray,
				ltGrey,
				ltGreen,
				ltPink,
				ltSalmon,
				ltSeaGreen,
				ltSkyBlue,
				ltSlateGray,
				ltSlateGrey,
				ltSteelBlue,
				ltYellow,
				lime,
				limeGreen,
				linen,
				magenta,
				maroon,
				medAquamarine,
				medBlue,
				medOrchid,
				medPurple,
				medSeaGreen,
				medSlateBlue,
				medSpringGreen,
				medTurquoise,
				medVioletRed,
				mediumAquamarine,
				mediumBlue,
				mediumOrchid,
				mediumPurple,
				mediumSeaGreen,
				mediumSlateBlue,
				mediumSpringGreen,
				mediumTurquoise,
				mediumVioletRed,
				midnightBlue,
				mintCream,
				mistyRose,
				moccasin,
				navajoWhite,
				navy,
				oldLace,
				olive,
				oliveDrab,
				orange,
				orangeRed,
				orchid,
				paleGoldenrod,
				paleGreen,
				paleTurquoise,
				paleVioletRed,
				papayaWhip,
				peachPuff,
				peru,
				pink,
				plum,
				powderBlue,
				purple,
				red,
				rosyBrown,
				royalBlue,
				saddleBrown,
				salmon,
				sandyBrown,
				seaGreen,
				seaShell,
				sienna,
				silver,
				skyBlue,
				slateBlue,
				slateGray,
				slateGrey,
				snow,
				springGreen,
				steelBlue,
				tan,
				teal,
				thistle,
				tomato,
				turquoise,
				violet,
				wheat,
				white,
				whiteSmoke,
				yellow,
				yellowGreen
			};
			value v;
		public:
		//end
			ST_PresetColorVal(value _v);
			ST_PresetColorVal(std::wstring b);
			ST_PresetColorVal(ST_PresetColorVal &b);
			ST_PresetColorVal& operator=(value _v);
			ST_PresetColorVal& operator =( ST_PresetColorVal& b);
			ST_PresetColorVal& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_PresetColor {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorTransform>> colorTransform;
		//attributes
			ST_PresetColorVal val;
		public:
		//end
			CT_PresetColor(ST_PresetColorVal &_val);
			CT_PresetColor(CT_PresetColor &b);
			CT_PresetColor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PresetColor& operator=(CT_PresetColor &b);
			~CT_PresetColor();
			std::wstring Xml();
		};

		class CT_OfficeArtExtensionList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_OfficeArtExtension>> ext;
		//attributes

		public:
		//end
			CT_OfficeArtExtensionList();
			CT_OfficeArtExtensionList(CT_OfficeArtExtensionList &b);
			CT_OfficeArtExtensionList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_OfficeArtExtensionList& operator=(CT_OfficeArtExtensionList &b);
			~CT_OfficeArtExtensionList();
			std::wstring Xml();
		};

		class CT_Scale2D {
		public:
		//elements
			std::shared_ptr<CT_Ratio> cx;
			std::shared_ptr<CT_Ratio> cy;
		//attributes

		public:
		//end
			CT_Scale2D(std::shared_ptr<CT_Ratio> _cx, std::shared_ptr<CT_Ratio> _cy);
			CT_Scale2D(CT_Scale2D &b);
			CT_Scale2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Scale2D& operator=(CT_Scale2D &b);
			~CT_Scale2D();
			std::wstring Xml();
		};

		class CT_Transform2D {
		public:
		//elements
			std::shared_ptr<CT_Point2D> off;
			std::shared_ptr<CT_PositiveSize2D> ext;
		//attributes
			ST_Angle rot;
			Bool flipH;
			Bool flipV;
		public:
		//end
			CT_Transform2D();
			CT_Transform2D(CT_Transform2D &b);
			CT_Transform2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Transform2D& operator=(CT_Transform2D &b);
			~CT_Transform2D();
			std::wstring Xml();
		};

		class CT_GroupTransform2D {
		public:
		//elements
			std::shared_ptr<CT_Point2D> off;
			std::shared_ptr<CT_PositiveSize2D> ext;
			std::shared_ptr<CT_Point2D> chOff;
			std::shared_ptr<CT_PositiveSize2D> chExt;
		//attributes
			ST_Angle rot;
			Bool flipH;
			Bool flipV;
		public:
		//end
			CT_GroupTransform2D();
			CT_GroupTransform2D(CT_GroupTransform2D &b);
			CT_GroupTransform2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GroupTransform2D& operator=(CT_GroupTransform2D &b);
			~CT_GroupTransform2D();
			std::wstring Xml();
		};

		class CT_Point3D {
		public:
		//elements

		//attributes
			ST_Coordinate x;
			ST_Coordinate y;
			ST_Coordinate z;
		public:
		//end
			CT_Point3D(ST_Coordinate &_x, ST_Coordinate &_y, ST_Coordinate &_z);
			CT_Point3D(CT_Point3D &b);
			CT_Point3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Point3D& operator=(CT_Point3D &b);
			~CT_Point3D();
			std::wstring Xml();
		};

		class CT_Vector3D {
		public:
		//elements

		//attributes
			ST_Coordinate dx;
			ST_Coordinate dy;
			ST_Coordinate dz;
		public:
		//end
			CT_Vector3D(ST_Coordinate _dx,	ST_Coordinate _dy, ST_Coordinate _dz);
			CT_Vector3D(CT_Vector3D &b);
			CT_Vector3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Vector3D& operator=(CT_Vector3D &b);
			~CT_Vector3D();
			std::wstring Xml();
		};

		class CT_SphereCoords {
		public:
		//elements

		//attributes
			ST_PositiveFixedAngle lat;
			ST_PositiveFixedAngle lon;
			ST_PositiveFixedAngle rev;
		public:
		//end
			CT_SphereCoords(ST_PositiveFixedAngle _lat, ST_PositiveFixedAngle _lon, ST_PositiveFixedAngle _rev);
			CT_SphereCoords(CT_SphereCoords &b);
			CT_SphereCoords(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SphereCoords& operator=(CT_SphereCoords &b);
			~CT_SphereCoords();
			std::wstring Xml();
		};

		class CT_RelativeRect {
		public:
		//elements

		//attributes
			ST_Percentage l;
			ST_Percentage t;
			ST_Percentage r;
			ST_Percentage b;
		public:
		//end
			CT_RelativeRect();
			CT_RelativeRect(CT_RelativeRect &b);
			CT_RelativeRect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_RelativeRect& operator=(CT_RelativeRect &b);
			~CT_RelativeRect();
			std::wstring Xml();
		};

		class ST_RectAlignment {
		public:
		//end
			enum value {
				tl,
				t,
				tr,
				l,
				ctr,
				r,
				bl,
				b,
				br
			};
			value v;
		public:
		//end
			ST_RectAlignment(value _v);
			ST_RectAlignment(ST_RectAlignment &b);
			ST_RectAlignment(std::wstring b);
			ST_RectAlignment& operator=(value _v);
			ST_RectAlignment& operator =( ST_RectAlignment& b);
			ST_RectAlignment& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_Color {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes

		public:
		//end
			CT_Color(EG_ColorChoice &_colorChoice);
			CT_Color(CT_Color &b);
			CT_Color(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Color& operator=(CT_Color &b);
			~CT_Color();
			std::wstring Xml();
		};

		class CT_ColorMRU {
		public:
		//elements
			std::vector<std::shared_ptr<EG_ColorChoice>> colorChoices;
		//attributes

		public:
		//end
			CT_ColorMRU();
			CT_ColorMRU(CT_ColorMRU &b);
			CT_ColorMRU(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorMRU& operator=(CT_ColorMRU &b);
			~CT_ColorMRU();
			std::wstring Xml();
		};

		class ST_BlackWhiteMode {
		public:
		//end
			enum value {
				clr,
				_auto,
				gray,
				ltGray,
				invGray,
				grayWhite,
				blackGray,
				blackWhite,
				black,
				white,
				hidden
			};
			value v;
		public:
		//end
			ST_BlackWhiteMode(value _v);
			ST_BlackWhiteMode(std::wstring b);
			ST_BlackWhiteMode& operator=(value _v);
			ST_BlackWhiteMode& operator =(ST_BlackWhiteMode& b);
			ST_BlackWhiteMode& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_EmbeddedWAVAudioFile {
		public:
		//elements

		//attributes
			officeDocument::relationships::ST_RelationshipId embed;
			std::wstring name;
		public:
		//end
			CT_EmbeddedWAVAudioFile(officeDocument::relationships::ST_RelationshipId _embed);
			CT_EmbeddedWAVAudioFile(CT_EmbeddedWAVAudioFile &b);
			CT_EmbeddedWAVAudioFile(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EmbeddedWAVAudioFile& operator=(CT_EmbeddedWAVAudioFile &b);
			~CT_EmbeddedWAVAudioFile();
			std::wstring Xml();
		};

		class CT_Hyperlink {
		public:
		//elements
			std::shared_ptr<CT_EmbeddedWAVAudioFile> snd;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			officeDocument::relationships::ST_RelationshipId id;
			std::wstring invalidUrl;
			std::wstring action;
			std::wstring tgtFrame;
			std::wstring tooltip;
			Bool history;
			Bool highlightClick;
			Bool endSnd;
		public:
		//end
			CT_Hyperlink();
			CT_Hyperlink(CT_Hyperlink &b);
			CT_Hyperlink(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Hyperlink& operator=(CT_Hyperlink &b);
			~CT_Hyperlink();
			std::wstring Xml();
		};

		class CT_ConnectorLocking {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			
			Bool noGrp;
			Bool noSelect;
			Bool noRot;
			Bool noChangeAspect;
			Bool noMove;
			Bool noResize;
			Bool noEditPoints;
			Bool noAdjustHandles;
			Bool noChangeArrowheads;
			Bool noChangeShapeType;
		public:
		//end
			CT_ConnectorLocking();
			CT_ConnectorLocking(CT_ConnectorLocking &b);
			CT_ConnectorLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ConnectorLocking& operator=(CT_ConnectorLocking &b);
			~CT_ConnectorLocking();
			std::wstring Xml();
		};

		class CT_ShapeLocking {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool noGrp;
			Bool noSelect;
			Bool noRot;
			Bool noChangeAspect;
			Bool noMove;
			Bool noResize;
			Bool noEditPoints;
			Bool noAdjustHandles;
			Bool noChangeArrowheads;
			Bool noChangeShapeType;

			Bool noTextEdit;
		public:
		//end
			CT_ShapeLocking();
			CT_ShapeLocking(CT_ShapeLocking &b);
			CT_ShapeLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ShapeLocking& operator=(CT_ShapeLocking &b);
			~CT_ShapeLocking();
			std::wstring Xml();
		};

		class CT_PictureLocking {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool noGrp;
			Bool noSelect;
			Bool noRot;
			Bool noChangeAspect;
			Bool noMove;
			Bool noResize;
			Bool noEditPoints;
			Bool noAdjustHandles;
			Bool noChangeArrowheads;
			Bool noChangeShapeType;

			Bool noCrop;
		public:
		//end
			CT_PictureLocking();
			CT_PictureLocking(CT_PictureLocking &b);
			CT_PictureLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PictureLocking& operator=(CT_PictureLocking &b);
			~CT_PictureLocking();
			std::wstring Xml();
		};

		class CT_GroupLocking {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool noGrp;
			Bool noUnGrp;
			Bool noSelect;
			Bool noRot;
			Bool noChangeAspect;
			Bool noMove;
			Bool noResize;
		public:
		//end
			CT_GroupLocking();
			CT_GroupLocking(CT_GroupLocking &b);
			CT_GroupLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GroupLocking& operator=(CT_GroupLocking &b);
			~CT_GroupLocking();
			std::wstring Xml();
		};

		class CT_GraphicalObjectFrameLocking {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool noGrp;
			Bool noDrilldown;
			Bool noSelect;
			Bool noChangeAspect;
			Bool noMove;
			Bool noResize;
		public:
		//end
			CT_GraphicalObjectFrameLocking();
			CT_GraphicalObjectFrameLocking(CT_GraphicalObjectFrameLocking &b);
			CT_GraphicalObjectFrameLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GraphicalObjectFrameLocking& operator=(CT_GraphicalObjectFrameLocking &b);
			~CT_GraphicalObjectFrameLocking();
			std::wstring Xml();
		};

		class CT_NonVisualDrawingProps {
		public:
		//elements
			std::shared_ptr<CT_Hyperlink> hlinkClick;
			std::shared_ptr<CT_Hyperlink> hlinkHover;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_DrawingElementId id;
			std::wstring name;
			std::wstring descr;
			Bool hidden;
			std::wstring title;
		public:
		//end
			CT_NonVisualDrawingProps(ST_DrawingElementId &_id, std::wstring &_name);
			CT_NonVisualDrawingProps(CT_NonVisualDrawingProps &b);
			CT_NonVisualDrawingProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NonVisualDrawingProps& operator=(CT_NonVisualDrawingProps &b);
			~CT_NonVisualDrawingProps();
			std::wstring Xml();
		};

		class CT_NonVisualDrawingShapeProps {
		public:
		//elements
			std::shared_ptr<CT_ShapeLocking> spLocks;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool txBox;
		public:
		//end
			CT_NonVisualDrawingShapeProps();
			CT_NonVisualDrawingShapeProps(CT_NonVisualDrawingShapeProps &b);
			CT_NonVisualDrawingShapeProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NonVisualDrawingShapeProps& operator=(CT_NonVisualDrawingShapeProps &b);
			~CT_NonVisualDrawingShapeProps();
			std::wstring Xml();
		};

		class CT_NonVisualConnectorProperties {
		public:
		//elements
			std::shared_ptr<CT_ConnectorLocking> cxnSpLocks;
			std::shared_ptr<CT_Connection> stCxn;
			std::shared_ptr<CT_Connection> endCxn;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_NonVisualConnectorProperties();
			CT_NonVisualConnectorProperties(CT_NonVisualConnectorProperties &b);
			CT_NonVisualConnectorProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NonVisualConnectorProperties& operator=(CT_NonVisualConnectorProperties &b);
			~CT_NonVisualConnectorProperties();
			std::wstring Xml();
		};

		class CT_NonVisualPictureProperties {
		public:
		//elements
			std::shared_ptr<CT_PictureLocking> picLocks;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool preferRelativeResize;
		public:
		//end
			CT_NonVisualPictureProperties();
			CT_NonVisualPictureProperties(CT_NonVisualPictureProperties &b);
			CT_NonVisualPictureProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NonVisualPictureProperties& operator=(CT_NonVisualPictureProperties &b);
			~CT_NonVisualPictureProperties();
			std::wstring Xml();
		};

		class CT_NonVisualGroupDrawingShapeProps {
		public:
		//elements
			std::shared_ptr<CT_GroupLocking> grpSpLocks;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_NonVisualGroupDrawingShapeProps();
			CT_NonVisualGroupDrawingShapeProps(CT_NonVisualGroupDrawingShapeProps &b);
			CT_NonVisualGroupDrawingShapeProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NonVisualGroupDrawingShapeProps& operator=(CT_NonVisualGroupDrawingShapeProps &b);
			~CT_NonVisualGroupDrawingShapeProps();
			std::wstring Xml();
		};

		class CT_NonVisualGraphicFrameProperties {
		public:
		//elements
			std::shared_ptr<CT_GraphicalObjectFrameLocking> graphicFrameLocks;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_NonVisualGraphicFrameProperties();
			CT_NonVisualGraphicFrameProperties(CT_NonVisualGraphicFrameProperties &b);
			CT_NonVisualGraphicFrameProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NonVisualGraphicFrameProperties& operator=(CT_NonVisualGraphicFrameProperties &b);
			~CT_NonVisualGraphicFrameProperties();
			std::wstring Xml();
		};

		class CT_GraphicalObjectData {
		public:
		//elements
			//<xsd:any minOccurs="0" maxOccurs="unbounded" processContents="strict"/>
		//attributes
			std::wstring uri;
		public:
		//end
			CT_GraphicalObjectData(std::wstring &_uri);
			CT_GraphicalObjectData(CT_GraphicalObjectData &b);
			CT_GraphicalObjectData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GraphicalObjectData& operator=(CT_GraphicalObjectData &b);
			~CT_GraphicalObjectData();
			std::wstring Xml();
		};

		class CT_GraphicalObject {
		public:
		//elements
			std::shared_ptr<CT_GraphicalObjectData> graphicData;
		//attributes

		public:
		//end
			CT_GraphicalObject(std::shared_ptr<CT_GraphicalObjectData> &_graphicData);
			CT_GraphicalObject(CT_GraphicalObject &b);
			CT_GraphicalObject(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GraphicalObject& operator=(CT_GraphicalObject &b);
			~CT_GraphicalObject();
			std::wstring Xml();
		};

		class ST_ChartBuildStep {
		public:
		//end
			enum value {
				category,
				ptInCategory,
				series,
				ptInSeries,
				allPts,
				gridLegend
			};
			value v;
		public:
			ST_ChartBuildStep();
			ST_ChartBuildStep(value _v);
			ST_ChartBuildStep(std::wstring b);
			ST_ChartBuildStep(ST_ChartBuildStep &b);
			ST_ChartBuildStep& operator=(value _v);
			ST_ChartBuildStep& operator =( ST_ChartBuildStep& b);
			ST_ChartBuildStep& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_DgmBuildStep {
		public:
		//end
			enum value {
				sp,
				bg
			};
			value v;
		public:
		//end
			ST_DgmBuildStep();
			ST_DgmBuildStep(value _v);
			ST_DgmBuildStep(std::wstring b);
			ST_DgmBuildStep(ST_DgmBuildStep &b);
			ST_DgmBuildStep& operator=(value _V);
			ST_DgmBuildStep& operator =(ST_DgmBuildStep& b);
			ST_DgmBuildStep& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_AnimationDgmElement {
		public:
		//elements

		//attributes
			officeDocument::sharedTypes::ST_Guid id;
			ST_DgmBuildStep bldStep;
		public:
		//end
			CT_AnimationDgmElement();
			CT_AnimationDgmElement(CT_AnimationDgmElement &b);
			CT_AnimationDgmElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AnimationDgmElement& operator=(CT_AnimationDgmElement &b);
			~CT_AnimationDgmElement();
			std::wstring Xml();
		};

		class CT_AnimationChartElement {
		public:
		//elements

		//attributes
			Int seriesIdx;
			Int categoryIdx;
			ST_ChartBuildStep bldStep;
		public:
		//end
			CT_AnimationChartElement(ST_ChartBuildStep _bldStep);
			CT_AnimationChartElement(CT_AnimationChartElement &b);
			CT_AnimationChartElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AnimationChartElement& operator=(CT_AnimationChartElement &b);
			~CT_AnimationChartElement();
			std::wstring Xml();
		};

		class CT_AnimationElementChoice {
		public:
		//elements
			class Choice {
				typedef std::shared_ptr<CT_AnimationDgmElement> std_shared_ptr_CT_AnimationDgmElement;
				typedef std::shared_ptr<CT_AnimationChartElement> std_shared_ptr_CT_AnimationChartElement;
			private:
				std::shared_ptr<CT_AnimationDgmElement> _dgm;
				std::shared_ptr<CT_AnimationChartElement> _chart;
				int type;
			public:
				Choice();
				Choice& operator=(std::shared_ptr<CT_AnimationDgmElement> __dgm);
				Choice& operator=(std::shared_ptr<CT_AnimationChartElement> __chart);
				operator std_shared_ptr_CT_AnimationDgmElement() const;
				operator std_shared_ptr_CT_AnimationChartElement () const;
				std_shared_ptr_CT_AnimationDgmElement dgm();
				std_shared_ptr_CT_AnimationChartElement chart();
			};
		//attributes
			Choice choice;
		public:
		//end
			CT_AnimationElementChoice(Choice _choice);
			CT_AnimationElementChoice(CT_AnimationElementChoice &b);
			CT_AnimationElementChoice(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AnimationElementChoice& operator=(CT_AnimationElementChoice &b);
			~CT_AnimationElementChoice();
			std::wstring Xml();
		};

		class ST_AnimationBuildType {
		public:
		//end
			enum value {
				allAtOnce
			};
			value v;
		public:
		//end
			ST_AnimationBuildType();
			ST_AnimationBuildType(value _v);
			ST_AnimationBuildType(std::wstring b);
			ST_AnimationBuildType(ST_AnimationBuildType &b);
			ST_AnimationBuildType& operator=(value _v);
			ST_AnimationBuildType& operator =( ST_AnimationBuildType& b);
			ST_AnimationBuildType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_AnimationDgmOnlyBuildType {
		public:
		//end
			enum value {
				one,
				lvlOne,
				lvlAtOnce
			};
			value v;
		public:
		//end
			ST_AnimationDgmOnlyBuildType();
			ST_AnimationDgmOnlyBuildType(value _v);
			ST_AnimationDgmOnlyBuildType(std::wstring b);
			ST_AnimationDgmOnlyBuildType(ST_AnimationDgmOnlyBuildType &b);
			ST_AnimationDgmOnlyBuildType& operator=(value _v);
			ST_AnimationDgmOnlyBuildType& operator =( ST_AnimationDgmOnlyBuildType& b);
			ST_AnimationDgmOnlyBuildType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_AnimationDgmBuildType {
		public:
		//end
			enum value {
				allAtOnce,
				one,
				lvlOne,
				lvlAtOnce
			};
			value v;
		public:
		//end
			ST_AnimationDgmBuildType();
			ST_AnimationDgmBuildType(value _v);
			ST_AnimationDgmBuildType(std::wstring b);
			ST_AnimationDgmBuildType(ST_AnimationDgmBuildType &b);
			ST_AnimationDgmBuildType& operator=(value _v);
			ST_AnimationDgmBuildType& operator =(ST_AnimationDgmBuildType& b);
			ST_AnimationDgmBuildType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_AnimationDgmBuildProperties {
		public:
		//elements

		//attributes
			ST_AnimationDgmBuildType bld;
			Bool rev;
		public:
		//end
			CT_AnimationDgmBuildProperties();
			CT_AnimationDgmBuildProperties(CT_AnimationDgmBuildProperties &b);
			CT_AnimationDgmBuildProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AnimationDgmBuildProperties& operator=(CT_AnimationDgmBuildProperties &b);
			~CT_AnimationDgmBuildProperties();
			std::wstring Xml();
		};

		class ST_AnimationChartOnlyBuildType {
		public:
		//end
			enum value {
				series,
				category,
				seriesEl,
				categoryEl
			};
			value v;
		public:
		//end
			ST_AnimationChartOnlyBuildType();
			ST_AnimationChartOnlyBuildType(value _v);
			ST_AnimationChartOnlyBuildType(std::wstring b);
			ST_AnimationChartOnlyBuildType(ST_AnimationChartOnlyBuildType &b);
			ST_AnimationChartOnlyBuildType& operator=(value _v);
			ST_AnimationChartOnlyBuildType& operator =(ST_AnimationChartOnlyBuildType& b);
			ST_AnimationChartOnlyBuildType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_AnimationChartBuildType {
		public:
		//end
			enum value {
				allAtOnce,
				series,
				category,
				seriesEl,
				categoryEl
			};
			value v;
		public:
		//end
			ST_AnimationChartBuildType();
			ST_AnimationChartBuildType(value _v);
			ST_AnimationChartBuildType(std::wstring b);
			ST_AnimationChartBuildType(ST_AnimationChartBuildType &b);
			ST_AnimationChartBuildType& operator=(value _v);
			ST_AnimationChartBuildType& operator =(ST_AnimationChartBuildType& b);
			ST_AnimationChartBuildType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_AnimationChartBuildProperties {
		public:
		//elements

		//attributes
			ST_AnimationChartBuildType bld;
			Bool animBg;
		public:
		//end
			CT_AnimationChartBuildProperties();
			CT_AnimationChartBuildProperties(CT_AnimationChartBuildProperties &b);
			CT_AnimationChartBuildProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AnimationChartBuildProperties& operator=(CT_AnimationChartBuildProperties &b);
			~CT_AnimationChartBuildProperties();
			std::wstring Xml();
		};

		class CT_AnimationGraphicalObjectBuildProperties {
		public:
		//elements
			class Choice {
				typedef std::shared_ptr<CT_AnimationDgmBuildProperties> std_shared_ptr_CT_AnimationDgmBuildProperties;
				typedef std::shared_ptr<CT_AnimationChartBuildProperties> std_shared_ptr_CT_AnimationChartBuildProperties;
			private:
				std::shared_ptr<CT_AnimationDgmBuildProperties> _bldDgm;
				std::shared_ptr<CT_AnimationChartBuildProperties> _bldChart;
				int type;
			public:
				Choice();
				Choice& operator=(std_shared_ptr_CT_AnimationDgmBuildProperties _bldDgm);
				Choice& operator=(std_shared_ptr_CT_AnimationChartBuildProperties _bldChart);
				std_shared_ptr_CT_AnimationDgmBuildProperties bldDgm();
				std_shared_ptr_CT_AnimationChartBuildProperties bldChart();
			};
			Choice choice;
		//attributes

		public:
		//end
			CT_AnimationGraphicalObjectBuildProperties(Choice _choice);
			CT_AnimationGraphicalObjectBuildProperties(CT_AnimationGraphicalObjectBuildProperties &b);
			CT_AnimationGraphicalObjectBuildProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AnimationGraphicalObjectBuildProperties& operator=(CT_AnimationGraphicalObjectBuildProperties &b);
			~CT_AnimationGraphicalObjectBuildProperties();
			std::wstring Xml();
		};

		class CT_BackgroundFormatting {
		public:
		//elements
			std::shared_ptr<EG_FillProperties> fillProperties;
			std::shared_ptr<EG_EffectProperties> effectProperties;
		//attributes

		public:
		//end
			CT_BackgroundFormatting();
			CT_BackgroundFormatting(CT_BackgroundFormatting &b);
			CT_BackgroundFormatting(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BackgroundFormatting& operator=(CT_BackgroundFormatting &b);
			~CT_BackgroundFormatting();
			std::wstring Xml();
		};

		class CT_WholeE2oFormatting {
		public:
		//elements
			std::shared_ptr<CT_LineProperties> ln;
			std::shared_ptr<EG_EffectProperties> effectProperties;
			std::shared_ptr<CT_EffectList> effectLst;
			std::shared_ptr<CT_EffectContainer> effectDag;
		//attributes

		public:
		//end
			CT_WholeE2oFormatting();
			CT_WholeE2oFormatting(CT_WholeE2oFormatting &b);
			CT_WholeE2oFormatting(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_WholeE2oFormatting& operator=(CT_WholeE2oFormatting &b);
			~CT_WholeE2oFormatting();
			std::wstring Xml();
		};

		class CT_GvmlUseShapeRectangle {
		public:
		//elements

		//attributes

		public:
		//end
			CT_GvmlUseShapeRectangle();
			CT_GvmlUseShapeRectangle(CT_GvmlUseShapeRectangle &b);
			CT_GvmlUseShapeRectangle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlUseShapeRectangle& operator=(CT_GvmlUseShapeRectangle &b);
			~CT_GvmlUseShapeRectangle();
			std::wstring Xml();
		};

		class CT_GvmlTextShape {
		public:
		//elements
			std::shared_ptr<CT_TextBody> txBody;

			class Choice {
			public:
				enum valuetype {GvmlUseShapeRectangle,Transform2D};
				typedef std::shared_ptr<CT_GvmlUseShapeRectangle> std_shared_ptr_CT_GvmlUseShapeRectangle;
				typedef std::shared_ptr<CT_Transform2D> std_shared_ptr_CT_Transform2D;
			private:
				std::shared_ptr<CT_GvmlUseShapeRectangle> _useSpRect;
				std::shared_ptr<CT_Transform2D> _xfrm;
				valuetype vtype;
			public:
				Choice();
				Choice& operator=(std_shared_ptr_CT_GvmlUseShapeRectangle &__useSpRect);
				Choice& operator=(std_shared_ptr_CT_Transform2D &__xfrm);
				Choice& operator=(CT_GvmlUseShapeRectangle *__useSpRect);
				Choice& operator=(CT_Transform2D *__xfrm);
				std_shared_ptr_CT_GvmlUseShapeRectangle useSpRect();
				std_shared_ptr_CT_Transform2D xfrm();
				valuetype type();
			};
			Choice choice;

			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_GvmlTextShape(std::shared_ptr<CT_TextBody> &_txBody, Choice &_choice);
			CT_GvmlTextShape(CT_GvmlTextShape &b);
			CT_GvmlTextShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlTextShape& operator=(CT_GvmlTextShape &b);
			~CT_GvmlTextShape();
			std::wstring Xml();
		};

		class CT_GvmlShapeNonVisual {
		public:
		//elements
			std::shared_ptr<CT_NonVisualDrawingProps> cNvPr;
			std::shared_ptr<CT_NonVisualDrawingShapeProps> cNvSpPr;
		//attributes

		public:
		//end
			CT_GvmlShapeNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr, std::shared_ptr<CT_NonVisualDrawingShapeProps> &_cNvSpPr);
			CT_GvmlShapeNonVisual(CT_GvmlShapeNonVisual &b);
			CT_GvmlShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlShapeNonVisual& operator=(CT_GvmlShapeNonVisual &b);
			~CT_GvmlShapeNonVisual();
			std::wstring Xml();
		};

		class CT_GvmlShape {
		public:
		//elements
			std::shared_ptr<CT_GvmlShapeNonVisual> nvSpPr;
			std::shared_ptr<CT_ShapeProperties> spPr;
			std::shared_ptr<CT_GvmlTextShape> txSp;
			std::shared_ptr<CT_ShapeStyle> style;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_GvmlShape(std::shared_ptr<CT_GvmlShapeNonVisual> &_nvSpPr, std::shared_ptr<CT_ShapeProperties> &_spPr);
			CT_GvmlShape(CT_GvmlShape &b);
			CT_GvmlShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlShape& operator=(CT_GvmlShape &b);
			~CT_GvmlShape();
			std::wstring Xml();
		};

		class CT_GvmlConnectorNonVisual {
		public:
		//elements
			std::shared_ptr<CT_NonVisualDrawingProps> cNvPr;
			std::shared_ptr<CT_NonVisualConnectorProperties> cNvCxnSpPr;
		//attributes

		public:
		//end
			CT_GvmlConnectorNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr, std::shared_ptr<CT_NonVisualConnectorProperties> &_cNvCxnSpPr);
			CT_GvmlConnectorNonVisual(CT_GvmlConnectorNonVisual &b);
			CT_GvmlConnectorNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlConnectorNonVisual& operator=(CT_GvmlConnectorNonVisual &b);
			~CT_GvmlConnectorNonVisual();
			std::wstring Xml();
		};

		class CT_GvmlConnector {
		public:
		//elements
			std::shared_ptr<CT_GvmlConnectorNonVisual> nvCxnSpPr;
			std::shared_ptr<CT_ShapeProperties> spPr;
			std::shared_ptr<CT_ShapeStyle> style;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_GvmlConnector(std::shared_ptr<CT_GvmlConnectorNonVisual> &_nvCxnSpPr,	std::shared_ptr<CT_ShapeProperties> &_spPr);
			CT_GvmlConnector(CT_GvmlConnector &b);
			CT_GvmlConnector(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlConnector& operator=(CT_GvmlConnector &b);
			~CT_GvmlConnector();
			std::wstring Xml();
		};

		class CT_GvmlPictureNonVisual {
		public:
		//elements
			std::shared_ptr<CT_NonVisualDrawingProps> cNvPr;
			std::shared_ptr<CT_NonVisualPictureProperties> cNvPicPr;
		//attributes

		public:
		//end
			CT_GvmlPictureNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr,	std::shared_ptr<CT_NonVisualPictureProperties> &_cNvPicPr);
			CT_GvmlPictureNonVisual(CT_GvmlPictureNonVisual &b);
			CT_GvmlPictureNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlPictureNonVisual& operator=(CT_GvmlPictureNonVisual &b);
			~CT_GvmlPictureNonVisual();
			std::wstring Xml();
		};

		class CT_GvmlPicture {
		public:
		//elements
			std::shared_ptr<CT_GvmlPictureNonVisual> nvPicPr;
			std::shared_ptr<CT_BlipFillProperties> blipFill;
			std::shared_ptr<CT_ShapeProperties> spPr;
			std::shared_ptr<CT_ShapeStyle> style;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_GvmlPicture(std::shared_ptr<CT_GvmlPictureNonVisual> &_nvvPicPr, std::shared_ptr<CT_BlipFillProperties> &_blipFill, std::shared_ptr<CT_ShapeProperties> &_spPr);
			CT_GvmlPicture(CT_GvmlPicture &b);
			CT_GvmlPicture(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlPicture& operator=(CT_GvmlPicture &b);
			~CT_GvmlPicture();
			std::wstring Xml();
		};

		class CT_GvmlGraphicFrameNonVisual {
		public:
		//elements
			std::shared_ptr<CT_NonVisualDrawingProps> cNvPr;
			std::shared_ptr<CT_NonVisualGraphicFrameProperties> cNvGraphicFramePr;
		//attributes

		public:
		//end
			CT_GvmlGraphicFrameNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr,std::shared_ptr<CT_NonVisualGraphicFrameProperties> &_cNvGraphicFramePr);
			CT_GvmlGraphicFrameNonVisual(CT_GvmlGraphicFrameNonVisual &b);
			CT_GvmlGraphicFrameNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlGraphicFrameNonVisual& operator=(CT_GvmlGraphicFrameNonVisual &b);
			~CT_GvmlGraphicFrameNonVisual();
			std::wstring Xml();
		};

		class CT_GvmlGraphicalObjectFrame {
		public:
		//elements
			std::shared_ptr<CT_GvmlGraphicFrameNonVisual> nvGraphicFramePr;
			std::shared_ptr<CT_GraphicalObject> graphic;
			std::shared_ptr<CT_Transform2D> xfrm;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_GvmlGraphicalObjectFrame(std::shared_ptr<CT_GvmlGraphicFrameNonVisual> &_nvGraphicFramePr, std::shared_ptr<CT_GraphicalObject> &_graphic, std::shared_ptr<CT_Transform2D> &_xfrm);
			CT_GvmlGraphicalObjectFrame(CT_GvmlGraphicalObjectFrame &b);
			CT_GvmlGraphicalObjectFrame(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlGraphicalObjectFrame& operator=(CT_GvmlGraphicalObjectFrame &b);
			~CT_GvmlGraphicalObjectFrame();
			std::wstring Xml();
		};

		class CT_GvmlGroupShapeNonVisual {
		public:
		//elements
			std::shared_ptr<CT_NonVisualDrawingProps> cNvPr;
			std::shared_ptr<CT_NonVisualGroupDrawingShapeProps> cNvGrpSpPr;
		//attributes

		public:
		//end
			CT_GvmlGroupShapeNonVisual(std::shared_ptr<CT_NonVisualDrawingProps> &_cNvPr,std::shared_ptr<CT_NonVisualGroupDrawingShapeProps> &_cNvGrpSpPr);
			CT_GvmlGroupShapeNonVisual(CT_GvmlGroupShapeNonVisual &b);
			CT_GvmlGroupShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlGroupShapeNonVisual& operator=(CT_GvmlGroupShapeNonVisual &b);
			~CT_GvmlGroupShapeNonVisual();
			std::wstring Xml();
		};

		class CT_GvmlGroupShape {
		public:
		//elements
			std::shared_ptr<CT_GvmlGroupShapeNonVisual> nvGrpSpPr;
			std::shared_ptr<CT_GroupShapeProperties> grpSpPr;
			class Choice {
				typedef std::shared_ptr<CT_GvmlTextShape> std_shared_ptr_CT_GvmlTextShape;
				typedef std::shared_ptr<CT_GvmlShape> std_shared_ptr_CT_GvmlShape;
				typedef std::shared_ptr<CT_GvmlConnector> std_shared_ptr_CT_GvmlConnector;
				typedef std::shared_ptr<CT_GvmlPicture> std_shared_ptr_CT_GvmlPicture;
				typedef std::shared_ptr<CT_GvmlGraphicalObjectFrame> std_shared_ptr_CT_GvmlGraphicalObjectFrame;
				typedef std::shared_ptr<CT_GvmlGroupShape> std_shared_ptr_CT_GvmlGroupShape;
			private:
				std::shared_ptr<CT_GvmlTextShape> _txSp;
				std::shared_ptr<CT_GvmlShape> _sp;
				std::shared_ptr<CT_GvmlConnector> _cxnSp;
				std::shared_ptr<CT_GvmlPicture> _pic;
				std::shared_ptr<CT_GvmlGraphicalObjectFrame> _graphicFrame;
				std::shared_ptr<CT_GvmlGroupShape> _grpSp;
			public:
				Choice();
				Choice& operator=(std_shared_ptr_CT_GvmlTextShape __txSp);
				Choice& operator=(std_shared_ptr_CT_GvmlShape __sp);
				Choice& operator=(std_shared_ptr_CT_GvmlConnector __cxnSp);
				Choice& operator=(std_shared_ptr_CT_GvmlPicture __pic);
				Choice& operator=(std_shared_ptr_CT_GvmlGraphicalObjectFrame __graphicFrame);
				Choice& operator=(std_shared_ptr_CT_GvmlGroupShape __grpSp);
				std_shared_ptr_CT_GvmlTextShape txSp();
				std_shared_ptr_CT_GvmlShape sp();
				std_shared_ptr_CT_GvmlConnector cxnSp();
				std_shared_ptr_CT_GvmlPicture pic();
				std_shared_ptr_CT_GvmlGraphicalObjectFrame graphicFrame();
				std_shared_ptr_CT_GvmlGroupShape grpSp();
			};
			std::vector<Choice> choice;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_GvmlGroupShape(std::shared_ptr<CT_GvmlGroupShapeNonVisual> _nvGrpSpPr,	std::shared_ptr<CT_GroupShapeProperties> _grpSpPr);
			CT_GvmlGroupShape(CT_GvmlGroupShape &b);
			CT_GvmlGroupShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GvmlGroupShape& operator=(CT_GvmlGroupShape &b);
			~CT_GvmlGroupShape();
			std::wstring Xml();
		};

		class ST_PresetCameraType {
		public:
		//end
			enum value {
				legacyObliqueTopLeft,
				legacyObliqueTop,
				legacyObliqueTopRight,
				legacyObliqueLeft,
				legacyObliqueFront,
				legacyObliqueRight,
				legacyObliqueBottomLeft,
				legacyObliqueBottom,
				legacyObliqueBottomRight,
				legacyPerspectiveTopLeft,
				legacyPerspectiveTop,
				legacyPerspectiveTopRight,
				legacyPerspectiveLeft,
				legacyPerspectiveFront,
				legacyPerspectiveRight,
				legacyPerspectiveBottomLeft,
				legacyPerspectiveBottom,
				legacyPerspectiveBottomRight,
				orthographicFront,
				isometricTopUp,
				isometricTopDown,
				isometricBottomUp,
				isometricBottomDown,
				isometricLeftUp,
				isometricLeftDown,
				isometricRightUp,
				isometricRightDown,
				isometricOffAxis1Left,
				isometricOffAxis1Right,
				isometricOffAxis1Top,
				isometricOffAxis2Left,
				isometricOffAxis2Right,
				isometricOffAxis2Top,
				isometricOffAxis3Left,
				isometricOffAxis3Right,
				isometricOffAxis3Bottom,
				isometricOffAxis4Left,
				isometricOffAxis4Right,
				isometricOffAxis4Bottom,
				obliqueTopLeft,
				obliqueTop,
				obliqueTopRight,
				obliqueLeft,
				obliqueRight,
				obliqueBottomLeft,
				obliqueBottom,
				obliqueBottomRight,
				perspectiveFront,
				perspectiveLeft,
				perspectiveRight,
				perspectiveAbove,
				perspectiveBelow,
				perspectiveAboveLeftFacing,
				perspectiveAboveRightFacing,
				perspectiveContrastingLeftFacing,
				perspectiveContrastingRightFacing,
				perspectiveHeroicLeftFacing,
				perspectiveHeroicRightFacing,
				perspectiveHeroicExtremeLeftFacing,
				perspectiveHeroicExtremeRightFacing,
				perspectiveRelaxed,
				perspectiveRelaxedModerately
			};
			value v;
		public:
		//end
			ST_PresetCameraType();
			ST_PresetCameraType(value _v);
			ST_PresetCameraType(std::wstring b);
			ST_PresetCameraType(ST_PresetCameraType &b);
			ST_PresetCameraType& operator=(value _v);
			ST_PresetCameraType& operator =(ST_PresetCameraType& b);
			ST_PresetCameraType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_FOVAngle : public ST_Angle {
		public:
		//end
			bool check(int chkval);
		public:
			ST_FOVAngle& operator =(ST_FOVAngle& b);
			ST_FOVAngle& operator =(int b);
			ST_FOVAngle& operator =(std::wstring b);
		};

		class CT_Camera {
		public:
		//elements
			std::shared_ptr<CT_SphereCoords> rot;
		//attributes
			ST_PresetCameraType prst;
			ST_FOVAngle fov;
			ST_PositivePercentage zoom;
		public:
		//end
			CT_Camera(ST_PresetCameraType _prst);
			CT_Camera(CT_Camera &b);
			CT_Camera(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Camera& operator=(CT_Camera &b);
			~CT_Camera();
			std::wstring Xml();
		};

		class ST_LightRigDirection {
		public:
		//end
			enum value {
				tl,
				t,
				tr,
				l,
				r,
				bl,
				b,
				br
			};
			value v;
		public:
		//end
			ST_LightRigDirection(value _v);
			ST_LightRigDirection(ST_LightRigDirection &b);
			ST_LightRigDirection(std::wstring b);
			ST_LightRigDirection& operator=(value _v);
			ST_LightRigDirection& operator =( ST_LightRigDirection& b);
			ST_LightRigDirection& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class ST_LightRigType {
		public:
		//end
			enum value {
				legacyFlat1,
				legacyFlat2,
				legacyFlat3,
				legacyFlat4,
				legacyNormal1,
				legacyNormal2,
				legacyNormal3,
				legacyNormal4,
				legacyHarsh1,
				legacyHarsh2,
				legacyHarsh3,
				legacyHarsh4,
				threePt,
				balanced,
				soft,
				harsh,
				flood,
				contrasting,
				morning,
				sunrise,
				sunset,
				chilly,
				freezing,
				flat,
				twoPt,
				glow,
				brightRoom
			};
			value v;
		public:
		//end
			ST_LightRigType(value _v);
			ST_LightRigType(std::wstring b);
			ST_LightRigType(ST_LightRigType &b);
			ST_LightRigType& operator=(value _v);
			ST_LightRigType& operator =(ST_LightRigType& b);
			ST_LightRigType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_LightRig {
		public:
		//elements
			std::shared_ptr<CT_SphereCoords> rot;
		//attributes
			ST_LightRigType rig;
			ST_LightRigDirection dir;
		public:
		//end
			CT_LightRig(ST_LightRigType &_rig, ST_LightRigDirection &_dir);
			CT_LightRig(CT_LightRig &b);
			CT_LightRig(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LightRig& operator=(CT_LightRig &b);
			~CT_LightRig();
			std::wstring Xml();
		};

		class CT_Scene3D {
		public:
		//elements
			std::shared_ptr<CT_Camera> camera;
			std::shared_ptr<CT_LightRig> lightRig;
			std::shared_ptr<CT_Backdrop> backdrop;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_Scene3D(std::shared_ptr<CT_Camera> _camera,	std::shared_ptr<CT_LightRig> _lightRig);
			CT_Scene3D(CT_Scene3D &b);
			CT_Scene3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Scene3D& operator=(CT_Scene3D &b);
			~CT_Scene3D();
			std::wstring Xml();
		};

		class CT_Backdrop {
		public:
		//elements
			std::shared_ptr<CT_Point3D> anchor;
			std::shared_ptr<CT_Vector3D> norm;
			std::shared_ptr<CT_Vector3D> up;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_Backdrop(std::shared_ptr<CT_Point3D> _anchor,std::shared_ptr<CT_Vector3D> _norm,std::shared_ptr<CT_Vector3D> _up);
			CT_Backdrop(CT_Backdrop &b);
			CT_Backdrop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Backdrop& operator=(CT_Backdrop &b);
			~CT_Backdrop();
			std::wstring Xml();
		};

		class ST_BevelPresetType {
		public:
		//end
			enum value {
				relaxedInset,
				circle,
				slope,
				cross,
				angle,
				softRound,
				convex,
				coolSlant,
				divot,
				riblet,
				hardEdge,
				artDeco
			};
			value v;
		public:
		//end
			ST_BevelPresetType();
			ST_BevelPresetType(value _v);
			ST_BevelPresetType(std::wstring b);
			ST_BevelPresetType(ST_BevelPresetType &b);
			ST_BevelPresetType& operator=(value _v);
			ST_BevelPresetType& operator =( ST_BevelPresetType& b);
			ST_BevelPresetType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_Bevel {
		public:
		//elements

		//attributes
			ST_PositiveCoordinate w;
			ST_PositiveCoordinate h;
			ST_BevelPresetType prst;
		public:
		//end
			CT_Bevel();
			CT_Bevel(CT_Bevel &b);
			CT_Bevel(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Bevel& operator=(CT_Bevel &b);
			~CT_Bevel();
			std::wstring Xml();
		};

		class ST_PresetMaterialType {
		public:
		//end
			enum value {
				legacyMatte,
				legacyPlastic,
				legacyMetal,
				legacyWireframe,
				matte,
				plastic,
				metal,
				warmMatte,
				translucentPowder,
				powder,
				dkEdge,
				softEdge,
				clear,
				flat,
				softmetal
			};
			value v;
		public:
		//end
			ST_PresetMaterialType();
			ST_PresetMaterialType(value _v);
			ST_PresetMaterialType(std::wstring b);
			ST_PresetMaterialType(ST_PresetMaterialType &b);
			ST_PresetMaterialType& operator=(value _v);
			ST_PresetMaterialType& operator =(ST_PresetMaterialType& b);
			ST_PresetMaterialType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_Shape3D {
		public:
		//elements
			std::shared_ptr<CT_Bevel> bevelT;
			std::shared_ptr<CT_Bevel> bevelB;
			std::shared_ptr<CT_Color> extrusionClr;
			std::shared_ptr<CT_Color> contourClr;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_Coordinate z;
			ST_PositiveCoordinate extrusionH;
			ST_PositiveCoordinate contourW;
			ST_PresetMaterialType prstMaterial;
		public:
		//end
			CT_Shape3D();
			CT_Shape3D(CT_Shape3D &b);
			CT_Shape3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Shape3D& operator=(CT_Shape3D &b);
			~CT_Shape3D();
			std::wstring Xml();
		};

		class CT_FlatText {
		public:
		//elements

		//attributes
			ST_Coordinate z;
		public:
		//end
			CT_FlatText();
			CT_FlatText(CT_FlatText &b);
			CT_FlatText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FlatText& operator=(CT_FlatText &b);
			~CT_FlatText();
			std::wstring Xml();
		};

		class EG_Text3D {
		private:
			std::shared_ptr<CT_Shape3D> _sp3d;
			std::shared_ptr<CT_FlatText> _flatTx;
			int type;
		public:
			EG_Text3D();
			EG_Text3D& operator=(std::shared_ptr<CT_Shape3D> __sp3d);
			EG_Text3D& operator=(std::shared_ptr<CT_FlatText> __flatTx);
			std::shared_ptr<CT_Shape3D> sp3d();
			std::shared_ptr<CT_FlatText> flatTx();
		};

		class CT_AlphaBiLevelEffect {
		public:
		//elements

		//attributes
			ST_PositiveFixedPercentage thresh;
		public:
		//end
			CT_AlphaBiLevelEffect(ST_PositiveFixedPercentage _thresh);
			CT_AlphaBiLevelEffect(CT_AlphaBiLevelEffect &b);
			CT_AlphaBiLevelEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaBiLevelEffect& operator=(CT_AlphaBiLevelEffect &b);
			~CT_AlphaBiLevelEffect();
			std::wstring Xml();
		};

		class CT_AlphaCeilingEffect {
		public:
		//elements

		//attributes

		public:
		//end
			CT_AlphaCeilingEffect();
			CT_AlphaCeilingEffect(CT_AlphaCeilingEffect &b);
			CT_AlphaCeilingEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaCeilingEffect& operator=(CT_AlphaCeilingEffect &b);
			~CT_AlphaCeilingEffect();
			std::wstring Xml();
		};

		class CT_AlphaFloorEffect {
		public:
		//elements

		//attributes

		public:
		//end
			CT_AlphaFloorEffect();
			CT_AlphaFloorEffect(CT_AlphaFloorEffect &b);
			CT_AlphaFloorEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaFloorEffect& operator=(CT_AlphaFloorEffect &b);
			~CT_AlphaFloorEffect();
			std::wstring Xml();
		};

		class CT_AlphaInverseEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;//optional
		public:
		//attributes

		public:
		//end
			CT_AlphaInverseEffect();
			CT_AlphaInverseEffect(CT_AlphaInverseEffect &b);
			CT_AlphaInverseEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaInverseEffect& operator=(CT_AlphaInverseEffect &b);
			~CT_AlphaInverseEffect();
			std::wstring Xml();
		};

		class CT_AlphaModulateFixedEffect {
		public:
		//elements

		//attributes
			ST_PositivePercentage amt;
		public:
		//end
			CT_AlphaModulateFixedEffect();
			CT_AlphaModulateFixedEffect(CT_AlphaModulateFixedEffect &b);
			CT_AlphaModulateFixedEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaModulateFixedEffect& operator=(CT_AlphaModulateFixedEffect &b);
			~CT_AlphaModulateFixedEffect();
			std::wstring Xml();
		};

		class CT_AlphaOutsetEffect {
		public:
		//elements

		//attributes
			ST_Coordinate rad;
		public:
		//end
			CT_AlphaOutsetEffect();
			CT_AlphaOutsetEffect(CT_AlphaOutsetEffect &b);
			CT_AlphaOutsetEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaOutsetEffect& operator=(CT_AlphaOutsetEffect &b);
			~CT_AlphaOutsetEffect();
			std::wstring Xml();
		};

		class CT_AlphaReplaceEffect {
		public:
		//elements

		//attributes
			ST_PositiveFixedPercentage a;
		public:
		//end
			CT_AlphaReplaceEffect(CT_AlphaReplaceEffect &b);
			CT_AlphaReplaceEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaReplaceEffect& operator=(CT_AlphaReplaceEffect &b);
			~CT_AlphaReplaceEffect();
			std::wstring Xml();
		};

		class CT_BiLevelEffect {
		public:
		//elements

		//attributes
			ST_PositiveFixedPercentage thresh;
		public:
		//end
			CT_BiLevelEffect(ST_PositiveFixedPercentage _thresh);
			CT_BiLevelEffect(CT_BiLevelEffect &b);
			CT_BiLevelEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BiLevelEffect& operator=(CT_BiLevelEffect &b);
			~CT_BiLevelEffect();
			std::wstring Xml();
		};

		class CT_BlurEffect {
		public:
		//elements

		//attributes
			ST_PositiveCoordinate rad;
			Bool grow;
		public:
		//end
			CT_BlurEffect();
			CT_BlurEffect(CT_BlurEffect &b);
			CT_BlurEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BlurEffect& operator=(CT_BlurEffect &b);
			~CT_BlurEffect();
			std::wstring Xml();
		};

		class CT_ColorChangeEffect {
		public:
		//elements
			std::shared_ptr<CT_Color> clrFrom;
			std::shared_ptr<CT_Color> clrTo;
		//attributes
			Bool useA;
		public:
		//end
			CT_ColorChangeEffect(std::shared_ptr<CT_Color> _clrFrom,	std::shared_ptr<CT_Color> _clrTo);
			CT_ColorChangeEffect(CT_ColorChangeEffect &b);
			CT_ColorChangeEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorChangeEffect& operator=(CT_ColorChangeEffect &b);
			~CT_ColorChangeEffect();
			std::wstring Xml();
		};

		class CT_ColorReplaceEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes

		public:
		//end
			CT_ColorReplaceEffect(std::shared_ptr<EG_ColorChoice> _colorChoice);
			CT_ColorReplaceEffect(CT_ColorReplaceEffect &b);
			CT_ColorReplaceEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorReplaceEffect& operator=(CT_ColorReplaceEffect &b);
			~CT_ColorReplaceEffect();
			std::wstring Xml();
		};

		class CT_DuotoneEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice[2];
		//attributes

		public:
		//end
			CT_DuotoneEffect();
			CT_DuotoneEffect(CT_DuotoneEffect &b);
			CT_DuotoneEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_DuotoneEffect& operator=(CT_DuotoneEffect &b);
			~CT_DuotoneEffect();
			std::wstring Xml();
		};

		class CT_GlowEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes

		public:
		//end
			CT_GlowEffect(std::shared_ptr<EG_ColorChoice> &_colorChoice);
			CT_GlowEffect(CT_GlowEffect &b);
			CT_GlowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GlowEffect& operator=(CT_GlowEffect &b);
			~CT_GlowEffect();
			std::wstring Xml();
		};

		class CT_GrayscaleEffect {
		public:
		//elements

		//attributes

		public:
		//end
			CT_GrayscaleEffect();
			CT_GrayscaleEffect(CT_GrayscaleEffect &b);
			CT_GrayscaleEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GrayscaleEffect& operator=(CT_GrayscaleEffect &b);
			~CT_GrayscaleEffect();
			std::wstring Xml();
		};

		class CT_HSLEffect {
		public:
		//elements

		//attributes
			ST_PositiveFixedAngle hue;
			ST_FixedPercentage sat;
			ST_FixedPercentage lum;
		public:
		//end
			CT_HSLEffect();
			CT_HSLEffect(CT_HSLEffect &b);
			CT_HSLEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_HSLEffect& operator=(CT_HSLEffect &b);
			~CT_HSLEffect();
			std::wstring Xml();
		};

		class CT_InnerShadowEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes
			ST_PositiveCoordinate blurRad;
			ST_PositiveCoordinate dist;
			ST_PositiveFixedAngle dir;
		public:
		//end
			CT_InnerShadowEffect(std::shared_ptr<EG_ColorChoice> &_colorChoice);
			CT_InnerShadowEffect(CT_InnerShadowEffect &b);
			CT_InnerShadowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_InnerShadowEffect& operator=(CT_InnerShadowEffect &b);
			~CT_InnerShadowEffect();
			std::wstring Xml();
		};

		class CT_LuminanceEffect {
		public:
		//elements

		//attributes
			ST_FixedPercentage bright;
			ST_FixedPercentage contrast;
		public:
		//end
			CT_LuminanceEffect();
			CT_LuminanceEffect(CT_LuminanceEffect &b);
			CT_LuminanceEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LuminanceEffect& operator=(CT_LuminanceEffect &b);
			~CT_LuminanceEffect();
			std::wstring Xml();
		};

		class CT_OuterShadowEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes
			ST_PositiveCoordinate blurRad;
			ST_PositiveCoordinate dist;
			ST_PositiveFixedAngle dir;
			ST_Percentage sx;
			ST_Percentage sy;
			ST_FixedAngle kx;
			ST_FixedAngle ky;
			ST_RectAlignment algn;
			Bool rotWithShape;
		public:
		//end
			CT_OuterShadowEffect(std::shared_ptr<EG_ColorChoice> &_colorChoice);
			CT_OuterShadowEffect(CT_OuterShadowEffect &b);
			CT_OuterShadowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_OuterShadowEffect& operator=(CT_OuterShadowEffect &b);
			~CT_OuterShadowEffect();
			std::wstring Xml();
		};

		class ST_PresetShadowVal {
		public:
		//end
			enum value {
				shdw1,
				shdw2,
				shdw3,
				shdw4,
				shdw5,
				shdw6,
				shdw7,
				shdw8,
				shdw9,
				shdw10,
				shdw11,
				shdw12,
				shdw13,
				shdw14,
				shdw15,
				shdw16,
				shdw17,
				shdw18,
				shdw19,
				shdw20
			};
			value v;
		public:
		//end
			ST_PresetShadowVal(value _v);
			ST_PresetShadowVal(std::wstring b);
			ST_PresetShadowVal(ST_PresetShadowVal &b);
			ST_PresetShadowVal& operator=(value _v);
			ST_PresetShadowVal& operator =( ST_PresetShadowVal& b);
			ST_PresetShadowVal& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring() const;
		};

		class CT_PresetShadowEffect {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes
			ST_PresetShadowVal prst;
			ST_PositiveCoordinate dist;
			ST_PositiveFixedAngle dir;
		public:
		//end
			CT_PresetShadowEffect(std::shared_ptr<EG_ColorChoice> &_colorChoice,ST_PresetShadowVal &_prst);
			CT_PresetShadowEffect(CT_PresetShadowEffect &b);
			CT_PresetShadowEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PresetShadowEffect& operator=(CT_PresetShadowEffect &b);
			~CT_PresetShadowEffect();
			std::wstring Xml();
		};

		class CT_ReflectionEffect {
		public:
		//elements

		//attributes
			ST_PositiveCoordinate blurRad;
			ST_PositiveFixedPercentage stA;
			ST_PositiveFixedPercentage stPos;
			ST_PositiveFixedPercentage endA;
			ST_PositiveFixedPercentage endPos;
			ST_PositiveCoordinate dist;
			ST_PositiveFixedAngle dir;
			ST_PositiveFixedAngle fadeDir;
			ST_Percentage sx;
			ST_Percentage sy;
			ST_FixedAngle kx;
			ST_FixedAngle ky;
			ST_RectAlignment algn;
			Bool rotWithShape;
		public:
		//end
			CT_ReflectionEffect();
			CT_ReflectionEffect(CT_ReflectionEffect &b);
			CT_ReflectionEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ReflectionEffect& operator=(CT_ReflectionEffect &b);
			~CT_ReflectionEffect();
			std::wstring Xml();
		};

		class CT_RelativeOffsetEffect {
		public:
		//elements

		//attributes
			ST_Percentage tx;
			ST_Percentage ty;
		public:
		//end
			CT_RelativeOffsetEffect();
			CT_RelativeOffsetEffect(CT_RelativeOffsetEffect &b);
			CT_RelativeOffsetEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_RelativeOffsetEffect& operator=(CT_RelativeOffsetEffect &b);
			~CT_RelativeOffsetEffect();
			std::wstring Xml();
		};

		class CT_SoftEdgesEffect {
		public:
		//elements

		//attributes
			ST_PositiveCoordinate rad;
		public:
		//end
			CT_SoftEdgesEffect(ST_PositiveCoordinate _rad);
			CT_SoftEdgesEffect(CT_SoftEdgesEffect &b);
			CT_SoftEdgesEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SoftEdgesEffect& operator=(CT_SoftEdgesEffect &b);
			~CT_SoftEdgesEffect();
			std::wstring Xml();
		};

		class CT_TintEffect {
		public:
		//elements

		//attributes
			ST_PositiveFixedAngle hue;
			ST_FixedPercentage amt;
		public:
		//end
			CT_TintEffect();
			CT_TintEffect(CT_TintEffect &b);
			CT_TintEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TintEffect& operator=(CT_TintEffect &b);
			~CT_TintEffect();
			std::wstring Xml();
		};

		class CT_TransformEffect {
		public:
		//elements

		//attributes
			ST_Percentage sx;
			ST_Percentage sy;
			ST_FixedAngle kx;
			ST_FixedAngle ky;
			ST_Coordinate tx;
			ST_Coordinate ty;
		public:
		//end
			CT_TransformEffect();
			CT_TransformEffect(CT_TransformEffect &b);
			CT_TransformEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TransformEffect& operator=(CT_TransformEffect &b);
			~CT_TransformEffect();
			std::wstring Xml();
		};

		class CT_NoFillProperties {
		public:
		//elements

		//attributes

		public:
		//end
			CT_NoFillProperties();
			CT_NoFillProperties(CT_NoFillProperties &b);
			CT_NoFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_NoFillProperties& operator=(CT_NoFillProperties &b);
			~CT_NoFillProperties();
			std::wstring Xml();
		};

		class CT_SolidColorFillProperties {
		public:
		//elements
			EG_ColorChoice colorChoice;
		//attributes

		public:
		//end
			CT_SolidColorFillProperties();
			CT_SolidColorFillProperties(CT_SolidColorFillProperties &b);
			CT_SolidColorFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_SolidColorFillProperties& operator=(CT_SolidColorFillProperties &b);
			~CT_SolidColorFillProperties();
			std::wstring Xml();
		};

		class CT_LinearShadeProperties {
		public:
		//elements

		//attributes
			ST_PositiveFixedAngle ang;
			Bool scaled;
		public:
		//end
			CT_LinearShadeProperties();
			CT_LinearShadeProperties(CT_LinearShadeProperties &b);
			CT_LinearShadeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LinearShadeProperties& operator=(CT_LinearShadeProperties &b);
			~CT_LinearShadeProperties();
			std::wstring Xml();
		};

		class ST_PathShadeType {
		public:
		//end
			enum value {
				shape,
				circle,
				rect
			};
			value v;
		public:
		//end
			ST_PathShadeType(value _v);
			ST_PathShadeType(std::wstring b);
			ST_PathShadeType(ST_PathShadeType &b);
			ST_PathShadeType& operator=(value _v);
			ST_PathShadeType& operator =( ST_PathShadeType& b);
			ST_PathShadeType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_PathShadeProperties {
		public:
		//elements
			std::shared_ptr<CT_RelativeRect> fillToRect;
		//attributes
			ST_PathShadeType path;
		public:
		//end
			CT_PathShadeProperties();
			CT_PathShadeProperties(CT_PathShadeProperties &b);
			CT_PathShadeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PathShadeProperties& operator=(CT_PathShadeProperties &b);
			~CT_PathShadeProperties();
			std::wstring Xml();
		};

		class ST_TileFlipMode {
		public:
		//end
			enum value {
				none,
				x,
				y,
				xy
			};
			value v;
		public:
		//end
			ST_TileFlipMode(value _v);
			ST_TileFlipMode(std::wstring b);
			ST_TileFlipMode(ST_TileFlipMode &b);
			ST_TileFlipMode& operator=(value _v);
			ST_TileFlipMode& operator =(ST_TileFlipMode& b);
			ST_TileFlipMode& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_GradientStop {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes
			ST_PositiveFixedPercentage pos;
		public:
		//end
			CT_GradientStop(std::shared_ptr<EG_ColorChoice> &_colorChoice,ST_PositiveFixedPercentage &_pos);
			CT_GradientStop(CT_GradientStop &b);
			CT_GradientStop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GradientStop& operator=(CT_GradientStop &b);
			~CT_GradientStop();
			std::wstring Xml();
		};

		class CT_GradientStopList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_GradientStop>> gs;
		//attributes

		public:
		//end
			CT_GradientStopList(std::vector<std::shared_ptr<CT_GradientStop>> &_gs);
			CT_GradientStopList(CT_GradientStopList &b);
			CT_GradientStopList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GradientStopList& operator=(CT_GradientStopList &b);
			~CT_GradientStopList();
			std::wstring Xml();
		};

		class EG_ShadeProperties {
		private:
			std::shared_ptr<CT_LinearShadeProperties> _lin;
			std::shared_ptr<CT_PathShadeProperties> _path;
		public:
			EG_ShadeProperties();
			EG_ShadeProperties& operator=(std::shared_ptr<CT_LinearShadeProperties> &__lin);
			EG_ShadeProperties& operator=(std::shared_ptr<CT_PathShadeProperties> &__path);

			std::shared_ptr<CT_LinearShadeProperties> lin();
			std::shared_ptr<CT_PathShadeProperties> path();
		};

		class CT_GradientFillProperties {
		public:
		//elements
			std::shared_ptr<CT_GradientStopList> gsList;
			std::shared_ptr<EG_ShadeProperties> shadeProperties;			
			std::shared_ptr<CT_RelativeRect> tileRect;
		//attributes
			ST_TileFlipMode flip;
			Bool rotWithShape;
		public:
		//end
			CT_GradientFillProperties();
			CT_GradientFillProperties(CT_GradientFillProperties &b);
			CT_GradientFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GradientFillProperties& operator=(CT_GradientFillProperties &b);
			~CT_GradientFillProperties();
			std::wstring Xml();
		};

		class CT_TileInfoProperties {
		public:
		//elements

		//attributes
			ST_Coordinate tx;
			ST_Coordinate ty;
			ST_Percentage sx;
			ST_Percentage sy;
			ST_TileFlipMode flip;
			ST_RectAlignment algn;
		public:
		//end
			CT_TileInfoProperties();
			CT_TileInfoProperties(CT_TileInfoProperties &b);
			CT_TileInfoProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TileInfoProperties& operator=(CT_TileInfoProperties &b);
			~CT_TileInfoProperties();
			std::wstring Xml();
		};

		class CT_StretchInfoProperties {
		public:
		//elements
			std::shared_ptr<CT_RelativeRect> fillRect;
		//attributes

		public:
		//end
			CT_StretchInfoProperties();
			CT_StretchInfoProperties(CT_StretchInfoProperties &b);
			CT_StretchInfoProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_StretchInfoProperties& operator=(CT_StretchInfoProperties &b);
			~CT_StretchInfoProperties();
			std::wstring Xml();
		};

		class EG_FillModeProperties {
		private:
			std::shared_ptr<CT_TileInfoProperties> _tile;
			std::shared_ptr<CT_StretchInfoProperties> _stretch;
			int type;
		public:
			EG_FillModeProperties();
			EG_FillModeProperties& operator=(std::shared_ptr<CT_TileInfoProperties> __tile);
			EG_FillModeProperties& operator=(std::shared_ptr<CT_StretchInfoProperties> __stretch);
			std::shared_ptr<CT_TileInfoProperties> tile();
			std::shared_ptr<CT_StretchInfoProperties> stretch();
		};

		class ST_BlipCompression {
		public:
		//end
			enum value {
				email,
				screen,
				print,
				hqprint,
				none
			};
			value v;
		public:
		//end
			ST_BlipCompression(value _v);
			ST_BlipCompression(std::wstring b);
			ST_BlipCompression(ST_BlipCompression &b);
			ST_BlipCompression& operator=(value _v);
			ST_BlipCompression& operator =( ST_BlipCompression& b);
			ST_BlipCompression& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_Blip {
		public:
		//elements
			class Choice {
			private:
				std::shared_ptr<CT_AlphaBiLevelEffect> _alphaBiLevel;
				std::shared_ptr<CT_AlphaCeilingEffect> _alphaCeiling;
				std::shared_ptr<CT_AlphaFloorEffect> _alphaFloor;
				std::shared_ptr<CT_AlphaInverseEffect> _alphaInv;
				std::shared_ptr<CT_AlphaModulateEffect> _alphaMod;
				std::shared_ptr<CT_AlphaModulateFixedEffect> _alphaModFix;
				std::shared_ptr<CT_AlphaReplaceEffect> _alphaRepl;
				std::shared_ptr<CT_BiLevelEffect> _biLevel;
				std::shared_ptr<CT_BlurEffect> _blur;
				std::shared_ptr<CT_ColorChangeEffect> _clrChange;
				std::shared_ptr<CT_ColorReplaceEffect> _clrRepl;
				std::shared_ptr<CT_DuotoneEffect> _duotone;
				std::shared_ptr<CT_FillOverlayEffect> _fillOverlay;
				std::shared_ptr<CT_GrayscaleEffect> _grayscl;
				std::shared_ptr<CT_HSLEffect> _hsl;
				std::shared_ptr<CT_LuminanceEffect> _lum;
				std::shared_ptr<CT_TintEffect> _tint;
			public:
				Choice& operator=(std::shared_ptr<CT_AlphaBiLevelEffect> &__alphaBiLevel);
				Choice& operator=(std::shared_ptr<CT_AlphaCeilingEffect> &__alphaCeiling);
				Choice& operator=(std::shared_ptr<CT_AlphaFloorEffect> &__alphaFloor);
				Choice& operator=(std::shared_ptr<CT_AlphaInverseEffect> &__alphaInv);
				Choice& operator=(std::shared_ptr<CT_AlphaModulateEffect> &__alphaMod);
				Choice& operator=(std::shared_ptr<CT_AlphaModulateFixedEffect> &__alphaModFix);
				Choice& operator=(std::shared_ptr<CT_AlphaReplaceEffect> &__alphaRepl);
				Choice& operator=(std::shared_ptr<CT_BiLevelEffect> &__biLevel);
				Choice& operator=(std::shared_ptr<CT_BlurEffect> &__blur);
				Choice& operator=(std::shared_ptr<CT_ColorChangeEffect> &__clrChange);
				Choice& operator=(std::shared_ptr<CT_ColorReplaceEffect> &__clrRepl);
				Choice& operator=(std::shared_ptr<CT_DuotoneEffect> &__duotone);
				Choice& operator=(std::shared_ptr<CT_FillOverlayEffect> &__fillOverlay);
				Choice& operator=(std::shared_ptr<CT_GrayscaleEffect> &__grayscl);
				Choice& operator=(std::shared_ptr<CT_HSLEffect> &__hsl);
				Choice& operator=(std::shared_ptr<CT_LuminanceEffect> &__lum);
				Choice& operator=(std::shared_ptr<CT_TintEffect> &__tint);
				std::shared_ptr<CT_AlphaBiLevelEffect> alphaBiLevel();
				std::shared_ptr<CT_AlphaCeilingEffect> alphaCeiling();
				std::shared_ptr<CT_AlphaFloorEffect> alphaFloor();
				std::shared_ptr<CT_AlphaInverseEffect> alphaInv();
				std::shared_ptr<CT_AlphaModulateEffect> alphaMod();
				std::shared_ptr<CT_AlphaModulateFixedEffect> alphaModFix();
				std::shared_ptr<CT_AlphaReplaceEffect> alphaRepl();
				std::shared_ptr<CT_BiLevelEffect> biLevel();
				std::shared_ptr<CT_BlurEffect> blur();
				std::shared_ptr<CT_ColorChangeEffect> clrChange();
				std::shared_ptr<CT_ColorReplaceEffect> clrRepl();
				std::shared_ptr<CT_DuotoneEffect> duotone();
				std::shared_ptr<CT_FillOverlayEffect> fillOverlay();
				std::shared_ptr<CT_GrayscaleEffect> grayscl();
				std::shared_ptr<CT_HSLEffect> hsl();
				std::shared_ptr<CT_LuminanceEffect> lum();
				std::shared_ptr<CT_TintEffect> tint();
			};
			std::vector<Choice> choice;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			officeDocument::relationships::ST_RelationshipId embed;
			officeDocument::relationships::ST_RelationshipId link;
			ST_BlipCompression cstate;
		public:
		//end
			CT_Blip();
			CT_Blip(CT_Blip &b);
			CT_Blip(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Blip& operator=(CT_Blip &b);
			~CT_Blip();
			std::wstring Xml();
		};

		class CT_BlipFillProperties {
		public:
		//elements
			std::shared_ptr<CT_Blip> blip;
			std::shared_ptr<CT_RelativeRect> srcRect;
			
			EG_FillModeProperties fillModeProperties;//optional
		//attributes
			UInt dpi;
			Bool rotWithShape;
		public:
		//end
			CT_BlipFillProperties();
			CT_BlipFillProperties(CT_BlipFillProperties &b);
			CT_BlipFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BlipFillProperties& operator=(CT_BlipFillProperties &b);
			~CT_BlipFillProperties();
			std::wstring Xml();
		};

		class ST_PresetPatternVal {
		public:
		//end
			enum value {
				pct5,
				pct10,
				pct20,
				pct25,
				pct30,
				pct40,
				pct50,
				pct60,
				pct70,
				pct75,
				pct80,
				pct90,
				horz,
				vert,
				ltHorz,
				ltVert,
				dkHorz,
				dkVert,
				narHorz,
				narVert,
				dashHorz,
				dashVert,
				cross,
				dnDiag,
				upDiag,
				ltDnDiag,
				ltUpDiag,
				dkDnDiag,
				dkUpDiag,
				wdDnDiag,
				wdUpDiag,
				dashDnDiag,
				dashUpDiag,
				diagCross,
				smCheck,
				lgCheck,
				smGrid,
				lgGrid,
				dotGrid,
				smConfetti,
				lgConfetti,
				horzBrick,
				diagBrick,
				solidDmnd,
				openDmnd,
				dotDmnd,
				plaid,
				sphere,
				weave,
				divot,
				shingle,
				wave,
				trellis,
				zigZag
			};
			value v;
		public:
		//end
			ST_PresetPatternVal(value _v);
			ST_PresetPatternVal(std::wstring b);
			ST_PresetPatternVal(ST_PresetPatternVal &b);
			ST_PresetPatternVal& operator=(value _v);
			ST_PresetPatternVal& operator =( ST_PresetPatternVal& b);
			ST_PresetPatternVal& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_PatternFillProperties {
		public:
		//elements
			std::shared_ptr<CT_Color> fgClr;
			std::shared_ptr<CT_Color> bgClr;
		//attributes
			ST_PresetPatternVal prst;
		public:
		//end
			CT_PatternFillProperties();
			CT_PatternFillProperties(CT_PatternFillProperties &b);
			CT_PatternFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PatternFillProperties& operator=(CT_PatternFillProperties &b);
			~CT_PatternFillProperties();
			std::wstring Xml();
		};

		class CT_GroupFillProperties {
		public:
		//elements

		//attributes

		public:
		//end
			CT_GroupFillProperties();
			CT_GroupFillProperties(CT_GroupFillProperties &b);
			CT_GroupFillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GroupFillProperties& operator=(CT_GroupFillProperties &b);
			~CT_GroupFillProperties();
			std::wstring Xml();
		};


		class CT_FillProperties {
		public:
		//elements
			std::shared_ptr<EG_FillProperties> fillProperties;
		//attributes

		public:
		//end
			CT_FillProperties(std::shared_ptr<EG_FillProperties> &_fillProperties);
			CT_FillProperties(CT_FillProperties &b);
			CT_FillProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FillProperties& operator=(CT_FillProperties &b);
			~CT_FillProperties();
			std::wstring Xml();
		};

		class CT_FillEffect {
		public:
		//elements
			std::shared_ptr<EG_FillProperties> fillProperties;
		//attributes

		public:
		//end
			CT_FillEffect(std::shared_ptr<EG_FillProperties> &_fillProperties);
			CT_FillEffect(CT_FillEffect &b);
			CT_FillEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FillEffect& operator=(CT_FillEffect &b);
			~CT_FillEffect();
			std::wstring Xml();
		};

		class ST_BlendMode {
		public:
		//end
			enum value {
				over,
				mult,
				screen,
				darken,
				lighten
			};
			value v;
		public:
		//end
			ST_BlendMode();
			ST_BlendMode(value _v);
			ST_BlendMode(std::wstring b);
			ST_BlendMode(ST_BlendMode &b);
			ST_BlendMode& operator=(value _v);
			ST_BlendMode& operator =( ST_BlendMode& b);
			ST_BlendMode& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_FillOverlayEffect {
		public:
		//elements
			std::shared_ptr<EG_FillProperties> fillProperties;
		public:
		//attributes
			ST_BlendMode blend;
		public:
		//end
			CT_FillOverlayEffect(std::shared_ptr<EG_FillProperties> &_fillProperties, ST_BlendMode &_blend);
			CT_FillOverlayEffect(CT_FillOverlayEffect &b);
			CT_FillOverlayEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FillOverlayEffect& operator=(CT_FillOverlayEffect &b);
			~CT_FillOverlayEffect();
			std::wstring Xml();
		};

		class CT_EffectReference {
		public:
		//elements

		//attributes
			std::wstring ref;
		public:
		//end
			CT_EffectReference(std::wstring _ref);
			CT_EffectReference(CT_EffectReference &b);
			CT_EffectReference(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EffectReference& operator=(CT_EffectReference &b);
			~CT_EffectReference();
			std::wstring Xml();
		};

		class ST_EffectContainerType {
		public:
		//end
			enum value {
				sib,
				tree
			};
			value v;
		public:
		//end
			ST_EffectContainerType(value _v);
			ST_EffectContainerType(std::wstring b);
			ST_EffectContainerType(ST_EffectContainerType &b);
			ST_EffectContainerType& operator=(value _v);
			ST_EffectContainerType& operator =( ST_EffectContainerType& b);
			ST_EffectContainerType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class EG_Effect {
		private:
			std::shared_ptr<CT_EffectContainer> _cont;
			std::shared_ptr<CT_EffectReference> _effect;
			std::shared_ptr<CT_AlphaBiLevelEffect> _alphaBiLevel;
			std::shared_ptr<CT_AlphaCeilingEffect> _alphaCeiling;
			std::shared_ptr<CT_AlphaFloorEffect> _alphaFloor;
			std::shared_ptr<CT_AlphaInverseEffect> _alphaInv;
			std::shared_ptr<CT_AlphaModulateEffect> _alphaMod;
			std::shared_ptr<CT_AlphaModulateFixedEffect> _alphaModFix;
			std::shared_ptr<CT_AlphaOutsetEffect> _alphaOutset;
			std::shared_ptr<CT_AlphaReplaceEffect> _alphaRepl;
			std::shared_ptr<CT_BiLevelEffect> _biLevel;
			std::shared_ptr<CT_BlendEffect> _blend;
			std::shared_ptr<CT_BlurEffect> _blur;
			std::shared_ptr<CT_ColorChangeEffect> _clrChange;
			std::shared_ptr<CT_ColorReplaceEffect> _clrRepl;
			std::shared_ptr<CT_DuotoneEffect> _duotone;
			std::shared_ptr<CT_FillEffect> _fill;
			std::shared_ptr<CT_FillOverlayEffect> _fillOverlay;
			std::shared_ptr<CT_GlowEffect> _glow;
			std::shared_ptr<CT_GrayscaleEffect> _grayscl;
			std::shared_ptr<CT_HSLEffect> _hsl;
			std::shared_ptr<CT_InnerShadowEffect> _innerShdw;
			std::shared_ptr<CT_LuminanceEffect> _lum;
			std::shared_ptr<CT_OuterShadowEffect> _outerShdw;
			std::shared_ptr<CT_PresetShadowEffect> _prstShdw;
			std::shared_ptr<CT_ReflectionEffect> _reflection;
			std::shared_ptr<CT_RelativeOffsetEffect> _relOff;
			std::shared_ptr<CT_SoftEdgesEffect> _softEdge;
			std::shared_ptr<CT_TintEffect> _tint;
			std::shared_ptr<CT_TransformEffect> _xfrm;
		public:
			EG_Effect();

			EG_Effect& operator=(std::shared_ptr<CT_EffectContainer> &__cont);
			EG_Effect& operator=(std::shared_ptr<CT_EffectReference> &__effect);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaBiLevelEffect> &__alphaBiLevel);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaCeilingEffect> &__alphaCeiling);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaFloorEffect> &__alphaFloor);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaInverseEffect> &__alphaInv);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaModulateEffect> &__alphaMod);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaModulateFixedEffect> &__alphaModFix);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaOutsetEffect> &__alphaOutset);
			EG_Effect& operator=(std::shared_ptr<CT_AlphaReplaceEffect> &__alphaRepl);
			EG_Effect& operator=(std::shared_ptr<CT_BiLevelEffect> &__biLevel);
			EG_Effect& operator=(std::shared_ptr<CT_BlendEffect> &__blend);
			EG_Effect& operator=(std::shared_ptr<CT_BlurEffect> &__blur);
			EG_Effect& operator=(std::shared_ptr<CT_ColorChangeEffect> &__clrChange);
			EG_Effect& operator=(std::shared_ptr<CT_ColorReplaceEffect> &__clrRepl);
			EG_Effect& operator=(std::shared_ptr<CT_DuotoneEffect> &__duotone);
			EG_Effect& operator=(std::shared_ptr<CT_FillEffect> &__fill);
			EG_Effect& operator=(std::shared_ptr<CT_FillOverlayEffect> &__fillOverlay);
			EG_Effect& operator=(std::shared_ptr<CT_GlowEffect> &__glow);
			EG_Effect& operator=(std::shared_ptr<CT_GrayscaleEffect> &__grayscl);
			EG_Effect& operator=(std::shared_ptr<CT_HSLEffect> &__hsl);
			EG_Effect& operator=(std::shared_ptr<CT_InnerShadowEffect> &__innerShdw);
			EG_Effect& operator=(std::shared_ptr<CT_LuminanceEffect> &__lum);
			EG_Effect& operator=(std::shared_ptr<CT_OuterShadowEffect> &__outerShdw);
			EG_Effect& operator=(std::shared_ptr<CT_PresetShadowEffect> &__prstShdw);
			EG_Effect& operator=(std::shared_ptr<CT_ReflectionEffect> &__reflection);
			EG_Effect& operator=(std::shared_ptr<CT_RelativeOffsetEffect> &__relOff);
			EG_Effect& operator=(std::shared_ptr<CT_SoftEdgesEffect> &__softEdge);
			EG_Effect& operator=(std::shared_ptr<CT_TintEffect> &__tint);
			EG_Effect& operator=(std::shared_ptr<CT_TransformEffect> &__xfrm);

			std::shared_ptr<CT_EffectContainer> cont();
			std::shared_ptr<CT_EffectReference> effect();
			std::shared_ptr<CT_AlphaBiLevelEffect> alphaBiLevel();
			std::shared_ptr<CT_AlphaCeilingEffect> alphaCeiling();
			std::shared_ptr<CT_AlphaFloorEffect> alphaFloor();
			std::shared_ptr<CT_AlphaInverseEffect> alphaInv();
			std::shared_ptr<CT_AlphaModulateEffect> alphaMod();
			std::shared_ptr<CT_AlphaModulateFixedEffect> alphaModFix();
			std::shared_ptr<CT_AlphaOutsetEffect> alphaOutset();
			std::shared_ptr<CT_AlphaReplaceEffect> alphaRepl();
			std::shared_ptr<CT_BiLevelEffect> biLevel();
			std::shared_ptr<CT_BlendEffect> blend();
			std::shared_ptr<CT_BlurEffect> blur();
			std::shared_ptr<CT_ColorChangeEffect> clrChange();
			std::shared_ptr<CT_ColorReplaceEffect> clrRepl();
			std::shared_ptr<CT_DuotoneEffect> duotone();
			std::shared_ptr<CT_FillEffect> fill();
			std::shared_ptr<CT_FillOverlayEffect> fillOverlay();
			std::shared_ptr<CT_GlowEffect> glow();
			std::shared_ptr<CT_GrayscaleEffect> grayscl();
			std::shared_ptr<CT_HSLEffect> hsl();
			std::shared_ptr<CT_InnerShadowEffect> innerShdw();
			std::shared_ptr<CT_LuminanceEffect> lum();
			std::shared_ptr<CT_OuterShadowEffect> outerShdw();
			std::shared_ptr<CT_PresetShadowEffect> prstShdw();
			std::shared_ptr<CT_ReflectionEffect> reflection();
			std::shared_ptr<CT_RelativeOffsetEffect> relOff();
			std::shared_ptr<CT_SoftEdgesEffect> softEdge();
			std::shared_ptr<CT_TintEffect> tint();
			std::shared_ptr<CT_TransformEffect> xfrm();
		};

		class CT_EffectContainer {
		public:
		//elements
			std::vector<std::shared_ptr<EG_Effect>> effect;

		//attributes
			ST_EffectContainerType type;
			std::wstring name;
		public:
		//end
			CT_EffectContainer();
			CT_EffectContainer(CT_EffectContainer &b);
			CT_EffectContainer(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EffectContainer& operator=(CT_EffectContainer &b);
			~CT_EffectContainer();
			std::wstring Xml();
		};

		class CT_AlphaModulateEffect {
		public:
		//elements
			std::shared_ptr<CT_EffectContainer> cont;
		//attributes

		public:
		//end
			CT_AlphaModulateEffect(std::shared_ptr<CT_EffectContainer> &_cont);
			CT_AlphaModulateEffect(CT_AlphaModulateEffect &b);
			CT_AlphaModulateEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AlphaModulateEffect& operator=(CT_AlphaModulateEffect &b);
			~CT_AlphaModulateEffect();
			std::wstring Xml();
		};

		class CT_BlendEffect {
		public:
		//elements
			std::shared_ptr<CT_EffectContainer> cont;
		//attributes
			ST_BlendMode blend;
		public:
		//end
			CT_BlendEffect(std::shared_ptr<CT_EffectContainer> &_cont,ST_BlendMode &_blend);
			CT_BlendEffect(CT_BlendEffect &b);
			CT_BlendEffect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BlendEffect& operator=(CT_BlendEffect &b);
			~CT_BlendEffect();
			std::wstring Xml();
		};

		class CT_EffectList {
		public:
		//elements
			std::shared_ptr<CT_BlurEffect> blur;
			std::shared_ptr<CT_FillOverlayEffect> fillOverlay;
			std::shared_ptr<CT_GlowEffect> glow;
			std::shared_ptr<CT_InnerShadowEffect> innerShdw;
			std::shared_ptr<CT_OuterShadowEffect> outerShdw;
			std::shared_ptr<CT_PresetShadowEffect> prstShdw;
			std::shared_ptr<CT_ReflectionEffect> reflection;
			std::shared_ptr<CT_SoftEdgesEffect> softEdge;
		//attributes

		public:
		//end
			CT_EffectList();
			CT_EffectList(CT_EffectList &b);
			CT_EffectList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EffectList& operator=(CT_EffectList &b);
			~CT_EffectList();
			std::wstring Xml();
		};

		class CT_EffectProperties {
		public:
		//elements
			std::shared_ptr<EG_EffectProperties> effectProperties;
		//attributes

		public:
		//end
			CT_EffectProperties(std::shared_ptr<EG_EffectProperties> &_effectProperties);
			CT_EffectProperties(CT_EffectProperties &b);
			CT_EffectProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EffectProperties& operator=(CT_EffectProperties &b);
			~CT_EffectProperties();
			std::wstring Xml();
		};

		class ST_ShapeType {
		public:
		//end
			enum value {
				line,
				lineInv,
				triangle,
				rtTriangle,
				rect,
				diamond,
				parallelogram,
				trapezoid,
				nonIsoscelesTrapezoid,
				pentagon,
				hexagon,
				heptagon,
				octagon,
				decagon,
				dodecagon,
				star4,
				star5,
				star6,
				star7,
				star8,
				star10,
				star12,
				star16,
				star24,
				star32,
				roundRect,
				round1Rect,
				round2SameRect,
				round2DiagRect,
				snipRoundRect,
				snip1Rect,
				snip2SameRect,
				snip2DiagRect,
				plaque,
				ellipse,
				teardrop,
				homePlate,
				chevron,
				pieWedge,
				pie,
				blockArc,
				donut,
				noSmoking,
				rightArrow,
				leftArrow,
				upArrow,
				downArrow,
				stripedRightArrow,
				notchedRightArrow,
				bentUpArrow,
				leftRightArrow,
				upDownArrow,
				leftUpArrow,
				leftRightUpArrow,
				quadArrow,
				leftArrowCallout,
				rightArrowCallout,
				upArrowCallout,
				downArrowCallout,
				leftRightArrowCallout,
				upDownArrowCallout,
				quadArrowCallout,
				bentArrow,
				uturnArrow,
				circularArrow,
				leftCircularArrow,
				leftRightCircularArrow,
				curvedRightArrow,
				curvedLeftArrow,
				curvedUpArrow,
				curvedDownArrow,
				swooshArrow,
				cube,
				can,
				lightningBolt,
				heart,
				sun,
				moon,
				smileyFace,
				irregularSeal1,
				irregularSeal2,
				foldedCorner,
				bevel,
				frame,
				halfFrame,
				corner,
				diagStripe,
				chord,
				arc,
				leftBracket,
				rightBracket,
				leftBrace,
				rightBrace,
				bracketPair,
				bracePair,
				straightConnector1,
				bentConnector2,
				bentConnector3,
				bentConnector4,
				bentConnector5,
				curvedConnector2,
				curvedConnector3,
				curvedConnector4,
				curvedConnector5,
				callout1,
				callout2,
				callout3,
				accentCallout1,
				accentCallout2,
				accentCallout3,
				borderCallout1,
				borderCallout2,
				borderCallout3,
				accentBorderCallout1,
				accentBorderCallout2,
				accentBorderCallout3,
				wedgeRectCallout,
				wedgeRoundRectCallout,
				wedgeEllipseCallout,
				cloudCallout,
				cloud,
				ribbon,
				ribbon2,
				ellipseRibbon,
				ellipseRibbon2,
				leftRightRibbon,
				verticalScroll,
				horizontalScroll,
				wave,
				doubleWave,
				plus,
				flowChartProcess,
				flowChartDecision,
				flowChartInputOutput,
				flowChartPredefinedProcess,
				flowChartInternalStorage,
				flowChartDocument,
				flowChartMultidocument,
				flowChartTerminator,
				flowChartPreparation,
				flowChartManualInput,
				flowChartManualOperation,
				flowChartConnector,
				flowChartPunchedCard,
				flowChartPunchedTape,
				flowChartSummingJunction,
				flowChartOr,
				flowChartCollate,
				flowChartSort,
				flowChartExtract,
				flowChartMerge,
				flowChartOfflineStorage,
				flowChartOnlineStorage,
				flowChartMagneticTape,
				flowChartMagneticDisk,
				flowChartMagneticDrum,
				flowChartDisplay,
				flowChartDelay,
				flowChartAlternateProcess,
				flowChartOffpageConnector,
				actionButtonBlank,
				actionButtonHome,
				actionButtonHelp,
				actionButtonInformation,
				actionButtonForwardNext,
				actionButtonBackPrevious,
				actionButtonEnd,
				actionButtonBeginning,
				actionButtonReturn,
				actionButtonDocument,
				actionButtonSound,
				actionButtonMovie,
				gear6,
				gear9,
				funnel,
				mathPlus,
				mathMinus,
				mathMultiply,
				mathDivide,
				mathEqual,
				mathNotEqual,
				cornerTabs,
				squareTabs,
				plaqueTabs,
				chartX,
				chartStar,
				chartPlus
			};
			value v;
		public:
		//end
			ST_ShapeType(value _v);
			ST_ShapeType(std::wstring b);
			ST_ShapeType(ST_ShapeType &b);
			ST_ShapeType& operator=(value _v);
			ST_ShapeType& operator =( ST_ShapeType& b);
			ST_ShapeType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextShapeType {
		public:
		//end
			enum value {
				textNoShape,
				textPlain,
				textStop,
				textTriangle,
				textTriangleInverted,
				textChevron,
				textChevronInverted,
				textRingInside,
				textRingOutside,
				textArchUp,
				textArchDown,
				textCircle,
				textButton,
				textArchUpPour,
				textArchDownPour,
				textCirclePour,
				textButtonPour,
				textCurveUp,
				textCurveDown,
				textCanUp,
				textCanDown,
				textWave1,
				textWave2,
				textDoubleWave1,
				textWave4,
				textInflate,
				textDeflate,
				textInflateBottom,
				textDeflateBottom,
				textInflateTop,
				textDeflateTop,
				textDeflateInflate,
				textDeflateInflateDeflate,
				textFadeRight,
				textFadeLeft,
				textFadeUp,
				textFadeDown,
				textSlantUp,
				textSlantDown,
				textCascadeUp,
				textCascadeDown
			};
			value v;
		public:
		//end
			ST_TextShapeType(value _v);
			ST_TextShapeType(std::wstring b);
			ST_TextShapeType(ST_TextShapeType &b);
			ST_TextShapeType& operator=(value _v);
			ST_TextShapeType& operator =( ST_TextShapeType& b);
			ST_TextShapeType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_GeomGuide {
		public:
		//elements

		//attributes
			ST_GeomGuideName name;
			ST_GeomGuideFormula fmla;
		public:
		//end
			CT_GeomGuide(ST_GeomGuideName _name,	ST_GeomGuideFormula _fmla);
			CT_GeomGuide(CT_GeomGuide &b);
			CT_GeomGuide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GeomGuide& operator=(CT_GeomGuide &b);
			~CT_GeomGuide();
			std::wstring Xml();
		};

		class CT_GeomGuideList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_GeomGuide>> gd;
		//attributes

		public:
		//end
			CT_GeomGuideList();
			CT_GeomGuideList(CT_GeomGuideList &b);
			CT_GeomGuideList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GeomGuideList& operator=(CT_GeomGuideList &b);
			~CT_GeomGuideList();
			std::wstring Xml();
		};

		class ST_AdjCoordinate {
		private:
		//end
			ST_Coordinate _c;
			ST_GeomGuideName _g;
		public:
			ST_AdjCoordinate();
			ST_AdjCoordinate(ST_Coordinate &__c);
			ST_AdjCoordinate(ST_GeomGuideName &__g);
			ST_AdjCoordinate(ST_AdjCoordinate &b);
			ST_AdjCoordinate& operator =(ST_AdjCoordinate& b);
			ST_AdjCoordinate& operator =(std::wstring b);
			ST_AdjCoordinate& operator=(ST_Coordinate &__c);
			ST_AdjCoordinate& operator=(ST_GeomGuideName &__g);
			ST_Coordinate c();
			ST_GeomGuideName g();
			//operator ST_Coordinate() const;
			//operator ST_GeomGuideName () const;
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_AdjAngle {
		private:
			//end
			ST_Angle _a;
			ST_GeomGuideName _g;
		public:
		//end
			ST_AdjAngle(ST_Angle &__a);
			ST_AdjAngle(ST_GeomGuideName &__g);
			ST_AdjAngle(ST_AdjAngle &b);
			ST_AdjAngle& operator =( ST_AdjAngle& b);
			ST_AdjAngle& operator =(std::wstring b);
			ST_AdjAngle& operator =(ST_Angle &__a);
			ST_AdjAngle& operator =(ST_GeomGuideName &__g);
			ST_Angle a();
			ST_GeomGuideName g();
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_AdjPoint2D {
		public:
		//elements

		//attributes
			ST_AdjCoordinate x;
			ST_AdjCoordinate y;
		public:
		//end
			CT_AdjPoint2D(ST_AdjCoordinate &_x, ST_AdjCoordinate &_y);
			CT_AdjPoint2D(CT_AdjPoint2D &b);
			CT_AdjPoint2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AdjPoint2D& operator=(CT_AdjPoint2D &b);
			~CT_AdjPoint2D();
			std::wstring Xml();
		};

		class CT_GeomRect {
		public:
		//elements

		//attributes
			ST_AdjCoordinate l;
			ST_AdjCoordinate t;
			ST_AdjCoordinate r;
			ST_AdjCoordinate b;
		public:
		//end
			CT_GeomRect(ST_AdjCoordinate &_l,	ST_AdjCoordinate &_t,	ST_AdjCoordinate &_r,	ST_AdjCoordinate &_b);
			CT_GeomRect(CT_GeomRect &b);
			CT_GeomRect(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GeomRect& operator=(CT_GeomRect &b);
			~CT_GeomRect();
			std::wstring Xml();
		};

		class CT_XYAdjustHandle {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pos;
		//attributes
			ST_GeomGuideName gdRefX;
			ST_AdjCoordinate minX;
			ST_AdjCoordinate maxX;
			ST_GeomGuideName gdRefY;
			ST_AdjCoordinate minY;
			ST_AdjCoordinate maxY;
		public:
		//end
			CT_XYAdjustHandle(std::shared_ptr<CT_AdjPoint2D> &_pos);
			CT_XYAdjustHandle(CT_XYAdjustHandle &b);
			CT_XYAdjustHandle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_XYAdjustHandle& operator=(CT_XYAdjustHandle &b);
			~CT_XYAdjustHandle();
			std::wstring Xml();
		};

		class CT_PolarAdjustHandle {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pos;
		//attributes
			ST_GeomGuideName gdRefR;
			ST_AdjCoordinate minR;
			ST_AdjCoordinate maxR;
			ST_GeomGuideName gdRefAng;
			ST_AdjAngle minAng;
			ST_AdjAngle maxAng;
		public:
		//end
			CT_PolarAdjustHandle(std::shared_ptr<CT_AdjPoint2D> &_pos);
			CT_PolarAdjustHandle(CT_PolarAdjustHandle &b);
			CT_PolarAdjustHandle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PolarAdjustHandle& operator=(CT_PolarAdjustHandle &b);
			~CT_PolarAdjustHandle();
			std::wstring Xml();
		};

		class CT_ConnectionSite {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pos;
		//attributes
			ST_AdjAngle ang;
		public:
		//end
			CT_ConnectionSite(std::shared_ptr<CT_AdjPoint2D> &_pos,ST_AdjAngle &_ang);
			CT_ConnectionSite(CT_ConnectionSite &b);
			CT_ConnectionSite(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ConnectionSite& operator=(CT_ConnectionSite &b);
			~CT_ConnectionSite();
			std::wstring Xml();
		};

		class CT_AdjustHandleList {
		public:
		//elements
			class Choice {
			private:
				std::shared_ptr<CT_XYAdjustHandle> _ahXH;
				std::shared_ptr<CT_PolarAdjustHandle> _ahPolar;
			public:
				Choice();
				Choice& operator=(std::shared_ptr<CT_XYAdjustHandle> &__ahXH);
				Choice& operator=(std::shared_ptr<CT_PolarAdjustHandle> &__ahPolar);
				std::shared_ptr<CT_XYAdjustHandle> ahXH();
				std::shared_ptr<CT_PolarAdjustHandle> ahPolar();
			};
			Choice choice;
		//attributes

		public:
		//end
			CT_AdjustHandleList();
			CT_AdjustHandleList(CT_AdjustHandleList &b);
			CT_AdjustHandleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_AdjustHandleList& operator=(CT_AdjustHandleList &b);
			~CT_AdjustHandleList();
			std::wstring Xml();
		};

		class CT_ConnectionSiteList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_ConnectionSite>> cxn;
		//attributes

		public:
		//end
			CT_ConnectionSiteList();
			CT_ConnectionSiteList(CT_ConnectionSiteList &b);
			CT_ConnectionSiteList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ConnectionSiteList& operator=(CT_ConnectionSiteList &b);
			~CT_ConnectionSiteList();
			std::wstring Xml();
		};

		class CT_Connection {
		public:
		//elements

		//attributes
			ST_DrawingElementId id;
			UInt idx;
		public:
		//end
			CT_Connection(ST_DrawingElementId &_id,	UInt &_idx);
			CT_Connection(CT_Connection &b);
			CT_Connection(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Connection& operator=(CT_Connection &b);
			~CT_Connection();
			std::wstring Xml();
		};

		class CT_Path2DMoveTo {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pt;
		//attributes

		public:
		//end
			CT_Path2DMoveTo(std::shared_ptr<CT_AdjPoint2D> &_pt);
			CT_Path2DMoveTo(CT_Path2DMoveTo &b);
			CT_Path2DMoveTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DMoveTo& operator=(CT_Path2DMoveTo &b);
			~CT_Path2DMoveTo();
			std::wstring Xml();
		};

		class CT_Path2DLineTo {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pt;
		//attributes

		public:
		//end
			CT_Path2DLineTo(std::shared_ptr<CT_AdjPoint2D> &_pt);
			CT_Path2DLineTo(CT_Path2DLineTo &b);
			CT_Path2DLineTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DLineTo& operator=(CT_Path2DLineTo &b);
			~CT_Path2DLineTo();
			std::wstring Xml();
		};

		class CT_Path2DArcTo {
		public:
		//elements

		//attributes
			ST_AdjCoordinate wR;
			ST_AdjCoordinate hR;
			ST_AdjAngle stAng;
			ST_AdjAngle swAng;
		public:
		//end
			CT_Path2DArcTo(ST_AdjCoordinate &_wR, ST_AdjCoordinate &_hR,ST_AdjAngle &_stAng,ST_AdjAngle &_swAng);
			CT_Path2DArcTo(CT_Path2DArcTo &b);
			CT_Path2DArcTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DArcTo& operator=(CT_Path2DArcTo &b);
			~CT_Path2DArcTo();
			std::wstring Xml();
		};

		class CT_Path2DQuadBezierTo {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pt[2];
		//attributes

		public:
		//end
			CT_Path2DQuadBezierTo(std::shared_ptr<CT_AdjPoint2D> &pt1,std::shared_ptr<CT_AdjPoint2D> &pt2);
			CT_Path2DQuadBezierTo(CT_Path2DQuadBezierTo &b);
			CT_Path2DQuadBezierTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DQuadBezierTo& operator=(CT_Path2DQuadBezierTo &b);
			~CT_Path2DQuadBezierTo();
			std::wstring Xml();
		};

		class CT_Path2DCubicBezierTo {
		public:
		//elements
			std::shared_ptr<CT_AdjPoint2D> pt[3];
		//attributes

		public:
		//end
			CT_Path2DCubicBezierTo(std::shared_ptr<CT_AdjPoint2D> &pt1,std::shared_ptr<CT_AdjPoint2D> &pt2,std::shared_ptr<CT_AdjPoint2D> &pt3);
			CT_Path2DCubicBezierTo(CT_Path2DCubicBezierTo &b);
			CT_Path2DCubicBezierTo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DCubicBezierTo& operator=(CT_Path2DCubicBezierTo &b);
			~CT_Path2DCubicBezierTo();
			std::wstring Xml();
		};

		class CT_Path2DClose {
		public:
		//elements

		//attributes

		public:
		//end
			CT_Path2DClose();
			CT_Path2DClose(CT_Path2DClose &b);
			CT_Path2DClose(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DClose& operator=(CT_Path2DClose &b);
			~CT_Path2DClose();
			std::wstring Xml();
		};

		class ST_PathFillMode {
		public:
		//end
			enum value {
				none,
				norm,
				lighten,
				lightenLess,
				darken,
				darkenLess
			};
			value v;
		public:
		//end
			ST_PathFillMode(value _v);
			ST_PathFillMode(std::wstring b);
			ST_PathFillMode(ST_PathFillMode &b);
			ST_PathFillMode& operator=(value _v);
			ST_PathFillMode& operator =( ST_PathFillMode& b);
			ST_PathFillMode& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_Path2D {
		public:
		//elements
			class Choice {
			private:
				std::shared_ptr<CT_Path2DClose> _close;
				std::shared_ptr<CT_Path2DMoveTo> _moveTo;
				std::shared_ptr<CT_Path2DLineTo> _lnTo;
				std::shared_ptr<CT_Path2DArcTo> _arcTo;
				std::shared_ptr<CT_Path2DQuadBezierTo> _quadBezTo;
				std::shared_ptr<CT_Path2DCubicBezierTo> _cubicBezTo;
			public:
				Choice();
				Choice& operator=(std::shared_ptr<CT_Path2DClose> &__close);
				Choice& operator=(std::shared_ptr<CT_Path2DMoveTo> &__moveTo);
				Choice& operator=(std::shared_ptr<CT_Path2DLineTo> &__lnTo);
				Choice& operator=(std::shared_ptr<CT_Path2DArcTo> &__arcTo);
				Choice& operator=(std::shared_ptr<CT_Path2DQuadBezierTo> &__quadBezTo);
				Choice& operator=(std::shared_ptr<CT_Path2DCubicBezierTo> &__cubicBezTo);

				std::shared_ptr<CT_Path2DClose> close();
				std::shared_ptr<CT_Path2DMoveTo> moveTo();
				std::shared_ptr<CT_Path2DLineTo> lnTo();
				std::shared_ptr<CT_Path2DArcTo> arcTo();
				std::shared_ptr<CT_Path2DQuadBezierTo> quadBezTo();
				std::shared_ptr<CT_Path2DCubicBezierTo>cubicBezTo();
			};
			std::vector<Choice> choice;
		//attributes
			ST_PositiveCoordinate w;
			ST_PositiveCoordinate h;
			ST_PathFillMode fill;
			Bool stroke;
			Bool extrusionOk;
		public:
		//end
			CT_Path2D();
			CT_Path2D(CT_Path2D &b);
			CT_Path2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2D& operator=(CT_Path2D &b);
			~CT_Path2D();
			std::wstring Xml();
		};

		class CT_Path2DList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_Path2D>> path;
		//attributes

		public:
		//end
			CT_Path2DList();
			CT_Path2DList(CT_Path2DList &b);
			CT_Path2DList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Path2DList& operator=(CT_Path2DList &b);
			~CT_Path2DList();
			std::wstring Xml();
		};

		class CT_PresetGeometry2D {
		public:
		//elements
			std::shared_ptr<CT_GeomGuideList> avList;
		//attributes
			ST_ShapeType prst;
		public:
		//end
			CT_PresetGeometry2D(ST_ShapeType &_prst);
			CT_PresetGeometry2D(CT_PresetGeometry2D &b);
			CT_PresetGeometry2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PresetGeometry2D& operator=(CT_PresetGeometry2D &b);
			~CT_PresetGeometry2D();
			std::wstring Xml();
		};

		class CT_PresetTextShape {
		public:
		//elements
			std::shared_ptr<CT_GeomGuideList> avList;
		//attributes
			ST_ShapeType prst;
		public:
		//end
			CT_PresetTextShape(ST_ShapeType &_prst);
			CT_PresetTextShape(CT_PresetTextShape &b);
			CT_PresetTextShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PresetTextShape& operator=(CT_PresetTextShape &b);
			~CT_PresetTextShape();
			std::wstring Xml();
		};

		class CT_CustomGeometry2D {
		public:
		//elements
			std::shared_ptr<CT_GeomGuideList> avList;
			std::shared_ptr<CT_GeomGuideList> gdList;
			std::shared_ptr<CT_AdjustHandleList> ahList;
			std::shared_ptr<CT_ConnectionSiteList> cxnList;
			std::shared_ptr<CT_GeomRect> rect;
			std::shared_ptr<CT_Path2DList> pathLst;
		//attributes

		public:
		//end
			CT_CustomGeometry2D(std::shared_ptr<CT_Path2DList> &_pathLst);
			CT_CustomGeometry2D(CT_CustomGeometry2D &b);
			CT_CustomGeometry2D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_CustomGeometry2D& operator=(CT_CustomGeometry2D &b);
			~CT_CustomGeometry2D();
			std::wstring Xml();
		};

		class EG_Geometry {
		private:
			std::shared_ptr<CT_CustomGeometry2D> _custGeom;
			std::shared_ptr<CT_PresetGeometry2D> _prstGeom;
		public:
			EG_Geometry();
			EG_Geometry& operator=(std::shared_ptr<CT_CustomGeometry2D> &__custGeom);
			EG_Geometry& operator=(std::shared_ptr<CT_PresetGeometry2D> &__prstGeom);

			std::shared_ptr<CT_CustomGeometry2D> custGeom();
			std::shared_ptr<CT_PresetGeometry2D> prstGeom();
		};

		class EG_TextGeometry {
		private:
			std::shared_ptr<CT_CustomGeometry2D> _custGeom;
			std::shared_ptr<CT_PresetTextShape> _prstTxWarp;
		public:
			EG_TextGeometry();
			EG_TextGeometry& operator=(std::shared_ptr<CT_CustomGeometry2D> &__custGeom);
			EG_TextGeometry& operator=(std::shared_ptr<CT_PresetTextShape> &__prstTxWarp);

			std::shared_ptr<CT_CustomGeometry2D> custGeom();
			std::shared_ptr<CT_PresetTextShape> prstTxWarp();
		};

		class ST_LineEndType {
		public:
		//end
			enum value {
				none,
				triangle,
				stealth,
				diamond,
				oval,
				arrow
			};
			value v;
		public:
		//end
			ST_LineEndType(value _v);
			ST_LineEndType(std::wstring b);
			ST_LineEndType(ST_LineEndType &b);
			ST_LineEndType& operator=(value _v);
			ST_LineEndType& operator =(ST_LineEndType& b);
			ST_LineEndType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_LineEndWidth {
		public:
		//end
			enum value {
				sm,
				med,
				lg
			};
			value v;
		public:
		//end
			ST_LineEndWidth(value _v);
			ST_LineEndWidth(std::wstring b);
			ST_LineEndWidth(ST_LineEndWidth &b);
			ST_LineEndWidth& operator=(value _v);
			ST_LineEndWidth& operator =( ST_LineEndWidth& b);
			ST_LineEndWidth& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_LineEndLength {
		public:
		//end
			enum value {
				sm,
				med,
				lg
			};
			value v;
		public:
		//end
			ST_LineEndLength(value _v);
			ST_LineEndLength(std::wstring b);
			ST_LineEndLength(ST_LineEndLength &b);
			ST_LineEndLength& operator=(value _v);
			ST_LineEndLength& operator =( ST_LineEndLength& b);
			ST_LineEndLength& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_LineEndProperties {
		public:
		//elements

		//attributes
			ST_LineEndType type;
			ST_LineEndWidth w;
			ST_LineEndLength len;
		public:
		//end
			CT_LineEndProperties();
			CT_LineEndProperties(CT_LineEndProperties &b);
			CT_LineEndProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LineEndProperties& operator=(CT_LineEndProperties &b);
			~CT_LineEndProperties();
			std::wstring Xml();
		};

		class EG_LineFillProperties {
		private:
			std::shared_ptr<CT_NoFillProperties> _noFill;
			std::shared_ptr<CT_SolidColorFillProperties> _solidFill;
			std::shared_ptr<CT_GradientFillProperties> _gradFill;
			std::shared_ptr<CT_PatternFillProperties> _pattFill;
		public:
			EG_LineFillProperties();
			EG_LineFillProperties& operator=(std::shared_ptr<CT_NoFillProperties> &__noFill);
			EG_LineFillProperties& operator=(std::shared_ptr<CT_SolidColorFillProperties> &__solidFill);
			EG_LineFillProperties& operator=(std::shared_ptr<CT_GradientFillProperties> &__gradFill);
			EG_LineFillProperties& operator=(std::shared_ptr<CT_PatternFillProperties> &__pattFill);

			std::shared_ptr<CT_NoFillProperties> noFill();
			std::shared_ptr<CT_SolidColorFillProperties> solidFill();
			std::shared_ptr<CT_GradientFillProperties> gradFill();
			std::shared_ptr<CT_PatternFillProperties> pattFill();
		};

		class CT_LineJoinBevel {
		public:
		//elements

		//attributes

		public:
		//end
			CT_LineJoinBevel();
			CT_LineJoinBevel(CT_LineJoinBevel &b);
			CT_LineJoinBevel(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LineJoinBevel& operator=(CT_LineJoinBevel &b);
			~CT_LineJoinBevel();
			std::wstring Xml();
		};

		class CT_LineJoinRound {
		public:
		//elements

		//attributes

		public:
		//end
			CT_LineJoinRound();
			CT_LineJoinRound(CT_LineJoinRound &b);
			CT_LineJoinRound(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LineJoinRound& operator=(CT_LineJoinRound &b);
			~CT_LineJoinRound();
			std::wstring Xml();
		};

		class CT_LineJoinMiterProperties {
		public:
		//elements

		//attributes
			ST_PositivePercentage lim;
		public:
		//end
			CT_LineJoinMiterProperties();
			CT_LineJoinMiterProperties(CT_LineJoinMiterProperties &b);
			CT_LineJoinMiterProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LineJoinMiterProperties& operator=(CT_LineJoinMiterProperties &b);
			~CT_LineJoinMiterProperties();
			std::wstring Xml();
		};

		class EG_LineJoinProperties {
		private:
			std::shared_ptr<CT_LineJoinRound> _round;
			std::shared_ptr<CT_LineJoinBevel> _bevel;
			std::shared_ptr<CT_LineJoinMiterProperties> _miter;
		public:
			EG_LineJoinProperties();
			EG_LineJoinProperties& operator=(std::shared_ptr<CT_LineJoinRound> &__round);
			EG_LineJoinProperties& operator=(std::shared_ptr<CT_LineJoinBevel> &__bevel);
			EG_LineJoinProperties& operator=(std::shared_ptr<CT_LineJoinMiterProperties> &__miter);

			std::shared_ptr<CT_LineJoinRound> round();
			std::shared_ptr<CT_LineJoinBevel> bevel();
			std::shared_ptr<CT_LineJoinMiterProperties> miter();
		};

		class ST_PresetLineDashVal {
		public:
		//end
			enum value {
				solid,
				dot,
				dash,
				lgDash,
				dashDot,
				lgDashDot,
				lgDashDotDot,
				sysDash,
				sysDot,
				sysDashDot,
				sysDashDotDot
			};
			value v;
		public:
		//end
			ST_PresetLineDashVal(value _v);
			ST_PresetLineDashVal(std::wstring b);
			ST_PresetLineDashVal(ST_PresetLineDashVal &b);
			ST_PresetLineDashVal& operator=(value _v);
			ST_PresetLineDashVal& operator =( ST_PresetLineDashVal& b);
			ST_PresetLineDashVal& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_PresetLineDashProperties {
		public:
		//elements

		//attributes
			ST_PresetLineDashVal val;	
		public:
		//end
			CT_PresetLineDashProperties();
			CT_PresetLineDashProperties(CT_PresetLineDashProperties &b);
			CT_PresetLineDashProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_PresetLineDashProperties& operator=(CT_PresetLineDashProperties &b);
			~CT_PresetLineDashProperties();
			std::wstring Xml();
		};

		class CT_DashStop {
		public:
		//elements

		//attributes
			ST_PositivePercentage d;
			ST_PositivePercentage sp;
		public:
		//end
			CT_DashStop(ST_PositivePercentage &_d, ST_PositivePercentage &_sp);
			CT_DashStop(CT_DashStop &b);
			CT_DashStop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_DashStop& operator=(CT_DashStop &b);
			~CT_DashStop();
			std::wstring Xml();
		};

		class CT_DashStopList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_DashStop>> ds;
		//attributes

		public:
		//end
			CT_DashStopList();
			CT_DashStopList(CT_DashStopList &b);
			CT_DashStopList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_DashStopList& operator=(CT_DashStopList &b);
			~CT_DashStopList();
			std::wstring Xml();
		};

		class EG_LineDashProperties {
		private:
			std::shared_ptr<CT_PresetLineDashProperties> _prstDash;
			std::shared_ptr<CT_DashStopList> _custDash;
		public:
			EG_LineDashProperties();
			EG_LineDashProperties& operator=(std::shared_ptr<CT_PresetLineDashProperties> &__prstDash);
			EG_LineDashProperties& operator=(std::shared_ptr<CT_DashStopList> &__custDash);

			std::shared_ptr<CT_PresetLineDashProperties> prstDash();
			std::shared_ptr<CT_DashStopList> custDash();
		};

		class ST_LineCap {
		public:
		//end
			enum value {
				rnd,
				sq,
				flat
			};
			value v;
		public:
		//end
			ST_LineCap(value _v);
			ST_LineCap(std::wstring b);
			ST_LineCap(ST_LineCap &b);
			ST_LineCap& operator=(value _v);
			ST_LineCap& operator =( ST_LineCap& b);
			ST_LineCap& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_LineWidth : public ST_Coordinate32Unqualified {
		public:
		//end
			bool check(int chkval);
		public:
		};

		class ST_PenAlignment {
		public:
		//end
			enum value {
				ctr,
				in
			};
			value v;
		public:
		//end
			ST_PenAlignment(value _v);
			ST_PenAlignment(std::wstring b);
			ST_PenAlignment(ST_PenAlignment &b);
			ST_PenAlignment& operator=(value _v);
			ST_PenAlignment& operator =( ST_PenAlignment& b);
			ST_PenAlignment& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_CompoundLine {
		public:
		//end
			enum value {
				sng,
				dbl,
				thickThin,
				thinThick,
				tri
			};
			value v;
		public:
		//end
			ST_CompoundLine(value _v);
			ST_CompoundLine(std::wstring b);
			ST_CompoundLine(ST_CompoundLine &b);
			ST_CompoundLine& operator=(value _v);
			ST_CompoundLine& operator =(ST_CompoundLine& b);
			ST_CompoundLine& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_LineProperties {
		public:
		//elements
			
			std::shared_ptr<EG_LineFillProperties> lineFill;
			std::shared_ptr<EG_LineDashProperties> lineDash;
			std::shared_ptr<EG_LineJoinProperties> lineJoin;

			std::shared_ptr<CT_LineEndProperties> headEnd;
			std::shared_ptr<CT_LineEndProperties> tailEnd;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_LineWidth w;
			ST_LineCap cap;
			ST_CompoundLine cmpd;
			ST_PenAlignment algn;
		public:
		//end
			CT_LineProperties();
			CT_LineProperties(CT_LineProperties &b);
			CT_LineProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_LineProperties& operator=(CT_LineProperties &b);
			~CT_LineProperties();
			std::wstring Xml();
		};

		class CT_ShapeProperties {
		public:
		//elements
			std::shared_ptr<CT_Transform2D> xfrm;
			EG_Geometry geometry;
			EG_FillProperties fillProperties;
			std::shared_ptr<CT_LineProperties> ln;
			EG_EffectProperties effectProperties;
			std::shared_ptr<CT_Scene3D> scene3d;
			std::shared_ptr<CT_Shape3D> sp3d;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_BlackWhiteMode bwMode;
		public:
		//end
			CT_ShapeProperties();
			CT_ShapeProperties(CT_ShapeProperties &b);
			CT_ShapeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ShapeProperties& operator=(CT_ShapeProperties &b);
			~CT_ShapeProperties();
			std::wstring Xml();
		};

		class CT_GroupShapeProperties {
		public:
		//elements
			std::shared_ptr<CT_GroupTransform2D> xfrm;
			std::shared_ptr<EG_FillProperties> fillProperties;
			std::shared_ptr<EG_EffectProperties> effectProperties;
			std::shared_ptr<CT_Scene3D> scene3d;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_BlackWhiteMode bwMode;
		public:
		//end
			CT_GroupShapeProperties();
			CT_GroupShapeProperties(CT_GroupShapeProperties &b);
			CT_GroupShapeProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_GroupShapeProperties& operator=(CT_GroupShapeProperties &b);
			~CT_GroupShapeProperties();
			std::wstring Xml();
		};

		class CT_StyleMatrixReference {
		public:
		//elements
			EG_ColorChoice colorChoice;
		//attributes
			ST_StyleMatrixColumnIndex idx;
		public:
		//end
			CT_StyleMatrixReference(ST_StyleMatrixColumnIndex &_idx);
			CT_StyleMatrixReference(CT_StyleMatrixReference &b);
			CT_StyleMatrixReference(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_StyleMatrixReference& operator=(CT_StyleMatrixReference &b);
			~CT_StyleMatrixReference();
			std::wstring Xml();
		};

		class CT_FontReference {
		public:
		//elements
			std::shared_ptr<EG_ColorChoice> colorChoice;
		//attributes
			ST_FontCollectionIndex idx;
		public:
		//end
			CT_FontReference();
			CT_FontReference(CT_FontReference &b);
			CT_FontReference(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_FontReference& operator=(CT_FontReference &b);
			~CT_FontReference();
			std::wstring Xml();
		};

		class CT_ShapeStyle {
		public:
		//elements
			std::shared_ptr<CT_StyleMatrixReference> lnRef;
			std::shared_ptr<CT_StyleMatrixReference> fillRef;
			std::shared_ptr<CT_StyleMatrixReference> effectRef;
			std::shared_ptr<CT_FontReference> fontRef;
		//attributes

		public:
		//end
			CT_ShapeStyle(std::shared_ptr<CT_StyleMatrixReference> &_lnRef,std::shared_ptr<CT_StyleMatrixReference> &_fillRef,	std::shared_ptr<CT_StyleMatrixReference> &_effectRef,	std::shared_ptr<CT_FontReference> &_fontRef);
			CT_ShapeStyle(CT_ShapeStyle &b);
			CT_ShapeStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ShapeStyle& operator=(CT_ShapeStyle &b);
			~CT_ShapeStyle();
			std::wstring Xml();
		};

		class CT_DefaultShapeDefinition {
		public:
		//elements
			std::shared_ptr<CT_ShapeProperties> spPr;
			std::shared_ptr<CT_TextBodyProperties> bodyPr;
			std::shared_ptr<CT_TextListStyle> lstStyle;
			std::shared_ptr<CT_ShapeStyle> style;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_DefaultShapeDefinition(std::shared_ptr<CT_ShapeProperties> &_spPr,	std::shared_ptr<CT_TextBodyProperties> &_bodyPr,std::shared_ptr<CT_TextListStyle> &_lstStyle);
			CT_DefaultShapeDefinition(CT_DefaultShapeDefinition &b);
			CT_DefaultShapeDefinition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_DefaultShapeDefinition& operator=(CT_DefaultShapeDefinition &b);
			~CT_DefaultShapeDefinition();
			std::wstring Xml();
		};

		class CT_ObjectStyleDefaults {
		public:
		//elements
			std::shared_ptr<CT_DefaultShapeDefinition> spDef;
			std::shared_ptr<CT_DefaultShapeDefinition> lnDef;
			std::shared_ptr<CT_DefaultShapeDefinition> txDef;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_ObjectStyleDefaults();
			CT_ObjectStyleDefaults(CT_ObjectStyleDefaults &b);
			CT_ObjectStyleDefaults(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ObjectStyleDefaults& operator=(CT_ObjectStyleDefaults &b);
			~CT_ObjectStyleDefaults();
			std::wstring Xml();
		};

		class CT_EmptyElement {
		public:
		//elements

		//attributes

		public:
		//end
			CT_EmptyElement();
			CT_EmptyElement(CT_EmptyElement &b);
			CT_EmptyElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_EmptyElement& operator=(CT_EmptyElement &b);
			~CT_EmptyElement();
			std::wstring Xml();
		};

		class CT_ColorMapping {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_ColorSchemeIndex bg1;
			ST_ColorSchemeIndex tx1;
			ST_ColorSchemeIndex bg2;
			ST_ColorSchemeIndex tx2;
			ST_ColorSchemeIndex accent1;
			ST_ColorSchemeIndex accent2;
			ST_ColorSchemeIndex accent3;
			ST_ColorSchemeIndex accent4;
			ST_ColorSchemeIndex accent5;
			ST_ColorSchemeIndex accent6;
			ST_ColorSchemeIndex hlink;
			ST_ColorSchemeIndex folHlink;
		public:
		//end
			CT_ColorMapping(ST_ColorSchemeIndex &_bg1, ST_ColorSchemeIndex &_tx1, ST_ColorSchemeIndex &_bg2, ST_ColorSchemeIndex &_tx2, ST_ColorSchemeIndex &_accent1, ST_ColorSchemeIndex &_accent2, ST_ColorSchemeIndex &_accent3, ST_ColorSchemeIndex &_accent4, ST_ColorSchemeIndex &_accent5, ST_ColorSchemeIndex &_accent6, ST_ColorSchemeIndex &_hlink, ST_ColorSchemeIndex &_folHlink);
			CT_ColorMapping(CT_ColorMapping &b);
			CT_ColorMapping(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorMapping& operator=(CT_ColorMapping &b);
			~CT_ColorMapping();
			std::wstring Xml();
		};

		class CT_ColorMappingOverride {
		public:
		//elements
			class Choice {
			private:
				std::shared_ptr<CT_EmptyElement> _masterClrMapping;
				std::shared_ptr<CT_ColorMapping> _overrideClrMapping;
			public:
				Choice();
				Choice& operator=(std::shared_ptr<CT_EmptyElement> &__masterClrMapping);
				Choice& operator=(std::shared_ptr<CT_ColorMapping> &__overrideClrMapping);

				std::shared_ptr<CT_EmptyElement> masterClrMapping();
				std::shared_ptr<CT_ColorMapping> overrideClrMapping();
			};
			Choice choice;
		//attributes

		public:
		//end
			CT_ColorMappingOverride(Choice &_choice);
			CT_ColorMappingOverride(CT_ColorMappingOverride &b);
			CT_ColorMappingOverride(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorMappingOverride& operator=(CT_ColorMappingOverride &b);
			~CT_ColorMappingOverride();
			std::wstring Xml();
		};

		class CT_ColorSchemeAndMapping {
		public:
		//elements
			std::shared_ptr<CT_ColorScheme> clrScheme;
			std::shared_ptr<CT_ColorMapping> clrMap;
		//attributes

		public:
		//end
			CT_ColorSchemeAndMapping(std::shared_ptr<CT_ColorScheme> &_clrScheme);
			CT_ColorSchemeAndMapping(CT_ColorSchemeAndMapping &b);
			CT_ColorSchemeAndMapping(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorSchemeAndMapping& operator=(CT_ColorSchemeAndMapping &b);
			~CT_ColorSchemeAndMapping();
			std::wstring Xml();
		};

		class CT_ColorSchemeList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_ColorSchemeAndMapping>> extraClrScheme;
		//attributes

		public:
		//end
			CT_ColorSchemeList();
			CT_ColorSchemeList(CT_ColorSchemeList &b);
			CT_ColorSchemeList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ColorSchemeList& operator=(CT_ColorSchemeList &b);
			~CT_ColorSchemeList();
			std::wstring Xml();
		};

		class CT_OfficeStyleSheet {
		public:
		//elements
			std::shared_ptr<CT_BaseStyles> themeElements;
			std::shared_ptr<CT_ObjectStyleDefaults> objectDefaults;
			std::shared_ptr<CT_ColorSchemeList> extraClrSchemeLst;
			std::shared_ptr<CT_CustomColorList> custClrLst;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			std::wstring name;
		public:
		//end
			CT_OfficeStyleSheet(std::shared_ptr<CT_BaseStyles> &_themeElements);
			CT_OfficeStyleSheet(CT_OfficeStyleSheet &b);
			CT_OfficeStyleSheet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_OfficeStyleSheet& operator=(CT_OfficeStyleSheet &b);
			~CT_OfficeStyleSheet();
			std::wstring Xml();
		};

		class CT_BaseStylesOverride {
		public:
		//elements
			std::shared_ptr<CT_ColorScheme> clrScheme;
			std::shared_ptr<CT_FontScheme> fontScheme;
			std::shared_ptr<CT_StyleMatrix> fmtScheme;
		//attributes

		public:
		//end
			CT_BaseStylesOverride();
			CT_BaseStylesOverride(CT_BaseStylesOverride &b);
			CT_BaseStylesOverride(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_BaseStylesOverride& operator=(CT_BaseStylesOverride &b);
			~CT_BaseStylesOverride();
			std::wstring Xml();
		};

		class CT_ClipboardStyleSheet {
		public:
		//elements
			std::shared_ptr<CT_BaseStyles> themeElements;
			std::shared_ptr<CT_ColorMapping> clrMap;
		//attributes

		public:
		//end
			CT_ClipboardStyleSheet(std::shared_ptr<CT_BaseStyles> &_themeElements, std::shared_ptr<CT_ColorMapping> &_clrMap);
			CT_ClipboardStyleSheet(CT_ClipboardStyleSheet &b);
			CT_ClipboardStyleSheet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_ClipboardStyleSheet& operator=(CT_ClipboardStyleSheet &b);
			~CT_ClipboardStyleSheet();
			std::wstring Xml();
		};

		class ST_TextVerticalType {
		public:
		//end
			enum value {
				horz,
				vert,
				vert270,
				wordArtVert,
				eaVert,
				mongolianVert,
				wordArtVertRtl
			};
			value v;
		public:
		//end
			ST_TextVerticalType(value _v);
			ST_TextVerticalType(std::wstring b);
			ST_TextVerticalType(ST_TextVerticalType &b);
			ST_TextVerticalType& operator=(value _v);
			ST_TextVerticalType& operator =(ST_TextVerticalType& b);
			ST_TextVerticalType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextAnchoringType {
		public:
		//end
			enum value {
				t,
				ctr,
				b,
				just,
				dist
			};
			value v;
		public:
		//end
			ST_TextAnchoringType(value _v);
			ST_TextAnchoringType(std::wstring b);
			ST_TextAnchoringType(ST_TextAnchoringType &b);
			ST_TextAnchoringType& operator=(value _v);
			ST_TextAnchoringType& operator =( ST_TextAnchoringType& b);
			ST_TextAnchoringType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextHorzOverflowType {
		public:
		//end
			enum value {
				overflow,
				clip
			};
			value v;
		public:
		//end
			ST_TextHorzOverflowType(value _v);
			ST_TextHorzOverflowType(std::wstring b);
			ST_TextHorzOverflowType(ST_TextHorzOverflowType &b);
			ST_TextHorzOverflowType& operator=(value _v);
			ST_TextHorzOverflowType& operator =( ST_TextHorzOverflowType& b);
			ST_TextHorzOverflowType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_TableCellProperties {
		public:
		//elements
			std::shared_ptr<CT_LineProperties> lnL;
			std::shared_ptr<CT_LineProperties> lnR;
			std::shared_ptr<CT_LineProperties> lnT;
			std::shared_ptr<CT_LineProperties> lnB;
			std::shared_ptr<CT_LineProperties> lnTlToBr;
			std::shared_ptr<CT_LineProperties> lnBlToTr;
			std::shared_ptr<CT_Cell3D> cell3D;
			EG_FillProperties fillProperties;
			std::shared_ptr<CT_Headers> headers;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_Coordinate32 marL;
			ST_Coordinate32 marR;
			ST_Coordinate32 marT;
			ST_Coordinate32 marB;
			ST_TextVerticalType vert;
			ST_TextAnchoringType anchor;
			Bool anchorCtr;
			ST_TextHorzOverflowType horzOverflow;
		public:
		//end
			CT_TableCellProperties();
			CT_TableCellProperties(CT_TableCellProperties &b);
			CT_TableCellProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableCellProperties& operator=(CT_TableCellProperties &b);
			~CT_TableCellProperties();
			std::wstring Xml();
		};

		class CT_Headers {
		public:
		//elements
			std::vector<std::wstring> header;
		//attributes

		public:
		//end
			CT_Headers();
			CT_Headers(CT_Headers &b);
			CT_Headers(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Headers& operator=(CT_Headers &b);
			~CT_Headers();
			std::wstring Xml();
		};

		class CT_TableCol {
		public:
		//elements
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_Coordinate w;
		public:
		//end
			CT_TableCol(ST_Coordinate &_w);
			CT_TableCol(CT_TableCol &b);
			CT_TableCol(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableCol& operator=(CT_TableCol &b);
			~CT_TableCol();
			std::wstring Xml();
		};

		class CT_TableGrid {
		public:
		//elements
			std::vector<std::shared_ptr<CT_TableCol>> gridCol;
		//attributes

		public:
		//end
			CT_TableGrid();
			CT_TableGrid(CT_TableGrid &b);
			CT_TableGrid(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableGrid& operator=(CT_TableGrid &b);
			~CT_TableGrid();
			std::wstring Xml();
		};

		class CT_TableCell {
		public:
		//elements
			std::shared_ptr<CT_TextBody> txBody;
			std::shared_ptr<CT_TableCellProperties> tcPr;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Int rowSpan;
			Int gridSpan;
			Bool hMerge;
			Bool vMerge;
			std::wstring id;
		public:
		//end
			CT_TableCell();
			CT_TableCell(CT_TableCell &b);
			CT_TableCell(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableCell& operator=(CT_TableCell &b);
			~CT_TableCell();
			std::wstring Xml();
		};

		class CT_TableRow {
		public:
		//elements
			std::shared_ptr<CT_TableCell> tc;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_Coordinate h;
		public:
		//end
			CT_TableRow(ST_Coordinate &_h);
			CT_TableRow(CT_TableRow &b);
			CT_TableRow(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableRow& operator=(CT_TableRow &b);
			~CT_TableRow();
			std::wstring Xml();
		};

		class CT_TableProperties {
		public:
		//elements
			EG_FillProperties fillProperties;
			EG_EffectProperties effectProperties;
			class Choice {
			private:
				std::shared_ptr<CT_TableStyle> _tableStyle;
				officeDocument::sharedTypes::ST_Guid _tableStyleId;
			public:
				Choice();
				Choice& operator=(std::shared_ptr<CT_TableStyle> &__tableStyle);
				Choice& operator=(officeDocument::sharedTypes::ST_Guid &__tableStyleId);

				std::shared_ptr<CT_TableStyle> tableStyle();
				officeDocument::sharedTypes::ST_Guid tableStyleId();
			};
			Choice choice;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool rtl;
			Bool firstRow;
			Bool firstCol;
			Bool lastRow;
			Bool lastCol;
			Bool bandRow;
			Bool bandCol;
		public:
		//end
			CT_TableProperties();
			CT_TableProperties(CT_TableProperties &b);
			CT_TableProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableProperties& operator=(CT_TableProperties &b);
			~CT_TableProperties();
			std::wstring Xml();
		};

		class CT_Table {
		public:
		//elements
			std::shared_ptr<CT_TableProperties> tblPr;
			std::shared_ptr<CT_TableGrid> tblGrid;
			std::shared_ptr<CT_TableRow> tr;
		//attributes

		public:
		//end
			CT_Table(std::shared_ptr<CT_TableGrid> &_tblGrid);
			CT_Table(CT_Table &b);
			CT_Table(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Table& operator=(CT_Table &b);
			~CT_Table();
			std::wstring Xml();
		};

		class CT_Cell3D {
		public:
		//elements
			std::shared_ptr<CT_Bevel> bevel;
			std::shared_ptr<CT_LightRig> lightRig;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_PresetMaterialType prstMaterial;
		public:
		//end
			CT_Cell3D(std::shared_ptr<CT_Bevel> &_bevel);
			CT_Cell3D(CT_Cell3D &b);
			CT_Cell3D(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Cell3D& operator=(CT_Cell3D &b);
			~CT_Cell3D();
			std::wstring Xml();
		};

		class EG_ThemeableFillStyle {
		private:
			std::shared_ptr<CT_FillProperties> _fill;
			std::shared_ptr<CT_StyleMatrixReference> _fillRef;
		public:
			EG_ThemeableFillStyle();
			EG_ThemeableFillStyle& operator=(std::shared_ptr<CT_FillProperties> &__fill);
			EG_ThemeableFillStyle& operator=(std::shared_ptr<CT_StyleMatrixReference> &__fillRef);

			std::shared_ptr<CT_FillProperties> fill();
			std::shared_ptr<CT_StyleMatrixReference> fillRef();
		};

		class CT_ThemeableLineStyle {
		public:
		//elements
			std::shared_ptr<CT_LineProperties> ln;
			std::shared_ptr<CT_StyleMatrixReference> lnRef;
		//attributes

		public:
		//end
			CT_ThemeableLineStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ThemeableLineStyle();
		};

		class EG_ThemeableEffectStyle {
		private:
			std::shared_ptr<CT_EffectProperties> _effect;
			std::shared_ptr<CT_StyleMatrixReference> _effectRef;
		public:
			EG_ThemeableEffectStyle();
			EG_ThemeableEffectStyle& operator=(std::shared_ptr<CT_EffectProperties> &__effect);
			EG_ThemeableEffectStyle& operator=(std::shared_ptr<CT_StyleMatrixReference> &__effectRef);

			std::shared_ptr<CT_EffectProperties> effect();
			std::shared_ptr<CT_StyleMatrixReference> effectRef();
		};

		class EG_ThemeableFontStyles {
		private:
			std::shared_ptr<CT_FontCollection> _font;
			std::shared_ptr<CT_FontReference> _fontRef;
		public:
			EG_ThemeableFontStyles();
			EG_ThemeableFontStyles& operator=(std::shared_ptr<CT_FontCollection> &__font);
			EG_ThemeableFontStyles& operator=(std::shared_ptr<CT_FontReference> &__fontRef);

			std::shared_ptr<CT_FontCollection> font();
			std::shared_ptr<CT_FontReference> fontRef();
		};

		class ST_OnOffStyleType {
		public:
		//end
			enum value {
				on,
				off,
				def
			};
			value v;
		public:
		//end
			ST_OnOffStyleType(value _v);
			ST_OnOffStyleType(std::wstring b);
			ST_OnOffStyleType(ST_OnOffStyleType &b);
			ST_OnOffStyleType& operator=(value _v);
			ST_OnOffStyleType& operator =( ST_OnOffStyleType& b);
			ST_OnOffStyleType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_TableStyleTextStyle {
		public:
		//elements
			EG_ThemeableFontStyles themeableFontStyle;
			EG_ColorChoice colorChoice;
			
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_OnOffStyleType b;
			ST_OnOffStyleType i;
		public:
		//end
			CT_TableStyleTextStyle();
			CT_TableStyleTextStyle(CT_TableStyleTextStyle &b);
			CT_TableStyleTextStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableStyleTextStyle& operator=(CT_TableStyleTextStyle &b);
			~CT_TableStyleTextStyle();
			std::wstring Xml();
		};

		class CT_TableCellBorderStyle {
		public:
		//elements
			std::shared_ptr<CT_ThemeableLineStyle> left;
			std::shared_ptr<CT_ThemeableLineStyle> right;
			std::shared_ptr<CT_ThemeableLineStyle> top;
			std::shared_ptr<CT_ThemeableLineStyle> bottom;
			std::shared_ptr<CT_ThemeableLineStyle> insideH;
			std::shared_ptr<CT_ThemeableLineStyle> insideV;
			std::shared_ptr<CT_ThemeableLineStyle> tl2br;
			std::shared_ptr<CT_ThemeableLineStyle> tr2bl;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_TableCellBorderStyle();
			CT_TableCellBorderStyle(CT_TableCellBorderStyle &b);
			CT_TableCellBorderStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableCellBorderStyle& operator=(CT_TableCellBorderStyle &b);
			~CT_TableCellBorderStyle();
			std::wstring Xml();
		};

		class CT_TableBackgroundStyle {
		public:
		//elements
			EG_ThemeableFillStyle themeableFillStyle;
			EG_ThemeableEffectStyle themeableEffectStyle;
		public:
		//attributes

		public:
		//end
			CT_TableBackgroundStyle();
			CT_TableBackgroundStyle(CT_TableBackgroundStyle &b);
			CT_TableBackgroundStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableBackgroundStyle& operator=(CT_TableBackgroundStyle &b);
			~CT_TableBackgroundStyle();
			std::wstring Xml();
		};

		class CT_TableStyleCellStyle {
		public:
		//elements
			std::shared_ptr<CT_TableCellBorderStyle> tcBdr;
			EG_ThemeableFillStyle themeableFillStyle;
			std::shared_ptr<CT_Cell3D> cell3D;
		//attributes

		public:
		//end
			CT_TableStyleCellStyle();
			CT_TableStyleCellStyle(CT_TableStyleCellStyle &b);
			CT_TableStyleCellStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableStyleCellStyle& operator=(CT_TableStyleCellStyle &b);
			~CT_TableStyleCellStyle();
			std::wstring Xml();
		};

		class CT_TablePartStyle {
		public:
		//elements
			std::shared_ptr<CT_TableStyleTextStyle> tcTxStyle;
			std::shared_ptr<CT_TableStyleCellStyle> tcStyle;
		//attributes

		public:
		//end
			CT_TablePartStyle();
			CT_TablePartStyle(CT_TablePartStyle &b);
			CT_TablePartStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TablePartStyle& operator=(CT_TablePartStyle &b);
			~CT_TablePartStyle();
			std::wstring Xml();
		};

		class CT_TableStyle {
		public:
		//elements
			std::shared_ptr<CT_TableBackgroundStyle> tblBg;
			std::shared_ptr<CT_TablePartStyle> wholeTbl;
			std::shared_ptr<CT_TablePartStyle> band1H;
			std::shared_ptr<CT_TablePartStyle> band2H;
			std::shared_ptr<CT_TablePartStyle> band1V;
			std::shared_ptr<CT_TablePartStyle> band2V;
			std::shared_ptr<CT_TablePartStyle> lastCol;
			std::shared_ptr<CT_TablePartStyle> firstCol;
			std::shared_ptr<CT_TablePartStyle> lastRow;
			std::shared_ptr<CT_TablePartStyle> seCell;
			std::shared_ptr<CT_TablePartStyle> swCell;
			std::shared_ptr<CT_TablePartStyle> firstRow;
			std::shared_ptr<CT_TablePartStyle> neCell;
			std::shared_ptr<CT_TablePartStyle> nwCell;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			officeDocument::sharedTypes::ST_Guid styleId;
			std::wstring styleName;
		public:
		//end
			CT_TableStyle(officeDocument::sharedTypes::ST_Guid &_styleId,	std::wstring &_styleName);
			CT_TableStyle(CT_TableStyle &b);
			CT_TableStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableStyle& operator=(CT_TableStyle &b);
			~CT_TableStyle();
			std::wstring Xml();
		};

		class CT_TableStyleList {
		public:
		//elements
			std::vector<std::shared_ptr<CT_TableStyle>> tblStyle;
		//attributes
			officeDocument::sharedTypes::ST_Guid def;
		public:
		//end
			CT_TableStyleList(officeDocument::sharedTypes::ST_Guid &_def);
			CT_TableStyleList(CT_TableStyleList &b);
			CT_TableStyleList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TableStyleList& operator=(CT_TableStyleList &b);
			~CT_TableStyleList();
			std::wstring Xml();
		};

		class EG_TextRun {
		private:
			std::shared_ptr<CT_RegularTextRun> _r;
			std::shared_ptr<CT_TextLineBreak> _br;
			std::shared_ptr<CT_TextField> _fld;
		public:
			EG_TextRun();
			EG_TextRun& operator=(std::shared_ptr<CT_RegularTextRun> &__r);
			EG_TextRun& operator=(std::shared_ptr<CT_TextLineBreak> &__br);
			EG_TextRun& operator=(std::shared_ptr<CT_TextField> &__fld);

			std::shared_ptr<CT_RegularTextRun> r();
			std::shared_ptr<CT_TextLineBreak> br();
			std::shared_ptr<CT_TextField> fld();
		};

		class CT_TextParagraph {
		public:
		//elements
			std::shared_ptr<CT_TextParagraphProperties> pPr;
			std::vector<EG_TextRun> textRun;
			std::shared_ptr<CT_TextCharacterProperties> endParaRPr;
		//attributes

		public:
		//end
			CT_TextParagraph();
			CT_TextParagraph(CT_TextParagraph &b);
			CT_TextParagraph(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextParagraph& operator=(CT_TextParagraph &b);
			~CT_TextParagraph();
			std::wstring Xml();
		};

		class ST_TextVertOverflowType {
		public:
		//end
			enum value {
				overflow,
				ellipsis,
				clip
			};
			value v;
		public:
		//end
			ST_TextVertOverflowType(value _v);
			ST_TextVertOverflowType(std::wstring b);
			ST_TextVertOverflowType(ST_TextVertOverflowType &b);
			ST_TextVertOverflowType& operator=(value _v);
			ST_TextVertOverflowType& operator =(ST_TextVertOverflowType& b);
			ST_TextVertOverflowType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextWrappingType {
		public:
		//end
			enum value {
				none,
				square
			};
			value v;
		public:
		//end
			ST_TextWrappingType(value _v);
			ST_TextWrappingType(std::wstring b);
			ST_TextWrappingType(ST_TextWrappingType &b);
			ST_TextWrappingType& operator=(value _v);
			ST_TextWrappingType& operator =(ST_TextWrappingType& b);
			ST_TextWrappingType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextColumnCount {
		public:
		//end
			enum value {
				_1,
				_16
			};
			value v;
		public:
		//end
			ST_TextColumnCount(value _v);
			ST_TextColumnCount(std::wstring b);
			ST_TextColumnCount(ST_TextColumnCount &b);
			ST_TextColumnCount& operator=(value _v);
			ST_TextColumnCount& operator =(ST_TextColumnCount& b);
			ST_TextColumnCount& operator =(std::wstring b);
			operator const wchar_t*() const;
		};

		class CT_TextListStyle {
		public:
		//elements
			std::shared_ptr<CT_TextParagraphProperties> defPr;
			std::shared_ptr<CT_TextParagraphProperties> lvl1Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl2Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl3Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl4Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl5Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl6Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl7Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl8Pr;
			std::shared_ptr<CT_TextParagraphProperties> lvl9Pr;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes

		public:
		//end
			CT_TextListStyle();
			CT_TextListStyle(CT_TextListStyle &b);
			CT_TextListStyle(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextListStyle& operator=(CT_TextListStyle &b);
			~CT_TextListStyle();
			std::wstring Xml();
		};

		class ST_TextFontScalePercentOrPercentString : public officeDocument::sharedTypes::ST_Percentage {
		public:
		//end
		public:
		//end
		};

		class ST_TextSpacingPercentOrPercentString : public officeDocument::sharedTypes::ST_Percentage {
		public:
		//end
		public:
		//end
		};

		class CT_TextNormalAutofit {
		public:
		//elements

		//attributes
			ST_TextFontScalePercentOrPercentString fontScale;
			ST_TextSpacingPercentOrPercentString lnSpcReduction;
		public:
		//end
			CT_TextNormalAutofit();
			CT_TextNormalAutofit(CT_TextNormalAutofit &b);
			CT_TextNormalAutofit(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextNormalAutofit& operator=(CT_TextNormalAutofit &b);
			~CT_TextNormalAutofit();
			std::wstring Xml();
		};

		class CT_TextShapeAutofit {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextShapeAutofit();
			CT_TextShapeAutofit(CT_TextShapeAutofit &b);
			CT_TextShapeAutofit(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextShapeAutofit& operator=(CT_TextShapeAutofit &b);
			~CT_TextShapeAutofit();
			std::wstring Xml();
		};

		class CT_TextNoAutofit {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextNoAutofit();
			CT_TextNoAutofit(CT_TextNoAutofit &b);
			CT_TextNoAutofit(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextNoAutofit& operator=(CT_TextNoAutofit &b);
			~CT_TextNoAutofit();
			std::wstring Xml();
		};

		class EG_TextAutofit {
		private:
			std::shared_ptr<CT_TextNoAutofit> _noAutofit;
			std::shared_ptr<CT_TextNormalAutofit> _normAutoFit;
			std::shared_ptr<CT_TextShapeAutofit> _spAutofit;
		public:
			EG_TextAutofit();
			EG_TextAutofit& operator=(std::shared_ptr<CT_TextNoAutofit> &__noAutofit);
			EG_TextAutofit& operator=(std::shared_ptr<CT_TextNormalAutofit> &__normAutoFit);
			EG_TextAutofit& operator=(std::shared_ptr<CT_TextShapeAutofit> &__spAutofit);

			std::shared_ptr<CT_TextNoAutofit> noAutofit();
			std::shared_ptr<CT_TextNormalAutofit> normAutoFit();
			std::shared_ptr<CT_TextShapeAutofit> spAutofit();
		};

		class CT_TextBodyProperties {
		public:
		//elements
			std::shared_ptr<CT_PresetTextShape> prstTxWarp;
			EG_TextAutofit textAutoFit;
			std::shared_ptr<CT_Scene3D> scene3D;
			EG_Text3D text3D;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_Angle rot;
			Bool spcFirstLastPara;
			ST_TextVertOverflowType vertOverflow;
			ST_TextHorzOverflowType horzOverflow;
			ST_TextVerticalType vert;
			ST_TextWrappingType wrap;
			ST_Coordinate32 lIns;
			ST_Coordinate32 tIns;
			ST_Coordinate32 rIns;
			ST_Coordinate32 bIns;
			ST_TextColumnCount numCol;
			ST_PositiveCoordinate32 spcCol;
			Bool rtlCol;
			Bool fromWordArt;
			ST_TextAnchoringType anchor;
			Bool anchorCtr;
			Bool forceAA;
			Bool upright;
			Bool compatLnSpc;
		public:
		//end
			CT_TextBodyProperties();
			CT_TextBodyProperties(CT_TextBodyProperties &b);
			CT_TextBodyProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBodyProperties& operator=(CT_TextBodyProperties &b);
			~CT_TextBodyProperties();
			std::wstring Xml();
		};

		class CT_TextBody {
		public:
		//elements
			std::shared_ptr<CT_TextBodyProperties> bodyPr;
			std::shared_ptr<CT_TextListStyle> lstStyle;
			std::vector<std::shared_ptr<CT_TextParagraph>> p;
		//attributes

		public:
		//end
			CT_TextBody(std::shared_ptr<CT_TextBodyProperties> &_bodyPr,std::shared_ptr<CT_TextParagraph> &_para);
			CT_TextBody(CT_TextBody &b);
			CT_TextBody(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBody& operator=(CT_TextBody &b);
			~CT_TextBody();
			std::wstring Xml();
		};

		class ST_TextBulletStartAtNum : Int {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class ST_TextAutonumberScheme {
		public:
		//end
			enum value {
				alphaLcParenBoth,
				alphaUcParenBoth,
				alphaLcParenR,
				alphaUcParenR,
				alphaLcPeriod,
				alphaUcPeriod,
				arabicParenBoth,
				arabicParenR,
				arabicPeriod,
				arabicPlain,
				romanLcParenBoth,
				romanUcParenBoth,
				romanLcParenR,
				romanUcParenR,
				romanLcPeriod,
				romanUcPeriod,
				circleNumDbPlain,
				circleNumWdBlackPlain,
				circleNumWdWhitePlain,
				arabicDbPeriod,
				arabicDbPlain,
				ea1ChsPeriod,
				ea1ChsPlain,
				ea1ChtPeriod,
				ea1ChtPlain,
				ea1JpnChsDbPeriod,
				ea1JpnKorPlain,
				ea1JpnKorPeriod,
				arabic1Minus,
				arabic2Minus,
				hebrew2Minus,
				thaiAlphaPeriod,
				thaiAlphaParenR,
				thaiAlphaParenBoth,
				thaiNumPeriod,
				thaiNumParenR,
				thaiNumParenBoth,
				hindiAlphaPeriod,
				hindiNumPeriod,
				hindiNumParenR,
				hindiAlpha1Period
			};
			value v;
		public:
		//end
			ST_TextAutonumberScheme(value _v);
			ST_TextAutonumberScheme(std::wstring b);
			ST_TextAutonumberScheme(ST_TextAutonumberScheme &b);
			ST_TextAutonumberScheme& operator=(value _v);
			ST_TextAutonumberScheme& operator =( ST_TextAutonumberScheme& b);
			ST_TextAutonumberScheme& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class EG_TextBulletColor {
		private:
			std::shared_ptr<CT_TextBulletColorFollowText> _buClrTx;
			std::shared_ptr<CT_Color> _buClr;
		public:
			EG_TextBulletColor();
			EG_TextBulletColor& operator=(std::shared_ptr<CT_TextBulletColorFollowText> _buClrTx);
			EG_TextBulletColor& operator=(std::shared_ptr<CT_Color> _buClr);

			std::shared_ptr<CT_TextBulletColorFollowText> buClrTx();
			std::shared_ptr<CT_Color> buClr();
		};

		class CT_TextBulletColorFollowText {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextBulletColorFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TextBulletColorFollowText();
		};

		class ST_TextBulletSizePercent {
		//end
		private:
			std::wstring v;
		public:
			bool check(std::wstring chkval);
		public:
		//end
			ST_TextBulletSizePercent();
			ST_TextBulletSizePercent(std::wstring b);
			ST_TextBulletSizePercent(ST_TextBulletSizePercent &b);
			ST_TextBulletSizePercent& operator =(ST_TextBulletSizePercent& b);
			ST_TextBulletSizePercent& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_TextBulletSizeFollowText {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextBulletSizeFollowText();
			CT_TextBulletSizeFollowText(CT_TextBulletSizeFollowText &b);
			CT_TextBulletSizeFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBulletSizeFollowText& operator=(CT_TextBulletSizeFollowText &b);
			~CT_TextBulletSizeFollowText();
			std::wstring Xml();
		};

		class CT_TextBulletSizePercent {
		public:
		//elements

		//attributes
			ST_TextBulletSizePercent val;
		public:
		//end
			CT_TextBulletSizePercent(ST_TextBulletSizePercent &_val);
			CT_TextBulletSizePercent(CT_TextBulletSizePercent &b);
			CT_TextBulletSizePercent(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBulletSizePercent& operator=(CT_TextBulletSizePercent &b);
			~CT_TextBulletSizePercent();
			std::wstring Xml();
		};

		class ST_TextFontSize : Int {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class CT_TextBulletSizePoint {
		public:
		//elements

		//attributes
			ST_TextFontSize val;
		public:
		//end
			CT_TextBulletSizePoint();
			CT_TextBulletSizePoint(CT_TextBulletSizePoint &b);
			CT_TextBulletSizePoint(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBulletSizePoint& operator=(CT_TextBulletSizePoint &b);
			~CT_TextBulletSizePoint();
			std::wstring Xml();
		};

		class EG_TextBulletSize {
		private:
			std::shared_ptr<CT_TextBulletSizeFollowText> _buSzTx;
			std::shared_ptr<CT_TextBulletSizePercent> _buSzPct;
			std::shared_ptr<CT_TextBulletSizePoint> _buSzPts;
		public:
			EG_TextBulletSize();
			EG_TextBulletSize& operator=(std::shared_ptr<CT_TextBulletSizeFollowText> &__buSzTx);
			EG_TextBulletSize& operator=(std::shared_ptr<CT_TextBulletSizePercent> &__buSzPct);
			EG_TextBulletSize& operator=(std::shared_ptr<CT_TextBulletSizePoint> &__buSzPts);

			std::shared_ptr<CT_TextBulletSizeFollowText> buSzTx();
			std::shared_ptr<CT_TextBulletSizePercent> buSzPct();
			std::shared_ptr<CT_TextBulletSizePoint> buSzPts();
		};

		class CT_TextBulletTypefaceFollowText {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextBulletTypefaceFollowText();
			CT_TextBulletTypefaceFollowText(CT_TextBulletTypefaceFollowText &b);
			CT_TextBulletTypefaceFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBulletTypefaceFollowText& operator=(CT_TextBulletTypefaceFollowText &b);
			~CT_TextBulletTypefaceFollowText();
			std::wstring Xml();
		};

		class EG_TextBulletTypeface {
		private:
			std::shared_ptr<CT_TextBulletTypefaceFollowText> _buFontTx;
			std::shared_ptr<CT_TextFont> _buFont;
		public:
			EG_TextBulletTypeface();
			EG_TextBulletTypeface& operator=(std::shared_ptr<CT_TextBulletTypefaceFollowText> &__buFontTx);
			EG_TextBulletTypeface& operator=(std::shared_ptr<CT_TextFont> &__buFont);

			std::shared_ptr<CT_TextBulletTypefaceFollowText> buFontTx();
			std::shared_ptr<CT_TextFont> buFont();
		};

		class CT_TextAutonumberBullet {
		public:
		//elements

		//attributes
			ST_TextAutonumberScheme type;
			ST_TextBulletStartAtNum startAt;
		public:
		//end
			CT_TextAutonumberBullet(ST_TextAutonumberScheme &_type);
			CT_TextAutonumberBullet(CT_TextAutonumberBullet &b);
			CT_TextAutonumberBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextAutonumberBullet& operator=(CT_TextAutonumberBullet &b);
			~CT_TextAutonumberBullet();
			std::wstring Xml();
		};

		class CT_TextCharBullet {
		public:
		//elements

		//attributes
			std::wstring _char;
		public:
		//end
			CT_TextCharBullet(std::wstring &__char);
			CT_TextCharBullet(CT_TextCharBullet &b);
			CT_TextCharBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextCharBullet& operator=(CT_TextCharBullet &b);
			~CT_TextCharBullet();
			std::wstring Xml();
		};

		class CT_TextBlipBullet {
		public:
		//elements
			std::shared_ptr<CT_Blip> blip;
		//attributes

		public:
		//end
			CT_TextBlipBullet(std::shared_ptr<CT_Blip> &_blip);
			CT_TextBlipBullet(CT_TextBlipBullet &b);
			CT_TextBlipBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextBlipBullet& operator=(CT_TextBlipBullet &b);
			~CT_TextBlipBullet();
			std::wstring Xml();
		};

		class CT_TextNoBullet {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextNoBullet();
			CT_TextNoBullet(CT_TextNoBullet &b);
			CT_TextNoBullet(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextNoBullet& operator=(CT_TextNoBullet &b);
			~CT_TextNoBullet();
			std::wstring Xml();
		};

		class EG_TextBullet {
		private:
			std::shared_ptr<CT_TextNoBullet> _buNone;
			std::shared_ptr<CT_TextAutonumberBullet> _buAutoNum;
			std::shared_ptr<CT_TextCharBullet> _buChar;
			std::shared_ptr<CT_TextBlipBullet> _buBlip;
		public:
			EG_TextBullet();

			EG_TextBullet& operator=(std::shared_ptr<CT_TextNoBullet> &__buNone);
			EG_TextBullet& operator=(std::shared_ptr<CT_TextAutonumberBullet> &__buAutoNum);
			EG_TextBullet& operator=(std::shared_ptr<CT_TextCharBullet> &__buChar);
			EG_TextBullet& operator=(std::shared_ptr<CT_TextBlipBullet> &__buBlip);

			std::shared_ptr<CT_TextNoBullet> buNone();
			std::shared_ptr<CT_TextAutonumberBullet> buAutoNum();
			std::shared_ptr<CT_TextCharBullet> buChar();
			std::shared_ptr<CT_TextBlipBullet> buBlip();
		};

		class ST_TextPoint {//todo
		public:
		//elements
			//<xsd:union memberTypes="ST_TextPointUnqualified s:ST_UniversalMeasure"/>
		//attributes

		public:
		//end
			ST_TextPoint& operator =( ST_TextPoint& b);
			ST_TextPoint& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextPointUnqualified : Int {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class ST_TextNonNegativePoint : Int {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class CT_TextFont {
		public:
		//elements

		//attributes
			ST_TextTypeface typeface;
			officeDocument::sharedTypes::ST_Panose panose;
			Byte pitchAndFamily;
			Byte charset;
		public:
		//end
			CT_TextFont(ST_TextTypeface &_typeface);
			CT_TextFont(CT_TextFont &b);
			CT_TextFont(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextFont& operator=(CT_TextFont &b);
			~CT_TextFont();
			std::wstring Xml();
		};

		class ST_TextUnderlineType {
		public:
		//end
			enum value {
				none,
				words,
				sng,
				dbl,
				heavy,
				dotted,
				dottedHeavy,
				dash,
				dashHeavy,
				dashLong,
				dashLongHeavy,
				dotDash,
				dotDashHeavy,
				dotDotDash,
				dotDotDashHeavy,
				wavy,
				wavyHeavy,
				wavyDbl
			};
			value v;
		public:
		//end
			ST_TextUnderlineType(value _v);
			ST_TextUnderlineType(std::wstring b);
			ST_TextUnderlineType(ST_TextUnderlineType &b);
			ST_TextUnderlineType& operator=(value _v);
			ST_TextUnderlineType& operator =(ST_TextUnderlineType& b);
			ST_TextUnderlineType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_TextUnderlineLineFollowText {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextUnderlineLineFollowText();
			CT_TextUnderlineLineFollowText(CT_TextUnderlineLineFollowText &b);
			CT_TextUnderlineLineFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextUnderlineLineFollowText& operator=(CT_TextUnderlineLineFollowText &b);
			~CT_TextUnderlineLineFollowText();
			std::wstring Xml();
		};

		class CT_TextUnderlineFillFollowText {
		public:
		//elements

		//attributes

		public:
		//end
			CT_TextUnderlineFillFollowText();
			CT_TextUnderlineFillFollowText(CT_TextUnderlineFillFollowText &b);
			CT_TextUnderlineFillFollowText(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextUnderlineFillFollowText& operator=(CT_TextUnderlineFillFollowText &b);
			~CT_TextUnderlineFillFollowText();
			std::wstring Xml();
		};

		class CT_TextUnderlineFillGroupWrapper {
		public:
		//elements
			EG_FillProperties fillProperties;
		//attributes

		public:
		//end
			CT_TextUnderlineFillGroupWrapper(EG_FillProperties &_fillProperties);
			CT_TextUnderlineFillGroupWrapper(CT_TextUnderlineFillGroupWrapper &b);
			CT_TextUnderlineFillGroupWrapper(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextUnderlineFillGroupWrapper& operator=(CT_TextUnderlineFillGroupWrapper &b);
			~CT_TextUnderlineFillGroupWrapper();
			std::wstring Xml();
		};

		class EG_TextUnderlineLine {
		private:
			std::shared_ptr<CT_TextUnderlineLineFollowText> _uLnTx;
			std::shared_ptr<CT_LineProperties> _uLn;
		public:
			EG_TextUnderlineLine();

			EG_TextUnderlineLine& operator=(std::shared_ptr<CT_TextUnderlineLineFollowText> &__uLnTx);
			EG_TextUnderlineLine& operator=(std::shared_ptr<CT_LineProperties> &__uLn);

			std::shared_ptr<CT_TextUnderlineLineFollowText> uLnTx();
			std::shared_ptr<CT_LineProperties> uLn();
		};

		class EG_TextUnderlineFill {
		private:
			std::shared_ptr<CT_TextUnderlineFillFollowText> _uFillTx;
			std::shared_ptr<CT_TextUnderlineFillGroupWrapper> _uFill;
		public:
			EG_TextUnderlineFill();

			EG_TextUnderlineFill& operator=(std::shared_ptr<CT_TextUnderlineFillFollowText> &__uFillTx);
			EG_TextUnderlineFill& operator=(std::shared_ptr<CT_TextUnderlineFillGroupWrapper> &__uFill);

			std::shared_ptr<CT_TextUnderlineFillFollowText> uFillTx();
			std::shared_ptr<CT_TextUnderlineFillGroupWrapper> uFill();
		};

		class ST_TextStrikeType {
		public:
		//end
			enum value {
				noStrike,
				sngStrike,
				dblStrike
			};
			value v;
		public:
		//end
			ST_TextStrikeType(value _v);
			ST_TextStrikeType(std::wstring b);
			ST_TextStrikeType(ST_TextStrikeType &b);
			ST_TextStrikeType& operator=(value _v);
			ST_TextStrikeType& operator =(ST_TextStrikeType& b);
			ST_TextStrikeType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextCapsType {
		public:
		//end
			enum value {
				none,
				small,
				all
			};
			value v;
		public:
		//end
			ST_TextCapsType(value _v);
			ST_TextCapsType(std::wstring b);
			ST_TextCapsType(ST_TextCapsType &b);
			ST_TextCapsType& operator=(value _v);
			ST_TextCapsType& operator =( ST_TextCapsType& b);
			ST_TextCapsType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_TextCharacterProperties {
		public:
		//elements
			std::shared_ptr<CT_LineProperties> ln;
			EG_FillProperties fillProperties;
			EG_EffectProperties effectProperties;

			std::shared_ptr<CT_Color> highlight;
			
			EG_TextUnderlineLine textUnderlineLine;
			EG_TextUnderlineFill textUnderlineFill;
			
			std::shared_ptr<CT_TextFont> latin;
			std::shared_ptr<CT_TextFont> ea;
			std::shared_ptr<CT_TextFont> cs;
			std::shared_ptr<CT_TextFont> sym;
			std::shared_ptr<CT_Hyperlink> hlinkClick;
			std::shared_ptr<CT_Hyperlink> hlinkMouseOver;
			std::shared_ptr<CT_Boolean> rtl;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			Bool kumimoji;
			officeDocument::sharedTypes::ST_Lang lang;
			officeDocument::sharedTypes::ST_Lang altLang;
			ST_TextFontSize sz;
			Bool b;
			Bool i;
			ST_TextUnderlineType u;
			ST_TextStrikeType strike;
			ST_TextNonNegativePoint kern;
			ST_TextCapsType cap;
			ST_TextPoint spc;
			Bool normalizeH;
			ST_Percentage baseline;
			Bool noProof;
			Bool dirty;
			Bool err;
			Bool smtClean;
			UInt smtId;
			std::wstring bmk;
		public:
		//end
			CT_TextCharacterProperties();
			CT_TextCharacterProperties(CT_TextCharacterProperties &b);
			CT_TextCharacterProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextCharacterProperties& operator=(CT_TextCharacterProperties &b);
			~CT_TextCharacterProperties();
			std::wstring Xml();
		};
		
		class CT_Boolean {
		public:
		//elements

		//attributes
			officeDocument::sharedTypes::ST_OnOff val;
		public:
		//end
			CT_Boolean();
			CT_Boolean(CT_Boolean &b);
			CT_Boolean(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_Boolean& operator=(CT_Boolean &b);
			~CT_Boolean();
			std::wstring Xml();
		};

		class ST_TextSpacingPoint : Int {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class CT_TextSpacingPercent {
		public:
		//elements

		//attributes
			ST_TextSpacingPercentOrPercentString val;
		public:
		//end
			CT_TextSpacingPercent(ST_TextSpacingPercentOrPercentString &_val);
			CT_TextSpacingPercent(CT_TextSpacingPercent &b);
			CT_TextSpacingPercent(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextSpacingPercent& operator=(CT_TextSpacingPercent &b);
			~CT_TextSpacingPercent();
			std::wstring Xml();
		};

		class CT_TextSpacingPoint {
		public:
		//elements

		//attributes
			ST_TextSpacingPoint val;
		public:
		//end
			CT_TextSpacingPoint(ST_TextSpacingPoint &_val);
			CT_TextSpacingPoint(CT_TextSpacingPoint &b);
			CT_TextSpacingPoint(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextSpacingPoint& operator=(CT_TextSpacingPoint &b);
			~CT_TextSpacingPoint();
			std::wstring Xml();
		};

		class ST_TextMargin : public ST_Coordinate32Unqualified {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class ST_TextIndent : public ST_Coordinate32Unqualified {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class ST_TextTabAlignType {
		public:
		//end
			enum value {
				l,
				ctr,
				r,
				dec
			};
			value v;
		public:
		//end
			ST_TextTabAlignType(value _v);
			ST_TextTabAlignType(std::wstring b);
			ST_TextTabAlignType(ST_TextTabAlignType &b);
			ST_TextTabAlignType& operator=(value _v);
			ST_TextTabAlignType& operator =( ST_TextTabAlignType& b);
			ST_TextTabAlignType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class CT_TextTabStop {
		public:
		//elements

		//attributes
			ST_Coordinate32 pos;
			ST_TextTabAlignType algn;
		public:
		//end
			CT_TextTabStop();
			CT_TextTabStop(CT_TextTabStop &b);
			CT_TextTabStop(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextTabStop& operator=(CT_TextTabStop &b);
			~CT_TextTabStop();
			std::wstring Xml();
		};

		class CT_TextTabStopList {
		public:
		//elements
			std::shared_ptr<CT_TextTabStop> tab[32];
		//attributes

		public:
		//end
			CT_TextTabStopList();
			CT_TextTabStopList(CT_TextTabStopList &b);
			CT_TextTabStopList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextTabStopList& operator=(CT_TextTabStopList &b);
			~CT_TextTabStopList();
			std::wstring Xml();
		};

		class CT_TextLineBreak {
		public:
		//elements
			std::shared_ptr<CT_TextCharacterProperties> rPr;
		//attributes

		public:
		//end
			CT_TextLineBreak();
			CT_TextLineBreak(CT_TextLineBreak &b);
			CT_TextLineBreak(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextLineBreak& operator=(CT_TextLineBreak &b);
			~CT_TextLineBreak();
			std::wstring Xml();
		};

		class CT_TextSpacing {
		public:
		//elements
			class Choice {
			private:
				std::shared_ptr<CT_TextSpacingPercent> _spcPct;
				std::shared_ptr<CT_TextSpacingPoint> _spcPts;
			public:
				Choice();

				Choice& operator=(std::shared_ptr<CT_TextSpacingPercent> &__spcPct);
				Choice& operator=(std::shared_ptr<CT_TextSpacingPoint> &__spcPts);

				std::shared_ptr<CT_TextSpacingPercent> spcPct();
				std::shared_ptr<CT_TextSpacingPoint> spcPts();
			};
			Choice choice;
		//attributes

		public:
		//end
			CT_TextSpacing();
			CT_TextSpacing(CT_TextSpacing &b);
			CT_TextSpacing(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextSpacing& operator=(CT_TextSpacing &b);
			~CT_TextSpacing();
			std::wstring Xml();
		};

		class ST_TextAlignType {
		public:
		//end
			enum value {
				l,
				ctr,
				r,
				just,
				justLow,
				dist,
				thaiDist
			};
			value v;
		public:
		//end
			ST_TextAlignType(value _v);
			ST_TextAlignType(std::wstring b);
			ST_TextAlignType(ST_TextAlignType &b);
			ST_TextAlignType& operator=(value _v);
			ST_TextAlignType& operator =( ST_TextAlignType& b);
			ST_TextAlignType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextFontAlignType {
		public:
		//end
			enum value {
				_auto,
				t,
				ctr,
				base,
				b
			};
			value v;
		public:
		//end
			ST_TextFontAlignType(value _v);
			ST_TextFontAlignType(std::wstring b);
			ST_TextFontAlignType(ST_TextFontAlignType &b);
			ST_TextFontAlignType& operator=(value _v);
			ST_TextFontAlignType& operator =( ST_TextFontAlignType& b);
			ST_TextFontAlignType& operator =(std::wstring b);
			operator const wchar_t*() const;
			operator std::wstring () const;
		};

		class ST_TextIndentLevelType : Int {
		public:
		//end
			bool check(int chkval);
		public:
		//end
		};

		class CT_TextParagraphProperties {
		public:
		//elements
			std::shared_ptr<CT_TextSpacing> lnSpc;
			std::shared_ptr<CT_TextSpacing> spcBef;
			std::shared_ptr<CT_TextSpacing> spcAft;
			
			EG_TextBulletColor textBulletColor;
			EG_TextBulletSize textBulletSize;
			EG_TextBulletTypeface textBulletTypeface;
			EG_TextBullet textBullet;

			std::shared_ptr<CT_TextTabStopList> tabLst;
			std::shared_ptr<CT_TextCharacterProperties> defRPr;
			std::shared_ptr<CT_OfficeArtExtensionList> extLst;
		//attributes
			ST_TextMargin marL;
			ST_TextMargin marR;
			ST_TextIndentLevelType lvl;
			ST_TextIndent indent;
			ST_TextAlignType algn;
			ST_Coordinate32 defTabSz;
			Bool rtl;
			Bool eaLnBrk;
			ST_TextFontAlignType fontAlgn;
			Bool latinLnBrk;
			Bool hangingPunct;
		public:
		//end
			CT_TextParagraphProperties();
			CT_TextParagraphProperties(CT_TextParagraphProperties &b);
			CT_TextParagraphProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextParagraphProperties& operator=(CT_TextParagraphProperties &b);
			~CT_TextParagraphProperties();
			std::wstring Xml();
		};

		class CT_TextField {
		public:
		//elements
			std::shared_ptr<CT_TextCharacterProperties> rPr;
			std::shared_ptr<CT_TextParagraphProperties> pPr;
			std::wstring t;
		//attributes
			officeDocument::sharedTypes::ST_Guid id;
			std::wstring type;
		public:
		//end
			CT_TextField(officeDocument::sharedTypes::ST_Guid &_id,	std::wstring &_type);
			CT_TextField(CT_TextField &b);
			CT_TextField(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_TextField& operator=(CT_TextField &b);
			~CT_TextField();
			std::wstring Xml();
		};

		class CT_RegularTextRun {
		public:
		//elements
			std::shared_ptr<CT_TextCharacterProperties> rPr;
			std::wstring t;
		//attributes

		public:
		//end
			CT_RegularTextRun(std::wstring &_t);
			CT_RegularTextRun(CT_RegularTextRun &b);
			CT_RegularTextRun(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			CT_RegularTextRun& operator=(CT_RegularTextRun &b);
			~CT_RegularTextRun();
			std::wstring Xml();
		};
	}
}
