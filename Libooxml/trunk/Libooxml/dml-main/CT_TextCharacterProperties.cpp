#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_TextCharacterProperties::CT_TextCharacterProperties() {
	rtl = NULL;
	highlight = NULL;
	hlinkClick = NULL;
	hlinkMouseOver = NULL;
	ln = NULL;
	extLst = NULL;
	latin = NULL;
	ea = NULL;
	cs = NULL;
	sym = NULL;
	effectProperties = NULL;
	fillProperties = NULL;
	textUnderlineFill = NULL;
	textUnderlineLine = NULL;
	dirty = true;
	err = false;
	smtClean = true;
	smtId = 0;
}

CT_TextCharacterProperties::CT_TextCharacterProperties(CT_TextCharacterProperties &b) {
	rtl = b.rtl;
	highlight = b.highlight;
	hlinkClick = b.hlinkClick;
	hlinkMouseOver = b.hlinkMouseOver;
	ln = b.ln;
	extLst = b.extLst;
	latin = b.latin;
	ea = b.ea;
	cs = b.cs;
	sym = b.sym;
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	textUnderlineFill = b.textUnderlineFill;
	textUnderlineLine = b.textUnderlineLine;
	kumimoji = b.kumimoji;
	b = b.b;
	i = b.i;
	normalizeH = b.normalizeH;
	noProof = b.noProof;
	dirty = b.dirty;
	err = b.err;
	smtClean = b.smtClean;
	baseline = b.baseline;
	cap = b.cap;
	sz = b.sz;
	kern = b.kern;
	spc = b.spc;
	strike = b.strike;
	u = b.u;
	smtId = b.smtId;
	lang = b.lang;
	altLang = b.altLang;
	bmk = b.bmk;
}

CT_TextCharacterProperties::CT_TextCharacterProperties(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	rtl = NULL;
	highlight = NULL;
	hlinkClick = NULL;
	hlinkMouseOver = NULL;
	ln = NULL;
	extLst = NULL;
	latin = NULL;
	ea = NULL;
	cs = NULL;
	sym = NULL;
	effectProperties = NULL;
	fillProperties = NULL;
	textUnderlineFill = NULL;
	textUnderlineLine = NULL;
	dirty = true;
	err = false;
	smtClean = true;
	smtId = 0;
	if (attributes->getNamedItem(L"kumimoji")) {
		kumimoji = attributes->getNamedItem(L"kumimoji")->getNodeValue();
	}
	if (attributes->getNamedItem(L"b")) {
		b = attributes->getNamedItem(L"b")->getNodeValue();
	}
	if (attributes->getNamedItem(L"i")) {
		i = attributes->getNamedItem(L"i")->getNodeValue();
	}
	if (attributes->getNamedItem(L"normalizeH")) {
		normalizeH = attributes->getNamedItem(L"normalizeH")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noProof")) {
		noProof = attributes->getNamedItem(L"noProof")->getNodeValue();
	}
	if (attributes->getNamedItem(L"dirty")) {
		dirty = attributes->getNamedItem(L"dirty")->getNodeValue();
	}
	if (attributes->getNamedItem(L"err")) {
		err = attributes->getNamedItem(L"err")->getNodeValue();
	}
	if (attributes->getNamedItem(L"smtClean")) {
		smtClean = attributes->getNamedItem(L"smtClean")->getNodeValue();
	}
	if (attributes->getNamedItem(L"baseline")) {
		baseline = attributes->getNamedItem(L"baseline")->getNodeValue();
	}
	if (attributes->getNamedItem(L"cap")) {
		cap = attributes->getNamedItem(L"cap")->getNodeValue();
	}
	if (attributes->getNamedItem(L"sz")) {
		sz = attributes->getNamedItem(L"sz")->getNodeValue();
	}
	if (attributes->getNamedItem(L"kern")) {
		kern = attributes->getNamedItem(L"kern")->getNodeValue();
	}
	if (attributes->getNamedItem(L"spc")) {
		spc = attributes->getNamedItem(L"spc")->getNodeValue();
	}
	if (attributes->getNamedItem(L"strike")) {
		strike = attributes->getNamedItem(L"strike")->getNodeValue();
	}
	if (attributes->getNamedItem(L"u")) {
		u = attributes->getNamedItem(L"u")->getNodeValue();
	}
	if (attributes->getNamedItem(L"smtId")) {
		smtId = attributes->getNamedItem(L"smtId")->getNodeValue();
	}
	if (attributes->getNamedItem(L"lang")) {
		lang = attributes->getNamedItem(L"lang")->getNodeValue();
	}
	if (attributes->getNamedItem(L"altLang")) {
		altLang = attributes->getNamedItem(L"altLang")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bmk")) {
		bmk = attributes->getNamedItem(L"bmk")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"rtl") == 0) {
			rtl.reset(new CT_Boolean(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"highlight") == 0) {
			highlight.reset(new CT_Color(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hlinkClick") == 0) {
			hlinkClick.reset(new CT_Hyperlink(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hlinkMouseOver") == 0) {
			hlinkMouseOver.reset(new CT_Hyperlink(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ln") == 0) {
			ln.reset(new CT_LineProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"latin") == 0) {
			latin.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"ea") == 0) {
			ea.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cs") == 0) {
			cs.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sym") == 0) {
			sym.reset(new CT_TextFont(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"effectProperties") == 0) {
			effectProperties.reset(new EG_EffectProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"fillProperties") == 0) {
			fillProperties.reset(new EG_FillProperties(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textUnderlineFill") == 0) {
			textUnderlineFill.reset(new EG_TextUnderlineFill(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"textUnderlineLine") == 0) {
			textUnderlineLine.reset(new EG_TextUnderlineLine(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_TextCharacterProperties& CT_TextCharacterProperties::operator=(CT_TextCharacterProperties &b) {
	rtl = b.rtl;
	highlight = b.highlight;
	hlinkClick = b.hlinkClick;
	hlinkMouseOver = b.hlinkMouseOver;
	ln = b.ln;
	extLst = b.extLst;
	latin = b.latin;
	ea = b.ea;
	cs = b.cs;
	sym = b.sym;
	effectProperties = b.effectProperties;
	fillProperties = b.fillProperties;
	textUnderlineFill = b.textUnderlineFill;
	textUnderlineLine = b.textUnderlineLine;
	kumimoji = b.kumimoji;
	b = b.b;
	i = b.i;
	normalizeH = b.normalizeH;
	noProof = b.noProof;
	dirty = b.dirty;
	err = b.err;
	smtClean = b.smtClean;
	baseline = b.baseline;
	cap = b.cap;
	sz = b.sz;
	kern = b.kern;
	spc = b.spc;
	strike = b.strike;
	u = b.u;
	smtId = b.smtId;
	lang = b.lang;
	altLang = b.altLang;
	bmk = b.bmk;
	return *this;
}

CT_TextCharacterProperties::~CT_TextCharacterProperties() {
}

std::wstring CT_TextCharacterProperties::Xml() {
	return L"";
}

