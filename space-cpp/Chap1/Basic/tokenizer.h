#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>
#include <iostream>
using namespace std;

class Tokenizer {
private:
	string target;
	string delimiters;
	int begin;
	int end;
public:
	Tokenizer();
	Tokenizer(const string& target, const string& delimiters);
	~Tokenizer();
	bool hasNextToken();
	string nextToken();
};

#endif