#pragma once
#include <string>

class StringStatistic
{
private:
	std::string s;
	bool isItALetter(char c);
	bool isItADigit(int i);
	bool isItASepcialChar(char sc);
public:
	StringStatistic(std::string ABC);
	int countLetters(std::string ABC);
	int countDigits(std::string ABC);
	int countSpecials(std::string ABC);
	
};

