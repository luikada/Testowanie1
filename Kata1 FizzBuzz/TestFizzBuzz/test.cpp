#include "pch.h"
#include "../Kata1 FizzBuzz/FizzBuz.h

TEST(TestFizzBuzz, fizzBuzz) 
{
FizzBuz fizzbuzz;
  EXPECT_EQ(fizzbuzz.checkIfFizzBuzz(1)"1");
  EXPECT_EQ(fizzbuzz.checkIfFizzBuzz(2)"2");
  EXPECT_EQ(fizzbuzz.checkIfFizzBuzz(3)"Fizz");
  EXPECT_EQ(fizzbuzz.checkIfFizzBuzz(5)"Buzz");
  EXPECT_EQ(fizzbuzz.checkIfFizzBuzz(15)"FizzBuzz");

}