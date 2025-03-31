#pragma once
#include <vector>
#include <string>
typedef struct {
	int nline;
	int ncol;
	int code;
	std::string Lexem;
} Lexem ;

class LexemString {
	std::vector<Lexem> lexemString;
public:
	void add(Lexem newLexem);
	const std::vector<Lexem>& get();
	void clear();
	void Output();

};