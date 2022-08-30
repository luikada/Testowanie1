// Zad2Twostrings.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

int mutualLetters(std::string s1, std::string s2)
{
    std::set<char>catcher;
    
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            catcher.insert(s1[i]);
        }
    }
    return catcher.size();
}

int main()
{
    std::string k = "kasia";
    std::string b = "basia";
  auto result=  mutualLetters(k, b);
    std::cout << result; 
}

