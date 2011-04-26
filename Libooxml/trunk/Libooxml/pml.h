#pragma once
#include <Windows.h>
#include <string>
#include <vector>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "core.h"
#include "dml-main.h"
#include "shared-relationshipReference.h"
#include "shared-commonSimpleTypes.h"

namespace presentationml
{
	namespace main
	{
		class ST_TransitionSideDirectionType;
		class ST_TransitionCornerDirectionType;
		class ST_TransitionInOutDirectionType;
		class CT_SideDirectionTransition;
		class CT_CornerDirectionTransition;
		class ST_TransitionEightDirectionType;
		class CT_EightDirectionTransition;
		class CT_OrientationTransition;
		class CT_InOutTransition;
		class CT_OptionalBlackTransition;
		class CT_SplitTransition;
		class CT_WheelTransition;
		class CT_TransitionStartSoundAction;
		class CT_TransitionSoundAction;
		class ST_TransitionSpeed;
		class CT_SlideTransition;
		class ST_TLTimeIndefinite;
		class ST_TLTime;
		class CT_TLIterateIntervalTime;
		class CT_TLIterateIntervalPercentage;
		class ST_IterateType;
		class CT_TLIterateData;
		class CT_TLSubShapeId;
		class CT_TLTextTargetElement;
		class ST_TLChartSubelementType;
		class CT_TLOleChartTargetElement;
		class CT_TLShapeTargetElement;
		class CT_TLTimeTargetElement;
		class CT_TLTriggerTimeNodeID;
		class ST_TLTriggerRuntimeNode;
		class CT_TLTriggerRuntimeNode;
		class ST_TLTriggerEvent;
		class CT_TLTimeCondition;
		class CT_TLTimeConditionList;
		class CT_TimeNodeList;
		class ST_TLTimeNodePresetClassType;
		class ST_TLTimeNodeRestartType;
		class ST_TLTimeNodeFillType;
		class ST_TLTimeNodeSyncType;
		class ST_TLTimeNodeMasterRelation;
		class ST_TLTimeNodeType;
		class CT_TLCommonTimeNodeData;
		class CT_TLTimeNodeParallel;
		class ST_TLNextActionType;
		class ST_TLPreviousActionType;
		class CT_TLTimeNodeSequence;
		class CT_TLTimeNodeExclusive;
		class CT_TLBehaviorAttributeNameList;
		class ST_TLBehaviorAdditiveType;
		class ST_TLBehaviorAccumulateType;
		class ST_TLBehaviorTransformType;
		class ST_TLBehaviorOverrideType;
		class CT_TLCommonBehaviorData;
		class CT_TLAnimVariantBooleanVal;
		class CT_TLAnimVariantIntegerVal;
		class CT_TLAnimVariantFloatVal;
		class CT_TLAnimVariantStringVal;
		class CT_TLAnimVariant;
		class ST_TLTimeAnimateValueTime;
		class CT_TLTimeAnimateValue;
		class CT_TLTimeAnimateValueList;
		class ST_TLAnimateBehaviorCalcMode;
		class ST_TLAnimateBehaviorValueType;
		class CT_TLAnimateBehavior;
		class CT_TLByRgbColorTransform;
		class CT_TLByHslColorTransform;
		class CT_TLByAnimateColorTransform;
		class ST_TLAnimateColorSpace;
		class ST_TLAnimateColorDirection;
		class CT_TLAnimateColorBehavior;
		class ST_TLAnimateEffectTransition;
		class CT_TLAnimateEffectBehavior;
		class ST_TLAnimateMotionBehaviorOrigin;
		class ST_TLAnimateMotionPathEditMode;
		class CT_TLPoint;
		class CT_TLAnimateMotionBehavior;
		class CT_TLAnimateRotationBehavior;
		class CT_TLAnimateScaleBehavior;
		class ST_TLCommandType;
		class CT_TLCommandBehavior;
		class CT_TLSetBehavior;
		class CT_TLCommonMediaNodeData;
		class CT_TLMediaNodeAudio;
		class CT_TLMediaNodeVideo;
		class CT_TLTemplate;
		class CT_TLTemplateList;
		class ST_TLParaBuildType;
		class CT_TLBuildParagraph;
		class ST_TLDiagramBuildType;
		class CT_TLBuildDiagram;
		class ST_TLOleChartBuildType;
		class CT_TLOleBuildChart;
		class CT_TLGraphicalObjectBuild;
		class CT_BuildList;
		class CT_SlideTiming;
		class CT_Empty;
		typedef std::wstring ST_Name;
		class ST_Direction;
		typedef unsigned int ST_Index;
		class CT_IndexRange;
		class CT_SlideRelationshipListEntry;
		class CT_SlideRelationshipList;
		class CT_CustomShowId;
		class CT_CustomerData;
		class CT_TagsData;
		class CT_CustomerDataList;
		class CT_Extension;
		class CT_ExtensionList;
		class CT_ExtensionListModify;
		class CT_CommentAuthor;
		class CT_CommentAuthorList;
		class CT_Comment;
		class CT_CommentList;
		class ST_OleObjectFollowColorScheme;
		class CT_OleObjectEmbed;
		class CT_OleObjectLink;
		class CT_OleObject;
		class CT_Control;
		class CT_ControlList;
		class ST_SlideId;
		class CT_SlideIdListEntry;
		class CT_SlideIdList;
		class ST_SlideMasterId;
		class CT_SlideMasterIdListEntry;
		class CT_SlideMasterIdList;
		class CT_NotesMasterIdListEntry;
		class CT_NotesMasterIdList;
		class CT_HandoutMasterIdListEntry;
		class CT_HandoutMasterIdList;
		class CT_EmbeddedFontDataId;
		class CT_EmbeddedFontListEntry;
		class CT_EmbeddedFontList;
		class CT_SmartTags;
		class CT_CustomShow;
		class CT_CustomShowList;
		class ST_PhotoAlbumLayout;
		class ST_PhotoAlbumFrameShape;
		class CT_PhotoAlbum;
		class ST_SlideSizeCoordinate;
		class ST_SlideSizeType;
		class CT_SlideSize;
		class CT_Kinsoku;
		class ST_BookmarkIdSeed;
		class CT_ModifyVerifier;
		class CT_Presentation;
		class CT_HtmlPublishProperties;
		class ST_WebColorType;
		class ST_WebScreenSize;
		class ST_WebEncoding;
		class CT_WebProperties;
		class ST_PrintWhat;
		class ST_PrintColorMode;
		class CT_PrintProperties;
		class CT_ShowInfoBrowse;
		class CT_ShowInfoKiosk;
		class CT_ShowProperties;
		class CT_PresentationProperties;
		class CT_HeaderFooter;
		class ST_PlaceholderType;
		class ST_PlaceholderSize;
		class CT_Placeholder;
		class CT_ApplicationNonVisualDrawingProps;
		class CT_ShapeNonVisual;
		class CT_Shape;
		class CT_ConnectorNonVisual;
		class CT_Connector;
		class CT_PictureNonVisual;
		class CT_Picture;
		class CT_GraphicalObjectFrameNonVisual;
		class CT_GraphicalObjectFrame;
		class CT_GroupShapeNonVisual;
		class CT_GroupShape;
		class CT_Rel;
		class CT_BackgroundProperties;
		class CT_Background;
		class CT_CommonSlideData;
		class CT_Slide;
		class ST_SlideLayoutType;
		class CT_SlideLayout;
		class CT_SlideMasterTextStyles;
		class ST_SlideLayoutId;
		class CT_SlideLayoutIdListEntry;
		class CT_SlideLayoutIdList;
		class CT_SlideMaster;
		class CT_HandoutMaster;
		class CT_NotesMaster;
		class CT_NotesSlide;
		class CT_SlideSyncProperties;
		class CT_StringTag;
		class CT_TagList;
		class ST_SplitterBarState;
		class ST_ViewType;
		class CT_NormalViewPortion;
		class CT_NormalViewProperties;
		class CT_CommonViewProperties;
		class CT_NotesTextViewProperties;
		class CT_OutlineViewSlideEntry;
		class CT_OutlineViewSlideList;
		class CT_OutlineViewProperties;
		class CT_SlideSorterViewProperties;
		class CT_Guide;
		class CT_GuideList;
		class CT_CommonSlideViewProperties;
		class CT_SlideViewProperties;
		class CT_NotesViewProperties;
		class CT_ViewProperties;
	}
}

