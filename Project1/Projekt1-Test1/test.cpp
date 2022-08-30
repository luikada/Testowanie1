#include "pch.h"
#include "../Project1/Calculator.h"

TEST(SumTest, Test2Plus2Equals4)
{
	Calculator calc;

	EXPECT_EQ(calc.sumOfaB(2,2), 4);
}