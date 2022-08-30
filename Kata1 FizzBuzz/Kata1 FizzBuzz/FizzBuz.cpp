#include "FizzBuz.h"

std::string FizzBuz::checkIfFizzBuzz(int a)
{
    std::string result;

    if (a % 3 == 0 && a % 5 == 0)
    {
     result = "Fizz Buzz";
    }
    else if (a % 3==0)
    {
    result="Fizz";
    }
    else if (a % 5 == 0)
    {
   result = "Buzz";
    }
    else 
    {
       result= std::to_string(a);
    }

    return result;
}