namespace presentationml
{
	namespace main
	{
		class ST_TransitionSideDirectionType {
			//end
		public:
			enum value {
				l,
				u,
				r,
				d
			};
			value v;
		};
		class ST_TransitionCornerDirectionType {
		public:
			//end
			enum value {
				lu,
				ru,
				ld,
				rd
			};
			value v;
		};
		class ST_TransitionInOutDirectionType {
		public:
			//end
			enum value {
				out,
				in
			};
			value v;
		};
		class CT_SideDirectionTransition {
		public:
			//attributes
			ST_TransitionSideDirectionType dir;
		public:
			//end
			CT_SideDirectionTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SideDirectionTransition();
		};
		class CT_CornerDirectionTransition {
		public:
			//attributes
			ST_TransitionCornerDirectionType dir;
		public:
			//end
			CT_CornerDirectionTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CornerDirectionTransition();
		};
		class ST_TransitionEightDirectionType {
		public:
			//end
			//<xsd:union memberTypes="ST_TransitionSideDirectionType ST_TransitionCornerDirectionType"/>
			enum value {
				l,
				u,
				r,
				d,
				lu,
				ru,
				ld,
				rd
			};
			value v;
		};
		class CT_EightDirectionTransition {
		public:
			//attributes
			ST_TransitionEightDirectionType dir;
		public:
			//end
			CT_EightDirectionTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_EightDirectionTransition();
		};
		class CT_OrientationTransition {
		public:
			//attributes
			ST_Direction dir;
		public:
			//end
			CT_OrientationTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OrientationTransition();
		};
		class CT_InOutTransition {
		public:
			//attributes
			ST_TransitionInOutDirectionType dir;
		public:
			//end
			CT_InOutTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_InOutTransition();
		};
		class CT_OptionalBlackTransition {
		public:
			//attributes
			Bool thruBlk;
		public:
			//end
			CT_OptionalBlackTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OptionalBlackTransition();
		};
		class CT_SplitTransition {
		public:
			//elements
			ST_Direction *orient;

			//attributes
			ST_TransitionInOutDirectionType dir;
		public:
			//end
			CT_SplitTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SplitTransition();
		};
		class CT_WheelTransition {
		public:
			//attributes
			UInt spokes;
		public:
			//end
			CT_WheelTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_WheelTransition();
		};
		class CT_TransitionStartSoundAction {
		public:
			//elements
			drawingml::main::CT_EmbeddedWAVAudioFile *snd;
		public:
			//end
			CT_TransitionStartSoundAction(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TransitionStartSoundAction();
		};
		class CT_TransitionSoundAction {
		public:
			//elements
			union {
				CT_TransitionStartSoundAction *stSnd;
				CT_Empty *endSnd;
			};
		public:
			//end
			CT_TransitionSoundAction(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TransitionSoundAction();
		};
		class ST_TransitionSpeed {
		public:
			//end
			enum value {
				slow,
				med,
				fast
			};
			value v;
		};
		class CT_SlideTransition {
		public:
			//elements
			union {
				CT_OrientationTransition *blinds;
				CT_OrientationTransition *checker;
				CT_Empty *circle;
				CT_Empty *dissolve;
				CT_OrientationTransition *comb;
				CT_EightDirectionTransition *cover;
				CT_OptionalBlackTransition *cut;
				CT_Empty *diamond;
				CT_OptionalBlackTransition *fade;
				CT_Empty *newsflash;
				CT_Empty *plus;
				CT_EightDirectionTransition *pull;
				CT_SideDirectionTransition *push;
				CT_Empty *random;
				CT_OrientationTransition *randomBar;
				CT_SplitTransition *split;
				CT_CornerDirectionTransition *strips;
				CT_Empty *wedge;
				CT_WheelTransition *wheel;
				CT_SideDirectionTransition *wipe;
				CT_InOutTransition *zoom;
			};
			CT_TransitionSoundAction *sndAc;
			CT_ExtensionListModify *extLst;

			//attributes
			ST_TransitionSpeed spd;
			Bool advClick;
			UInt advTm;
		public:
			//end
			CT_SlideTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideTransition();
		};
		class ST_TLTimeIndefinite {
		public:
			//end
			enum value {
				indefinite
			};
			value v;
		};
		class ST_TLTime {
		public:
			//end
			enum value {
				indefinite
			};
			union {
				UInt val;
				value v;
			};
			/*<xsd:union memberTypes="xsd:unsignedInt ST_TLTimeIndefinite"/>*/
		};
		typedef UInt ST_TLTimeNodeID;
		class CT_TLIterateIntervalTime {
		public:
			//attributes
			ST_TLTime val;
		public:
			//end
			CT_TLIterateIntervalTime(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLIterateIntervalTime();
		};
		class CT_TLIterateIntervalPercentage {
		public:
			//attributes
			drawingml::main::ST_PositivePercentage val;
		public:
			//end
			CT_TLIterateIntervalPercentage(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLIterateIntervalPercentage();
		};
		class ST_IterateType {
		public:
			//end
			enum value {
				el,
				wd,
				lt
			};
			value v;
		};
		class CT_TLIterateData {
		public:
			//elements
			union {
				CT_TLIterateIntervalTime *tmAbs;
				CT_TLIterateIntervalPercentage *tmPct;
			};
		public:
			//end
			CT_TLIterateData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLIterateData();
		};
		class CT_TLSubShapeId {
		public:
			//attributes
			drawingml::main::ST_ShapeID spId;
		public:
			//end
			CT_TLSubShapeId(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLSubShapeId();
		};
		class CT_TLTextTargetElement {
		public:
			//elements
			union {
				CT_IndexRange *charRg;
				CT_IndexRange *pRg;
			};
		public:
			//end
			CT_TLTextTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTextTargetElement();
		};
		class ST_TLChartSubelementType {
		public:
			//end
			enum value {
				gridLegend,
				series,
				category,
				ptInSeries,
				ptInCategory
			};
			value v;
		};
		class CT_TLOleChartTargetElement {
		public:
			//attributes
			ST_TLChartSubelementType type;
			UInt lvl;
		public:
			//end
			CT_TLOleChartTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLOleChartTargetElement();
		};
		class CT_TLShapeTargetElement {
		public:
			//elements
			union {
				CT_Empty *bg;
				CT_TLSubShapeId *subSp;
				CT_TLOleChartTargetElement *oleChartEl;
				CT_TLTextTargetElement *txEl;
				drawingml::main::CT_AnimationElementChoice *graphicEl;
			};
		public:
			//end
			 CT_TLShapeTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLShapeTargetElement();
		};
		class CT_TLTimeTargetElement {
		public:
			//elements
			union {
				CT_Empty *sldTgt;
				drawingml::main::CT_EmbeddedWAVAudioFile *sndTgt;
				CT_TLShapeTargetElement *spTgt;
				CT_TLSubShapeId *inkTgt;
			};
		public:
			//end
			CT_TLTimeTargetElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeTargetElement();
		};
		class CT_TLTriggerTimeNodeID {
		public:
			//attributes
			ST_TLTimeNodeID val;
		public:
			//end
			CT_TLTriggerTimeNodeID(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTriggerTimeNodeID();
		};
		class ST_TLTriggerRuntimeNode {
		public:
			//end
			enum value {
				first,
				last,
				all
			};
			value v;
		};
		class CT_TLTriggerRuntimeNode {
		public:
			//attributes
			ST_TLTriggerRuntimeNode val;
		public:
			//end
			CT_TLTriggerRuntimeNode(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTriggerRuntimeNode();
		};
		class ST_TLTriggerEvent {
		public:
			//end
			enum value {
				onBegin,
				onEnd,
				begin,
				end,
				onClick,
				onDblClick,
				onMouseOver,
				onMouseOut,
				onNext,
				onPrev,
				onStopAudio
			};
			value v;
		};
		class CT_TLTimeCondition {
		public:
			//elements
			union _choice {
				CT_TLTimeTargetElement *tgtEl;
				CT_TLTriggerTimeNodeID *tn;
				CT_TLTriggerRuntimeNode *rtn;
			};
			std::vector<_choice> choice;
			//attributes
			ST_TLTriggerEvent evt;
			ST_TLTime delay;
		public:
			//end
			CT_TLTimeCondition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeCondition();
		};
		class CT_TLTimeConditionList {
		public:
			//elements
			std::vector<CT_TLTimeCondition*> cond;
		public:
			//end
			CT_TLTimeConditionList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeConditionList();
		};
		class CT_TimeNodeList {
		public:
			//elements
			union _choice {
				CT_TLTimeNodeParallel *par;
				CT_TLTimeNodeSequence *seq;
				CT_TLTimeNodeExclusive *excl;
				CT_TLAnimateBehavior *anim;
				CT_TLAnimateColorBehavior *animClr;
				CT_TLAnimateEffectBehavior *animEffect;
				CT_TLAnimateMotionBehavior *animMotion;
				CT_TLAnimateRotationBehavior *animRot;
				CT_TLAnimateScaleBehavior *animScale;
				CT_TLCommandBehavior *cmd;
				CT_TLSetBehavior *set;
				CT_TLMediaNodeAudio *audio;
				CT_TLMediaNodeVideo *video;
			};
			std::vector<_choice> choice;
		public:
			//end
			CT_TimeNodeList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TimeNodeList();
		};
		class ST_TLTimeNodePresetClassType {
		public:
			//end
			enum value {
				entr,
				exit,
				emph,
				path,
				verb,
				mediacall
			};
			value v;
		};
		class ST_TLTimeNodeRestartType {
		public:
			//end
			enum value {
				always,
				whenNotActive,
				never
			};
			value v;
		};
		class ST_TLTimeNodeFillType {
		public:
			//end
			enum value {
				remove,
				freeze,
				hold,
				transition
			};
			value v;
		};
		class ST_TLTimeNodeSyncType {
		public:
			//end
			enum value {
				canSlip,
				locked
			};
			value v;
		};
		class ST_TLTimeNodeMasterRelation {
		public:
			//end
			enum value {
				sameClick,
				lastClick,
				nextclick
			};
			value v;
		};
		class ST_TLTimeNodeType {
		public:
			//end
			enum value {
				clickEffect,
				withEffect,
				afterEffect,
				mainSeq,
				interactiveSeq,
				clickPar,
				withGroup,
				afterGroup,
				tmRoot
			};
			value v;
		};
		class CT_TLCommonTimeNodeData {
		public:
			//elements
			CT_TLTimeConditionList *stCondLst;
			CT_TLTimeConditionList *endCondLst;
			CT_TLTimeCondition *endSync;
			CT_TLIterateData *iterate;
			CT_TimeNodeList *childTnLst;
			CT_TimeNodeList *subTnLst;

