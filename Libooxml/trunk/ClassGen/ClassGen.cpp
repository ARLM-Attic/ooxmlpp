// ClassGen.cpp : Defines the entry point for the console application.
//

#include <Windows.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <typeinfo>
using namespace std;
//usage  classgen 1 pml.h out.h
//usage  classgen 2 text.txt "presentationml::main" pml.h

void processClass(ifstream &ifs);
void outputClass();
void processElements(ifstream &ifs);
void processAttributes(ifstream &ifs);
multimap<string,string> elements;
multimap<string,string> attributes;
string nameSp = "";
string includeFile;
int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream ifs;
	ifs.open(argv[2]);
	if (strcmp(argv[1],"1") == 0) {
		ofstream ofs1(argv[3],ios_base::trunc);
		ofs1 << "#include <xercesc/parsers/XercesDOMParser.hpp>\n";
		ofs1 << "#include <xercesc/dom/DOM.hpp>\n\n";
		while (!ifs.eof()) {
			std::string className;
			ifs >> className;
			string fileName = className + ".cpp";

			ofs1 << "class " << className << " {\n";
			ofs1 << "public:\n";
			ofs1 << "//elements\n\n";
			ofs1 << "//attributes\n\n";
			ofs1 << "public:\n";
			ofs1 << "//end\n";
			if (className.find("CT_") != string::npos) {
				ofs1 << "\t" << className << "();\n";
				ofs1 << "\t" << className << "(" << className << " &b);\n";
				ofs1 << "\t" << className << "(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes);\n";
				ofs1 << "\t" << className << "& operator=(" << className << " &b);\n";
				ofs1 << "\t" << "~" << className << "();\n";
				ofs1 << "\tstd::wstring Xml();\n";
			}
			else {
				ofs1 << "\t" << className << "& operator =(const " << className << "& b);\n";
				ofs1 << "\t" << className << "& operator =(wchar_t *b);\n";
				ofs1 << "\t" << "operator const wchar_t*() const;\n";
			}
			ofs1 << "};\n\n";
		}
		ofs1.close();
	}
	else if (strcmp(argv[1],"2") == 0) {
		if (argc == 4) {
			nameSp = "using namespace ";
			nameSp += argv[3];
			nameSp += ";\n";
		}
		if (argc == 5) {
			includeFile = "#include \"";
			includeFile += argv[4];
			includeFile += "\"";
		}
		else {
			includeFile = "#include \"";
			includeFile += argv[2];
			includeFile += "\"";
		}
		while (!ifs.eof()) {
			std::string token;
			ifs >> token;
			if (token == "class") {
				processClass(ifs);
				outputClass();
			}
		}

	}
	ifs.close();
	return 0;
}

void processAttributes(ifstream &ifs) {
	while (!ifs.eof()) {
		string tmp;
		ifs >> tmp;
		if (tmp == "//elements") {
			processElements(ifs);
		}
		else if (tmp == "class") {
			processClass(ifs);
		}
		else if (tmp == "//end") {
			while (true) {
				ifs >> tmp;
				if (tmp == "class") break;
				else if (ifs.eof()) break;
			}
			outputClass();
			processClass(ifs);
		}
		else if (tmp != ";" && tmp != "{" && tmp != "}" && tmp != "private:" && tmp != ":" && tmp != "public:" && tmp != "union" && tmp != "};") {
			string varName;
			ifs >> varName;
			if (varName == ";" || varName == "{" || varName == "}" || varName == "private:" || varName == ":" || varName == "public:" || varName == "union" || varName == "};")
				continue;
			//if (varName[0] == L'*')
				//varName.erase(varName.begin());//remove *
			if (varName.size() > 1)
				if (varName[varName.size()-1] == L';')
					varName.erase(varName.end()-1);
			attributes.insert(pair<string,string>(tmp,varName));
		}
	}
}

