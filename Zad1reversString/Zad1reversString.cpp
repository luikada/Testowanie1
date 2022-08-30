//Napisz funkcję, która odwróci podanego stringa.


#include <iostream>
#include <string>
#include <algorithm>

std::string Reversing(std::string &s)
{

    std::reverse(s.begin(), s.end());
    return s;
}

int main()
{
    std::string hW= "Hello World!";
    auto res = Reversing(hW);
    std::cout << res; 
}