			//attributes
			ST_TLTimeNodeID id;
			Int presetID;
			ST_TLTimeNodePresetClassType presetClass;
			Int presetSubtype;
			ST_TLTime dur;
			ST_TLTime repeatCount;
			ST_TLTime repeatDur;
			drawingml::main::ST_Percentage spd;
			drawingml::main::ST_PositiveFixedPercentage accel;
			drawingml::main::ST_PositiveFixedPercentage decel;
			Bool autoRev;
			ST_TLTimeNodeRestartType restart;
			ST_TLTimeNodeFillType fill;
			ST_TLTimeNodeSyncType syncBehavior;
			std::wstring tmFilter;
			std::wstring evtFilter;
			Bool display;
			ST_TLTimeNodeMasterRelation masterRel;
			Int bldLvl;
			UInt grpId;
			Bool afterEffect;
			ST_TLTimeNodeType nodeType;
			Bool nodePh;
		public:
			//end
			CT_TLCommonTimeNodeData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLCommonTimeNodeData();
		};
		class CT_TLTimeNodeParallel {
		public:
			//elements
			CT_TLCommonTimeNodeData *cTn;
		public:
			//end
			CT_TLTimeNodeParallel(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeNodeParallel();
		};
		class ST_TLNextActionType {
		public:
			//end
			enum value {
				none,
				seek
			};
			value v;
		};
		class ST_TLPreviousActionType {
		public:
			//end
			enum value {
				none,
				skipTimed
			};
			value v;
		};
		class CT_TLTimeNodeSequence {
		public:
			//elements
			CT_TLCommonTimeNodeData *cTn;
			CT_TLTimeConditionList *prevCondLst;
			CT_TLTimeConditionList *nextCondLst;

			//attributes
			Bool concurrent;
			ST_TLPreviousActionType prevAc;
			ST_TLNextActionType nextAc;
		public:
			//end
			CT_TLTimeNodeSequence(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeNodeSequence();
		};
		class CT_TLTimeNodeExclusive {
		public:
			//elements
			CT_TLCommonTimeNodeData *cTn;
		public:
			//end
			CT_TLTimeNodeExclusive(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeNodeExclusive();
		};
		class CT_TLBehaviorAttributeNameList {
		public:
			//elements
			std::vector<std::wstring> attrName;
		public:
			//end
			CT_TLBehaviorAttributeNameList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLBehaviorAttributeNameList();
		};
		class ST_TLBehaviorAdditiveType {
		public:
			//end
			enum value {
				base,
				sum,
				repl,
				mult,
				none
			};
			value v;
		};
		class ST_TLBehaviorAccumulateType {
		public:
			//end
			enum value {
				none,
				always
			};
		};
		class ST_TLBehaviorTransformType {
		public:
			//end
			enum value {
				pt,
				img
			};
			value v;
		};
		class ST_TLBehaviorOverrideType {
		public:
			//end
			enum value {
				normal,
				childStyle
			};
			value v;
		};
		class CT_TLCommonBehaviorData {
		public:
			//elements
			CT_TLCommonTimeNodeData *cTn;
			CT_TLTimeTargetElement *tgtEl;
			CT_TLBehaviorAttributeNameList *attrNameLst;
			ST_TLBehaviorAdditiveType additive;
			ST_TLBehaviorAccumulateType accumulate;
			ST_TLBehaviorTransformType xfrmType;

			//attributes
			std::wstring from;
			std::wstring to;
			std::wstring by;
			std::wstring rctx;
			ST_TLBehaviorOverrideType _override;
		public:
			//end
			CT_TLCommonBehaviorData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLCommonBehaviorData();
		};
		class CT_TLAnimVariantBooleanVal {
		public:
			//attributes
			Bool val;
		public:
			//end
			CT_TLAnimVariantBooleanVal(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimVariantBooleanVal();
		};
		class CT_TLAnimVariantIntegerVal {
		public:
			//attributes
			Int val;
		public:
			//end
			CT_TLAnimVariantIntegerVal(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimVariantIntegerVal();
		};
		class CT_TLAnimVariantFloatVal {
		public:
			//attributes
			float val;
		public:
			//end
			CT_TLAnimVariantFloatVal(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimVariantFloatVal();
		};
		class CT_TLAnimVariantStringVal {
		public:
			//attributes
			std::wstring val;
		public:
			//end
			CT_TLAnimVariantStringVal(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimVariantStringVal();
		};
		class CT_TLAnimVariant {
		public:
			//elements
			union {
				CT_TLAnimVariantBooleanVal *BoolVal;
				CT_TLAnimVariantIntegerVal *intVal;
				CT_TLAnimVariantFloatVal *fltVal;
				CT_TLAnimVariantStringVal *strVal;
				drawingml::main::CT_Color *clrVal;
			};
		public:
			//end
			CT_TLAnimVariant(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimVariant();
		};
		class ST_TLTimeAnimateValueTime {
		public:
			//end
			//indefinite
			//<xsd:union memberTypes="a:ST_PositiveFixedPercentage ST_TLTimeIndefinite"/>
		};
		class CT_TLTimeAnimateValue {
		public:
			//elements
			CT_TLAnimVariant *val;