void processElements(ifstream &ifs) {
	while (!ifs.eof()) {
		string tmp;
		ifs >> tmp;
		if (tmp == "//attributes") {
			processAttributes(ifs);
		}
		else if (tmp == "class") {
			processClass(ifs);
		}
		else if (tmp == "//end") {
			while (true) {
				ifs >> tmp;
				if (tmp == "class") break;
				else if (ifs.eof()) break;
			}
			outputClass();
			processClass(ifs);
		}
		else if (tmp != ";" && tmp != "{" && tmp != "}" && tmp != "private:" && tmp != ":" && tmp != "public:" && tmp != "union" && tmp != "};") {
			string varName;
			ifs >> varName;
			if (varName == ";" || varName == "{" || varName == "}" || varName == "private:" || varName == ":" || varName == "public:" || varName == "union" || varName == "};")
				continue;
			if (varName[0] == L'*')
				varName.erase(varName.begin());//remove *
			if (varName.size() > 1)
				if (varName[varName.size()-1] == L';')
					varName.erase(varName.end()-1);
			if (tmp == "int" && varName.find("type") == 0)
				continue;
			elements.insert(pair<string,string>(tmp,varName));
		}
	}
}
string className;
void outputClass() {
	string fileName = className + ".cpp";
	ofstream ofs(fileName.c_str(),ios_base::trunc);
	ofs << "#include <xercesc/parsers/XercesDOMParser.hpp>\n";
	ofs << "#include <xercesc/dom/DOM.hpp>\n";
	ofs << includeFile << "\n\n";
	ofs << nameSp << "\n";
	if (className.find("CT_") != string::npos) {
		ofs << className << "::" << className << "() {\n";
		ofs << "}\n\n";
		ofs << className << "::" << className << "(" << className << " &b) {\n";
		ofs << "}\n\n";
		ofs << className << "::" << className << "(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {\n";
		for (auto iter = elements.begin(); iter != elements.end(); ++iter) {
			ofs << "\t" << (*iter).second << " = NULL;\n";
		}
		for (auto iter = attributes.begin(); iter != attributes.end(); ++iter) {
			ofs << "\tif (attributes->getNamedItem(L\"" << (*iter).second << "\")) {\n";
			ofs << "\t\t" << (*iter).second << " = attributes->getNamedItem(L\"" << (*iter).second << "\")->getNodeValue();\n";
			ofs << "\t}\n";
		}
		ofs <<"\tfor (int i = 0; i < nodelist->getLength();++i) {\n";
		for (auto iter = elements.begin(); iter != elements.end(); ++iter) {
			ofs << "\t\tif (wcscmp(nodelist->item(i)->getLocalName(),L\"" << (*iter).second << "\") == 0) {\n";
			ofs << "\t\t\t" << (*iter).second <<" = new " << (*iter).first << "(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());\n";
			ofs << "\t\t}\n";
		}
		ofs << "\t}\n";
		ofs << "}\n\n";
		ofs << className << "::" << className << "& operator=(" << className << " &b) {\n";
		ofs << "}\n\n";
		ofs << className << "::" << "~" << className << "() {\n"; 
		ofs << "}\n";
		ofs << "std::wstring " << className << "Xml() {\n";
		ofs << "}\n\n";
	}
	else {
		ofs << className << "& " << className << "::operator =(const " << className << "& b) {\n";
		ofs << "\n";
		ofs << "}\n\n";
		ofs << className << "& " << className << "::operator =(wchar_t *b) {\n";
		ofs << "\n";
		ofs << "}\n\n";
		ofs << className << "::operator const wchar_t*() const {\n";
		ofs << "\n";
		ofs << "}\n";
	}
	ofs.close();
	elements.clear();
	attributes.clear();
}

void processClass(ifstream &ifs) {
	ifs >> className;
	//search for attribute, element or function marker
	while (!ifs.eof()) {
		string tmp;
		ifs >> tmp;
		if (tmp == "//attributes") {
			processAttributes(ifs);
		}
		else if (tmp == "//elements") {
			processElements(ifs);
		}
		else if (tmp == "//end") {
			while (true) {
				ifs >> tmp;
				if (tmp == "class") break;
				else if (ifs.eof()) break;
			}
			outputClass();
			processClass(ifs);
		}
		else if (tmp == "class") {
			outputClass();
			processClass(ifs);
		}
	}
}