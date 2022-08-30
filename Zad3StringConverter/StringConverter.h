#pragma once
#include <string>

class StringConverter
{
private:
	std::string spaceRemover(std::string& sSnake);

public: 
	std::string toCamelCase(std::string sSnake);
	std::string toSnakeCase(std::string sCamel);

};