			//attributes
			ST_TLTimeAnimateValueTime tm;
			std::wstring fmla;
		public:
			//end
			CT_TLTimeAnimateValue(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeAnimateValue();
		};
		class CT_TLTimeAnimateValueList {
		public:
			//elements
			std::vector<CT_TLTimeAnimateValue*> tav;
		public:
			//end
			CT_TLTimeAnimateValueList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTimeAnimateValueList();
		};
		class ST_TLAnimateBehaviorCalcMode {
		public:
			//end
			enum value {
				discrete,
				lin,
				fmla
			};
			value v;
		};
		class ST_TLAnimateBehaviorValueType {
		public:
			//end
			enum value {
				str,
				num,
				clr
			};
			value v;
		};
		class CT_TLAnimateBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			CT_TLTimeAnimateValueList *tavLst;

			//attributes
			std::wstring by;
			std::wstring from;
			std::wstring to;
			ST_TLAnimateBehaviorCalcMode calcmode;
			ST_TLAnimateBehaviorValueType valueType;
		public:
			//end
			CT_TLAnimateBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimateBehavior();
		};
		class CT_TLByRgbColorTransform {
		public:
			//attributes
			drawingml::main::ST_FixedPercentage r;
			drawingml::main::ST_FixedPercentage g;
			drawingml::main::ST_FixedPercentage b;
		public:
			//end
			CT_TLByRgbColorTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLByRgbColorTransform();
		};
		class CT_TLByHslColorTransform {
		public:
			//attributes
			drawingml::main::ST_Angle h;
			drawingml::main::ST_FixedPercentage s;
			drawingml::main::ST_FixedPercentage l;
		public:
			//end
			CT_TLByHslColorTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLByHslColorTransform();
		};
		class CT_TLByAnimateColorTransform {
		public:
			//elements
			CT_TLByRgbColorTransform *rgb;
			CT_TLByHslColorTransform *hsl;
		public:
			//end
			CT_TLByAnimateColorTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLByAnimateColorTransform();
		};
		class ST_TLAnimateColorSpace {
		public:
			//end
			enum value {
				rgb,
				hsl
			};
			value v;
		};
		class ST_TLAnimateColorDirection {
		public:
			//end
			enum value {
				cw,
				ccw
			};
			value v;
		};
		class CT_TLAnimateColorBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			CT_TLByAnimateColorTransform *by;
			drawingml::main::CT_Color *from;
			drawingml::main::CT_Color *to;
			//attributes
			ST_TLAnimateColorSpace clrSpc;
			ST_TLAnimateColorDirection dir;
		public:
			//end
			CT_TLAnimateColorBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimateColorBehavior();
		};
		class ST_TLAnimateEffectTransition {
		public:
			//end
			enum value {
				in,
				out,
				none
			};
			value v;
		};
		class CT_TLAnimateEffectBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			CT_TLAnimVariant *progress;
			//attributes
			ST_TLAnimateEffectTransition transition;
			std::wstring filter;
			std::wstring prLst;
		public:
			//end
			CT_TLAnimateEffectBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimateEffectBehavior();
		};
		class ST_TLAnimateMotionBehaviorOrigin {
		public:
			//end
			enum value {
				parent,
				layout
			};
			value v;
		};
		class ST_TLAnimateMotionPathEditMode {
		public:
			//end
			enum value {
				relative,
				fixed
			};
			value v;
		};
		class CT_TLPoint {
		public:
			//attributes
			drawingml::main::ST_Percentage x;
			drawingml::main::ST_Percentage y;
		public:
			//end
			CT_TLPoint(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLPoint();
		};
		class CT_TLAnimateMotionBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			CT_TLPoint *by;
			CT_TLPoint *from;
			CT_TLPoint *to;
			CT_TLPoint *rCtr;
			//attributes
			ST_TLAnimateMotionBehaviorOrigin origin;
			std::wstring path;
			ST_TLAnimateMotionPathEditMode pathEditMode;
			drawingml::main::ST_Angle rAng;
			std::wstring ptsTypes;
		public:
			//end
			CT_TLAnimateMotionBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimateMotionBehavior();
		};
		class CT_TLAnimateRotationBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			drawingml::main::ST_Angle *by;
			drawingml::main::ST_Angle *from;
			drawingml::main::ST_Angle *to;
		public:
			//end
			CT_TLAnimateRotationBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimateRotationBehavior();
		};
		class CT_TLAnimateScaleBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			CT_TLPoint *by;
			CT_TLPoint *from;
			CT_TLPoint *to;
			//attributes
			Bool zoomContents;
		public:
			//end
			CT_TLAnimateScaleBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLAnimateScaleBehavior();
		};
		class ST_TLCommandType {
		public:
			//end
			enum value {
				evt,
				call,
				verb
			};
			value v;
		};
		class CT_TLCommandBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			//attributes
			ST_TLCommandType type;
			std::wstring cmd;
		public:
			//end
			CT_TLCommandBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLCommandBehavior();
		};
		class CT_TLSetBehavior {
		public:
			//elements
			CT_TLCommonBehaviorData *cBhvr;
			CT_TLAnimVariant *to;
		public:
			//end
			CT_TLSetBehavior(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLSetBehavior();
		};
		class CT_TLCommonMediaNodeData {
		public:
			//elements
			CT_TLCommonTimeNodeData *cTn;
			CT_TLTimeTargetElement *tgtEl;

			//attributes
			drawingml::main::ST_PositiveFixedPercentage vol;
			Bool mute;
			UInt numSld;
			Bool showWhenStopped;
		public:
			//end
			CT_TLCommonMediaNodeData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLCommonMediaNodeData();
		};
		class CT_TLMediaNodeAudio {
		public:
			//elements
			CT_TLCommonMediaNodeData *cMediaNode;
			//attributes
			Bool isNarration;
		public:
			//end
			CT_TLMediaNodeAudio(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLMediaNodeAudio();
		};
		class CT_TLMediaNodeVideo {
		public:
			//elements
			CT_TLCommonMediaNodeData *cMediaNode;
			//attributes
			Bool fullScrn;
		public:
			//end
			CT_TLMediaNodeVideo(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLMediaNodeVideo();
		};
		class CT_TLTemplate {
		public:
			//elements
			CT_TimeNodeList *tnLst;
			//attributes
			UInt lvl;
		public:
			//end
			CT_TLTemplate(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTemplate();
		};
		class CT_TLTemplateList {
		public:
			//elements
			CT_TLTemplate tmpl[9];
		public:
			//end
			CT_TLTemplateList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLTemplateList();
		};
		class ST_TLParaBuildType {
		public:
			//end
			enum value {
				allAtOnce,
				p,
				cust,
				whole
			};
			value v;
		};
		class CT_TLBuildParagraph {
		public:
			//elements
			CT_TLTemplateList *tmplLst;
			
			//attributes
			drawingml::main::ST_ShapeID spid;
			UInt grpId;
			Bool uiExpand;

			ST_TLParaBuildType build;
			UInt bldLvl;
			Bool animBg;
			Bool autoUpdateAnimBg;
			Bool rev;
			ST_TLTime advAuto;
		public:
			//end
			CT_TLBuildParagraph(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLBuildParagraph();
		};
		class ST_TLDiagramBuildType {
		public:
			//end
			enum value {
				whole,
				depthByNode,
				depthByBranch,
				breadthByNode,
				breadthByLvl,
				cw,
				cwIn,
				cwOut,
				ccw,
				ccwIn,
				ccwOut,
				inByRing,
				outByRing,
				up,
				down,
				allAtOnce,
				cust
			};
			value v;
		};
		class CT_TLBuildDiagram {
		public:
			//attributes
			drawingml::main::ST_ShapeID spid;
			UInt grpId;
			Bool uiExpand;

