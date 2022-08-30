#include "StringStatistic.h"


bool StringStatistic::isItALetter(char c)
{
	return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

bool StringStatistic::isItADigit(int i)
{
	 return (i >= 48 && i <= 57);
}

bool StringStatistic::isItASepcialChar(char sc)
{
		return !isItADigit(sc) && !isItALetter(sc);
}


StringStatistic::StringStatistic(std::string ABC) : s(ABC)
{
}

int StringStatistic::countLetters(std::string ABC)
{
	return std::count(ABC.begin(), ABC.end(), isItALetter);

}

int StringStatistic::countDigits(std::string ABC)
{
	return std::count(ABC.begin(), ABC.end(), isItADigit);
}

int StringStatistic::countSpecials(std::string ABC)
{
	return std::count(ABC.begin(), ABC.end(), isItASepcialChar);
}
