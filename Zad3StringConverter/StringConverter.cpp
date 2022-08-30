#include "StringConverter.h"
#include <algorithm>
#include <cctype>
//camelCase : snake_case
//helloSDA : hello_s_d_a

std::string StringConverter::toCamelCase(std::string sSnake)
{
	for (int s = 0; s < sSnake.size(); ++s)
	{
		if (s == '_')
		{
			char c=sSnake[s + 1];
			char u= toupper(c);
			std::replace(sSnake.begin(), sSnake.end(), c, u);
		}
	}
 
spaceRemover(sSnake);

    return sSnake;
}

std::string StringConverter::toSnakeCase(std::string sCamel)
{
	std::string temp= "";
	char c = 0;
	for (c = 0; c < sCamel.size(); c++) 
	{
		if (c >= 65 && c <= 90)
		{
			temp.push_back(c);
			sCamel.erase(c);
		}
	}

	std::for_each(temp.begin(), temp.end(), [](char c) {return '_' + c; });
	std::string sTheGoodOne = sCamel + temp;

    return sTheGoodOne;
}

std::string StringConverter::spaceRemover(std::string& sSnake)
{
	{
		sSnake.erase(std::remove(sSnake.begin(), sSnake.end(), '_'), sSnake.end());
		return sSnake;
	}
}