			ST_TLDiagramBuildType bld;
		public:
			//end
			CT_TLBuildDiagram(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLBuildDiagram();
		};
		class ST_TLOleChartBuildType {
		public:
			//end
			enum value {
				allAtOnce,
				series,
				category,
				seriesE1,
				categoryE1
			};
			value v;
		};
		class CT_TLOleBuildChart {
		public:
			//attributes
			drawingml::main::ST_ShapeID spid;
			UInt grpId;
			Bool uiExpand;

			ST_TLOleChartBuildType build;
			Bool animBg;
		public:
			//end
			CT_TLOleBuildChart(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLOleBuildChart();
		};
		class CT_TLGraphicalObjectBuild {
		public:
			//elements
			union {
				CT_Empty *bldAsOne;
				drawingml::main::CT_AnimationGraphicalObjectBuildProperties *bldSub;
			};
			//attributes
			drawingml::main::ST_ShapeID spid;
			UInt grpId;
			Bool uiExpand;

		public:
			//end
			CT_TLGraphicalObjectBuild(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TLGraphicalObjectBuild();
		};
		class CT_BuildList {
		public:
			//elements
			union _choice {
				CT_TLBuildParagraph *bldP;
				CT_TLBuildDiagram *bldDgm;
				CT_TLOleBuildChart *bldOleChart;
				CT_TLGraphicalObjectBuild *bldGraphic;
			};
			std::vector<_choice> choice;
		public:
			//end
			CT_BuildList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_BuildList();
		};
		class CT_SlideTiming {
		public:
			//elements
			CT_TimeNodeList *tnList;
			CT_BuildList *bldLst;
			CT_ExtensionListModify *extLst;
		public:
			//end
			CT_SlideTiming(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideTiming();
		};
		class CT_Empty {
		public:
			//end
			CT_Empty(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Empty();
		};
		class ST_Direction {
		public:
			//end
			enum value {
				horz,
				vert
			};
			value v;
		};
		class CT_IndexRange {
		public:
			//attributes
			ST_Index st;
			ST_Index end;
		public:
			//end
			CT_IndexRange(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_IndexRange();
		};
		class CT_SlideRelationshipListEntry {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_SlideRelationshipListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideRelationshipListEntry();
		};
		class CT_SlideRelationshipList {
		public:
			//elements
			std::vector<CT_SlideRelationshipListEntry*> sld;
		public:
			//end
			CT_SlideRelationshipList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideRelationshipList();
		};
		class CT_CustomShowId {
		public:
			//attributes
			UInt id;
		public:
			//end
			CT_CustomShowId(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CustomShowId();
		};
		class CT_CustomerData {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_CustomerData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CustomerData();
		};
		class CT_TagsData {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_TagsData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TagsData();
		};
		class CT_CustomerDataList {
		public:
			//elements
			std::vector<CT_CustomerData*> custData;
			CT_TagsData *tags;
		public:
			//end
			CT_CustomerDataList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CustomerDataList();
		};
		class CT_Extension {
		public:
			//attributes
			std::wstring uri;
		public:
			//end
			CT_Extension(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Extension();
		};
		class CT_ExtensionList {
		public:
			//elements
			std::vector<CT_Extension*> ext;
		public:
			//end
			CT_ExtensionList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ExtensionList();
		};
		class CT_ExtensionListModify {
		public:
			//elements
			std::vector<CT_Extension*> ext;
			//attributes
			Bool mod;
		public:
			//end
			CT_ExtensionListModify(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ExtensionListModify();
		};
		class CT_CommentAuthor {
		public:
			//elements
			CT_ExtensionList *extLst;

			//attributes
			UInt id;
			ST_Name name;
			ST_Name initials;
			UInt lastIdx;
			UInt clrIdx;
		public:
			//end
			CT_CommentAuthor(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CommentAuthor();
		};
		class CT_CommentAuthorList {
		public:
			//elements
			std::vector<CT_CommentAuthor*> cmAuthor;
		public:
			//end
			CT_CommentAuthorList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CommentAuthorList();
		};
		class CT_Comment {
		public:
			//elements
			drawingml::main::CT_Point2D *pos;

			//attributes
			std::wstring text;
			CT_ExtensionListModify *extLst;
			UInt authorId;
			FILETIME dt;
			ST_Index idx;
		public:
			//end
			CT_Comment(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Comment();
		};
		class CT_CommentList {
		public:
			//elements
			std::vector<CT_Comment*> cm;
		public:
			//end
			CT_CommentList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CommentList();
		};
		class ST_OleObjectFollowColorScheme {
		public:
			//end
			enum value {
				none,
				full,
				textAndBackground
			};
			value v;
		};
		class CT_OleObjectEmbed {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			ST_OleObjectFollowColorScheme followColorScheme;
		public:
			//end
			CT_OleObjectEmbed(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OleObjectEmbed();
		};
		class CT_OleObjectLink {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			Bool updateAutomatic;
		public:
			//end
			CT_OleObjectLink(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OleObjectLink();
		};
		class CT_OleObject {
		public:
			//elements
			CT_OleObjectEmbed *embed;
			CT_OleObjectLink *link;
			CT_Picture *pic;
			//attributes
			std::wstring name;
			Bool showAsIcon;
			officeDocument::relationships::ST_RelationshipId rId;
			drawingml::main::ST_PositiveCoordinate32 imgW;
			drawingml::main::ST_PositiveCoordinate32 imgH;

			std::wstring progId;
		public:
			//end
			CT_OleObject(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OleObject();
		};
		class CT_Control {
		public:
			//elements
			CT_ExtensionList *extLst;
			CT_Picture *pic;
			//attributes
			std::wstring name;
			Bool showAsIcon;
			officeDocument::relationships::ST_RelationshipId rId;
			drawingml::main::ST_PositiveCoordinate32 imgW;
			drawingml::main::ST_PositiveCoordinate32 imgH;

