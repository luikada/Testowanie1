#include "pch.h"
#include "../Zad7StaticString/StringStatistic.h"

class StringStatisticsTestEmpty : public ::testing::Test
{
protected:
	StringStatisticsTestEmpty()
		: StringStatistic("")
	{
	}
};

	TEST_F(StringStatisticsTestEmpty, getLetterCount_Empty_ReturnsZero)
	{
		EXPECT_EQ(: StringStatistic.getLetterCharCount(), 0);
	}

	TEST_F(StringStatisticsTestEmpty, getDigitCount_Empty_ReturnsZero)
	{
		EXPECT_EQ(: StringStatistic.getDigitCharCount(), 0);
	}

	TEST_F(StringStatisticsTestEmpty, getSpecialCount_Empty_ReturnsZero)
	{
		EXPECT_EQ(StringStatistic.getSpecialCharCount(), 0);
	}