		public:
			//end
			CT_Control(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Control();
		};
		class CT_ControlList {
		public:
			//elements
			std::vector<CT_Control*> control;
		public:
			//end
			CT_ControlList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ControlList();
		};
		class ST_SlideId {
		public:
			//end
			UInt value;
		public:
			ST_SlideId(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~ST_SlideId();
		};
		class CT_SlideIdListEntry {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			ST_SlideId id;
			officeDocument::relationships::ST_RelationshipId rId;
		public:
			//end
			CT_SlideIdListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideIdListEntry();
		};
		class CT_SlideIdList {
		public:
			//elements
			std::vector<CT_SlideIdListEntry*> sldId;
		public:
			//end
			CT_SlideIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideIdList();
		};
		class ST_SlideMasterId {
		public:
			//end
			UInt value;
		public:
			//end
			ST_SlideMasterId(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~ST_SlideMasterId();
		};
		class CT_SlideMasterIdListEntry {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			ST_SlideMasterId id;
			officeDocument::relationships::ST_RelationshipId rId;
		public:
			//end
			CT_SlideMasterIdListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideMasterIdListEntry();
		};
		class CT_SlideMasterIdList {
		public:
			//elements
			std::vector<CT_SlideMasterIdListEntry*> sldMasterId;
		public:
			//end
			CT_SlideMasterIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideMasterIdList();
		};
		class CT_NotesMasterIdListEntry {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_NotesMasterIdListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NotesMasterIdListEntry();
		};
		class CT_NotesMasterIdList {
		public:
			//elements
			CT_NotesMasterIdListEntry *notesMasterId;
		public:
			//end
			CT_NotesMasterIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NotesMasterIdList();
		};
		class CT_HandoutMasterIdListEntry {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_HandoutMasterIdListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_HandoutMasterIdListEntry();
		};
		class CT_HandoutMasterIdList {
		public:
			//elements
			CT_HandoutMasterIdListEntry *handoutMasterId;
		public:
			//end
			CT_HandoutMasterIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_HandoutMasterIdList();
		};
		class CT_EmbeddedFontDataId {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_EmbeddedFontDataId(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_EmbeddedFontDataId();
		};
		class CT_EmbeddedFontListEntry {
		public:
			//elements
			drawingml::main::CT_TextFont *font;
			CT_EmbeddedFontDataId *regular;
			CT_EmbeddedFontDataId *bold;
			CT_EmbeddedFontDataId *italic;
			CT_EmbeddedFontDataId *boldItalic;
		public:
			//end
			CT_EmbeddedFontListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_EmbeddedFontListEntry();
		};
		class CT_EmbeddedFontList {
		public:
			//elements
			std::vector<CT_EmbeddedFontListEntry*> embeddedFont;
		public:
			//end
			CT_EmbeddedFontList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_EmbeddedFontList();
		};
		class CT_SmartTags {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_SmartTags(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SmartTags();
		};
		class CT_CustomShow {
		public:
			//elements
			CT_SlideRelationshipList *sldLst;
			CT_ExtensionList *extLst;
			//attributes
			ST_Name name;
			UInt id;
		public:
			//end
			CT_CustomShow(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CustomShow();
		};
		class CT_CustomShowList {
		public:
			//elements
			std::vector<CT_CustomShow*> custShow;
		public:
			//end
			CT_CustomShowList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CustomShowList();
		};
		class ST_PhotoAlbumLayout {
		public:
			//end
			enum value {
				fitToSlide,
				_1pic,
				_2pic,
				_4pic,
				_1picTitle,
				_2picTitle,
				_4picTitle
			};
			value v;
		};
		class ST_PhotoAlbumFrameShape {
		public:
			//end
			enum value {
				frameStyle1,
				frameStyle2,
				frameStyle3,
				frameStyle4,
				frameStyle5,
				frameStyle6,
				frameStyle7
			};
			value v;
		};
		class CT_PhotoAlbum {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			Bool bw;
			Bool showCaptions;
			ST_PhotoAlbumLayout layout;
			ST_PhotoAlbumFrameShape frame;
		public:
			//end
			CT_PhotoAlbum(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_PhotoAlbum();
		};
		class ST_SlideSizeCoordinate {
			//end
		public:
			drawingml::main::ST_PositiveCoordinate32 val;
		public:
		};
		class ST_SlideSizeType {
		public:
			//end
			enum value {
				screen4x3,
				letter,
				A4,
				_35mm,
				overhead,
				banner,
				custom,
				ledger,
				A3,
				B4ISO,
				B5ISO,
				B4JIS,
				B5JIS,
				hagakiCard,
				screen16x9,
				screen16x10
			};
			value v;
		};
		class CT_SlideSize {
		public:
			//attributes
			ST_SlideSizeCoordinate cx;
			ST_SlideSizeCoordinate cy;
			ST_SlideSizeType type;
		public:
			//end
			CT_SlideSize(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideSize();
		};
		class CT_Kinsoku {
		public:
			//attributes
			std::wstring lang;
			std::wstring invalStChars;
			std::wstring invalEndChars;
		public:
			//end
			CT_Kinsoku(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Kinsoku();
		};
		class ST_BookmarkIdSeed {
		public:
			//end
			UInt value;
		public:
			//operator = 
			ST_BookmarkIdSeed(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~ST_BookmarkIdSeed();
		};
		class CT_ModifyVerifier {
		public:
			//attributes
			std::wstring algorithmName;
			std::wstring hashValue;
			std::wstring saltValue;
			UInt spinValue;
		public:
			//end
			CT_ModifyVerifier(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ModifyVerifier();
		};
		class CT_Presentation {
		public:
			//elements
			CT_SlideMasterIdList *sldMasterIdLst;
			CT_NotesMasterIdList *notesMasterIdLst;
			CT_HandoutMasterIdList *handoutMasterIdLst;
			CT_SlideIdList *sldIdLst;
			CT_SlideSize *sldSz;
			drawingml::main::CT_PositiveSize2D *notesSz;
			CT_SmartTags *smartTags;
			CT_EmbeddedFontList *embeddedFontList;
			CT_CustomShowList *custShowLst;
			CT_PhotoAlbum *photoAlbum;
			CT_CustomerDataList *custDataLst;
			CT_Kinsoku *kinsoku;
			drawingml::main::CT_TextListStyle *defaultTextStyle;
			CT_ModifyVerifier *modifyVerifier;
			CT_ExtensionList *extLst;
			//attributes
			drawingml::main::ST_Percentage serverZoom;
			Int firstSlidclass;
			Bool showSpecialPlsOnTitleSld;
			Bool rtl;
			Bool removePersonalInfoOnSave;
			Bool compatMode;
			Bool strictFirstAndLastChars;
			Bool embedTrueTypeFonts;
			Bool saveSubsetFonts;
			Bool autoCompressPictures;
			ST_BookmarkIdSeed bookmarkIdSeed;
			officeDocument::sharedTypes::ST_ConformanceClass conformance;
		public:
			//end
			CT_Presentation(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Presentation();
		};
		class CT_HtmlPublishProperties {
		public:
			//elements
			union {
				CT_Empty *sldAll;
				CT_IndexRange *sldRg;
				CT_CustomShowId *custShow;
			};

			CT_ExtensionList *extLst;

			//attributes
			Bool showSpeakerNotes;
			std::wstring target;
			std::wstring title;
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_HtmlPublishProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_HtmlPublishProperties();
		};
		class ST_PrintWhat {
		public:
			//end
			enum value {
				slides,
				handouts1,
				handouts2,
				handouts3,
				handouts4,
				handouts5,
				handouts6,
				handouts7,
				handouts8,
				handouts9,
				notes,
				outline
			};
			value v;
		};
		class ST_PrintColorMode {
		public:
			//end
			enum value {
				bw,
				gray,
				clr
			};
			value v;
		};
		class CT_PrintProperties {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			ST_PrintWhat prnWhat;
			ST_PrintColorMode clrMode;
			Bool hiddenSlides;
			Bool scaleToFitPaper;
			Bool frameSlides;
		public:
			//end
			CT_PrintProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_PrintProperties();
		};
		class CT_ShowInfoBrowse {
		public:
			//attributes
			Bool showScrollBar;
		public:
			//end
			CT_ShowInfoBrowse(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ShowInfoBrowse();
		};
		class CT_ShowInfoKiosk {
		public:
			//attributes
			UInt restart;
		public:
			//end
			CT_ShowInfoKiosk(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ShowInfoKiosk();
		};
		class CT_ShowProperties {
		public:
			//elements
			CT_Empty *present;
			CT_ShowInfoBrowse *browse;
			CT_ShowInfoKiosk *kiosk;

			union {
				CT_Empty *sldAll;
				CT_IndexRange *sldRg;
				CT_CustomShowId *custShow;
			};

			drawingml::main::CT_Color *penClr;
			CT_ExtensionList *extLst;

			//attributes
			Bool loop;
			Bool showNarration;
			Bool showAnimation;
			Bool useTimings;
		public:
			//end
			CT_ShowProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ShowProperties();
		};
		class CT_PresentationProperties {
		public:
			//elements
			CT_PrintProperties *prnPr;
			CT_ShowProperties *showPr;
			drawingml::main::CT_ColorMRU *clrMru;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_PresentationProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_PresentationProperties();
		};
		class CT_HeaderFooter {
		public:
			//elements
			CT_ExtensionListModify *extLst;
			///attributes
			Bool sldNum;
			Bool hdr;
			Bool ftr;
			Bool dt;
		public:
			//end
			CT_HeaderFooter(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_HeaderFooter();
		};
		class ST_PlaceholderType {
		public:
			//end
			enum value {
				title,
				body,
				ctrTitle,
				subTitle,
				dt,
				sldNum,
				ftr,
				hdr,
				obj,
				chart,
				tbl,
				clipArt,
				dgm,
				media,
				sldImg,
				pic
			};
			value v;
		};
		class ST_PlaceholderSize {
		public:
			//end
			enum value {
				full,
				half,
				quarter
			};
			value v;
		};
		class CT_Placeholder {
		public:
			//elements
			CT_ExtensionListModify *extLst;
			//attributes
			ST_PlaceholderType type;
			ST_Direction orient;
			ST_PlaceholderSize sz;
			UInt idx;	
			Bool hasCustomPrompt;
		public:
			//end
			CT_Placeholder(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Placeholder();
		};
		class CT_ApplicationNonVisualDrawingProps {
		public:
			//elements
			CT_Placeholder *ph;
			CT_CustomerDataList *custDataLst;
			CT_ExtensionList *extLst;
			union {
				drawingml::main::CT_AudioCD *audioCD;
				drawingml::main::CT_EmbeddedWAVAudioFile *wavAudioFile;
				drawingml::main::CT_AudioFile *audioFile;
				drawingml::main::CT_VideoFile *videoFile;
				drawingml::main::CT_QuickTimeFile *quickTimeFile;
			};
			//attributes
			Bool isPhoto;
			Bool userDrawn;
		public:
			//end
			CT_ApplicationNonVisualDrawingProps(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ApplicationNonVisualDrawingProps();
		};
		class CT_ShapeNonVisual {
		public:
			//elements
			drawingml::main::CT_NonVisualDrawingProps *cNvPr;
			drawingml::main::CT_NonVisualDrawingShapeProps *cNvSpPr;
			CT_ApplicationNonVisualDrawingProps *nvPr;
		public:
			//end
			CT_ShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ShapeNonVisual();
		};
		class CT_Shape {
		public:
			//elements
			CT_ShapeNonVisual *nvSpPr;
			drawingml::main::CT_ShapeProperties *spPr;
			drawingml::main::CT_ShapeStyle *style;
			drawingml::main::CT_TextBody *txBody;
			CT_ExtensionListModify *extLst;
			//attributes
			Bool useBgFill;
		public:
			//end
			CT_Shape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Shape();
		};
		class CT_ConnectorNonVisual {
			//elements
			drawingml::main::CT_NonVisualDrawingProps *cNvPr;
			drawingml::main::CT_NonVisualConnectorProperties *cNvCxnSpPr;
			CT_ApplicationNonVisualDrawingProps *nvPr;
		public:
			//end
			CT_ConnectorNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ConnectorNonVisual();
		};
		class CT_Connector {
		public:
			//elements
			CT_ConnectorNonVisual *nvCxnSpPr;
			drawingml::main::CT_ShapeProperties *spPr;
			drawingml::main::CT_ShapeStyle *style;
			CT_ExtensionListModify *extLst;
		public:
			//end
			CT_Connector(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Connector();
		};
		class CT_PictureNonVisual {
		public:
			//elements
			drawingml::main::CT_NonVisualDrawingProps *cNvPr;
			drawingml::main::CT_NonVisualPictureProperties *cNvPicPr;
			CT_ApplicationNonVisualDrawingProps *nvPr;
		public:
			//end
			CT_PictureNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_PictureNonVisual();
		};
		class CT_Picture {
		public:
			//elements
			CT_PictureNonVisual *nvPicPr;
			drawingml::main::CT_BlipFillProperties *blipFill;
			drawingml::main::CT_ShapeProperties *spPr;
			drawingml::main::CT_ShapeStyle *style;
			CT_ExtensionListModify *extLst;
		public:
			//end
			CT_Picture(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Picture();
		};
		class CT_GraphicalObjectFrameNonVisual {
		public:
			//elements
			drawingml::main::CT_NonVisualDrawingProps *cNvPr;
			drawingml::main::CT_NonVisualGraphicFrameProperties *cNvGraphicFramePr;
			CT_ApplicationNonVisualDrawingProps *nvPr;
		public:
			//end
			CT_GraphicalObjectFrameNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_GraphicalObjectFrameNonVisual();
		};
		class CT_GraphicalObjectFrame {
		public:
			//elements
			CT_GraphicalObjectFrameNonVisual *nvGraphicFramePr;
			drawingml::main::CT_Transform2D xfrm;
			drawingml::main::CT_GraphicalObject *graphic;
			CT_ExtensionListModify *extLst;
			////attributes
			drawingml::main::ST_BlackWhiteMode bwMode;
		public:
			//end
			CT_GraphicalObjectFrame(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_GraphicalObjectFrame();
		};
		class CT_GroupShapeNonVisual {
		public:
			//elements
			drawingml::main::CT_NonVisualDrawingProps *cNvPr;
			drawingml::main::CT_NonVisualGroupDrawingShapeProps *cNvSpPr;
			CT_ApplicationNonVisualDrawingProps *nvPr;
		public:
			//end
			CT_GroupShapeNonVisual(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_GroupShapeNonVisual();
		};
		class CT_GroupShape {
			public:
				//elements
				CT_GroupShapeNonVisual *nvGrpSpPr;
				drawingml::main::CT_GroupShapeProperties *grpSpPr;
				std::vector<void*> choice;
				CT_ExtensionListModify *extLst;
			public:
				//end
				CT_GroupShape(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
				~CT_GroupShape();
		};
		class CT_Rel {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
		public:
			//end
			CT_Rel(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Rel();
		};
		class CT_BackgroundProperties {
		public:
			//elements
			union {
				drawingml::main::CT_NoFillProperties *noFill;
				drawingml::main::CT_SolidColorFillProperties *solidFill;
				drawingml::main::CT_GradientFillProperties *gradFill;
				drawingml::main::CT_BlipFillProperties *blipFill;
				drawingml::main::CT_PatternFillProperties *pattFill;
				drawingml::main::CT_GroupFillProperties *grpFill;
			};
			union {
				drawingml::main::CT_EffectList *effectLst;
				drawingml::main::CT_EffectContainer *effectDag;
			};

			CT_ExtensionList *extLst;
			//attributes
			Bool shadeTotitle;
		public:
			//end
			CT_BackgroundProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_BackgroundProperties();
		};
		class CT_Background {
		public:
			//elements
			CT_BackgroundProperties *bgPr;
			//attributes
			drawingml::main::CT_StyleMatrixReference bgRef;
			drawingml::main::ST_BlackWhiteMode bwMode;
		public:
			//end
			CT_Background(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Background();
		};
		class CT_CommonSlideData {
			public:
				//elements
				CT_Background *bg;
				CT_GroupShape *spTree;
				CT_CustomerDataList *custDataLst;
				CT_ControlList *controls;
				CT_ExtensionList *extLst;
				//attributes
				std::wstring name;
			public:
				//end
				CT_CommonSlideData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
				~CT_CommonSlideData();
		};
		class CT_Slide {
			public:
				//elements
				CT_CommonSlideData *cSld;
				drawingml::main::CT_ColorMappingOverride *clrMapOvr;
				CT_SlideTransition *transition;
				CT_SlideTiming *timing;
				CT_ExtensionListModify *extLst;
				//attributes
				Bool show;
				Bool showMasterSp;
				Bool showMasterPhAnim;
			public:
				//end
				CT_Slide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
				~CT_Slide();
		};
		class ST_SlideLayoutType {
		public:
			//end
			enum value {
				title,
				tx,
				twoColTx,
				tbl,
				txAdChart,
				dgm,
				chart,
				txAndClipArt,
				clipArtAndTx,
				titleOnly,
				blank,
				txAndObj,
				objAndTx,
				objOnly,
				obj,
				txAndMedia,
				mediaAndTx,
				objOverTx,
				txOverObj,
				txAndTwoObj,
				twoObjAndTx,
				twoObjOverTx,
				fourObj,
				vertTx,
				clipArtAndVertTx,
				vertTitleAndTx,
				vertTitleAndTxOverChart,
				twoObj,
				objAndTwoObj,
				twoObjAndObj,
				cust,
				secHead,
				twoTxTwoObj,
				objTx,
				picTx
			};
			value v;
		};
		class CT_SlideLayout {
		public:
			//elements
			CT_CommonSlideData *cSld;
			drawingml::main::CT_ColorMappingOverride *clrMap;
			CT_SlideTransition *transition;
			CT_SlideTiming *timing;
			CT_HeaderFooter *hf;
			CT_ExtensionListModify *extLst;
			//attributes
			Bool showMasterSp;
			Bool ShowMasterPhAnim;
			std::wstring matchingName;
			ST_SlideLayoutType type;
			Bool preserve;
			Bool userDrawn;
		public:
			//end
			CT_SlideLayout(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideLayout();
		};
		class CT_SlideMasterTextStyles {
		public:
			//elements
			drawingml::main::CT_TextListStyle *titleStyle;
			drawingml::main::CT_TextListStyle *bodyStyle;
			drawingml::main::CT_TextListStyle *otherStyle;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_SlideMasterTextStyles(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideMasterTextStyles();
		};
		class ST_SlideLayoutId {
		public:
			//end
			UInt value;
		public:
			//operator = 
		};
		class CT_SlideLayoutIdListEntry {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			ST_SlideLayoutId id;
			officeDocument::relationships::ST_RelationshipId rId;
		public:
			//end
			CT_SlideLayoutIdListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideLayoutIdListEntry();
		};
		class CT_SlideLayoutIdList {
		public:
			//elements
			std::vector<CT_SlideLayoutIdListEntry*> sldLayoutId;
		public:
			//end
			CT_SlideLayoutIdList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideLayoutIdList();
		};
		class CT_SlideMaster {
		public:
			//elements
			CT_CommonSlideData *cSld;
			drawingml::main::CT_ColorMapping *clrMap;
			CT_SlideLayoutIdList *sldLayoutIdLst;
			CT_SlideTransition *transition;
			CT_SlideTiming *timing;
			CT_HeaderFooter *hf;
			CT_SlideMasterTextStyles *txStyles;
			CT_ExtensionList *extLst;
			//attributes
			Bool preserve;
		public:
			//end
			CT_SlideMaster(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideMaster();
		};
		class CT_HandoutMaster {
		public:
			//elements
			CT_CommonSlideData *cSld;
			drawingml::main::CT_ColorMapping *clrMap;
			CT_HeaderFooter *hf;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_HandoutMaster(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_HandoutMaster();
		};
		class CT_NotesMaster {
		public:
			//elements
			CT_CommonSlideData *cSld;
			drawingml::main::CT_ColorMapping *clrMap;
			CT_HeaderFooter *hf;
			drawingml::main::CT_TextListStyle *notesStyle;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_NotesMaster(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NotesMaster();
		};
		class CT_NotesSlide {
		public:
			//elements
			CT_CommonSlideData *cSld;
			drawingml::main::CT_ColorMappingOverride *clrMapOvr;
			CT_ExtensionList *extLst;
			//attributes
			Bool showMasterSp;
			Bool showMasterPhAnim;
		public:
			//end
			CT_NotesSlide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NotesSlide();
		};
		class CT_SlideSyncProperties {
		public:
			//elements
			CT_ExtensionList *extLst;
			//attributes
			std::wstring serverSldId;
			FILETIME serverSldModifiedTime;
			FILETIME clientInsertedTime;
		public:
			//end
			CT_SlideSyncProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideSyncProperties();
		};
		class CT_StringTag {
		public:
			//attributes
			std::wstring name;
			std::wstring val;
		public:
			//end
			CT_StringTag(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_StringTag();
		};
		class CT_TagList {
		public:
			//elements
			std::vector<CT_StringTag*> tag;
		public:
			//end
			CT_TagList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_TagList();
		};
		class ST_SplitterBarState {
		public:
			//end
			enum value {
				minimized,
				restored,
				maximized
			};
			value v;
		};
		class ST_ViewType {
		public:
			//end
			enum value {
				sldView,
				sldMasterView,
				notesView,
				handoutView,
				notesMasterview,
				outlineView,
				sldSorterView,
				sldThumbnailView
			};
			value v;
		};
		class CT_NormalViewPortion {
		public:
			//attributes
			drawingml::main::ST_PositiveFixedPercentage sz;
			Bool autoAdjust;
		public:
			//end
			CT_NormalViewPortion(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NormalViewPortion();
		};
		class CT_NormalViewProperties {
		public:
			//elements
			CT_NormalViewPortion *restoredLeft;
			CT_NormalViewPortion *restoredTop;
			CT_ExtensionList *extLst;

			//attributes
			Bool showOutlineIcons;
			Bool snapVertSplitter;
			ST_SplitterBarState vertBarState;
			ST_SplitterBarState horzBarState;
			Bool preferSingleView;
		public:
			//end
			CT_NormalViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NormalViewProperties();
		};
		class CT_CommonViewProperties {
		public:
			//elements
			drawingml::main::CT_Scale2D *scale;
			drawingml::main::CT_Point2D *origin;
			//attributes
			Bool varScale;
		public:
			//end
			CT_CommonViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CommonViewProperties();
		};
		class CT_NotesTextViewProperties {
		public:
			//elements
			CT_CommonViewProperties *cViewPr;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_NotesTextViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NotesTextViewProperties();
		};
		class CT_OutlineViewSlideEntry {
		public:
			//attributes
			officeDocument::relationships::ST_RelationshipId id;
			Bool collapse;
		public:
			//end
			CT_OutlineViewSlideEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OutlineViewSlideEntry();
		};
		class CT_OutlineViewSlideList {
		public:
			//elements
			std::vector<CT_OutlineViewSlideEntry*> sld;
		public:
			//end
			CT_OutlineViewSlideList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OutlineViewSlideList();
		};
		class CT_OutlineViewProperties {
		public:
			//elements
			CT_CommonViewProperties *cViewPr;
			CT_OutlineViewSlideList *sldLst;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_OutlineViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_OutlineViewProperties();
		};
		class CT_SlideSorterViewProperties {
		public:
			//elements
			CT_CommonSlideViewProperties *cSldViewPr;
			CT_ExtensionList *extLst;
			//attributes
			Bool showFormatting;
		public:
			//end
			CT_SlideSorterViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideSorterViewProperties();
		};
		class CT_Guide {
		public:
			//attributes
			ST_Direction orient;
			drawingml::main::ST_Coordinate32 pos;
		public:
			//end
			CT_Guide(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_Guide();
		};
		class CT_GuideList {
		public:
			//elements
			std::vector<CT_Guide*> guide;
		public:
			//end
			CT_GuideList(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_GuideList();
		};
		class CT_CommonSlideViewProperties {
		public:
			//elements
			CT_CommonViewProperties *cViewPr;
			CT_GuideList *guideLst;
			//attributes
			Bool snapToGrid;
			Bool snapToObjects;
			Bool showGuides;
		public:
			//end
			CT_CommonSlideViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_CommonSlideViewProperties();
		};
		class CT_SlideViewProperties {
		public:
			//elements
			CT_CommonSlideViewProperties *cSldViewPr;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_SlideViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_SlideViewProperties();
		};
		class CT_NotesViewProperties {
		public:
			//elements
			CT_CommonSlideViewProperties *cSldViewPr;
			CT_ExtensionList *extLst;
		public:
			//end
			CT_NotesViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_NotesViewProperties();
		};
		class CT_ViewProperties {
		public:
			//elements
			CT_NormalViewProperties *normalViewPr;
			CT_SlideViewProperties *slideviewPr;
			CT_OutlineViewProperties *outlineViewPr;
			CT_NotesTextViewProperties *notesTextViewPr;
			CT_SlideSorterViewProperties *sorterViewPr;
			CT_NotesViewProperties *notesViewPr;
			drawingml::main::CT_PositiveSize2D *gridSpacing;
			CT_ExtensionList *extLst;

			//attributes
			ST_ViewType lastView;
			Bool showComments;
		public:
			CT_ViewProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);
			~CT_ViewProperties();
		};
	}
}